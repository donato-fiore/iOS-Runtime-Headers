// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKFACESNAPSHOTVIEWCONTROLLER_H
#define NTKFACESNAPSHOTVIEWCONTROLLER_H

@class UIViewController, NSString, UIImageView, UIImage;
@protocol NTKFaceObserver;


#import "NTKFace.h"
#import "NTKFaceSnapshotCacheRequest.h"

@interface NTKFaceSnapshotViewController : UIViewController <NTKFaceObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NTKFace *face; // ivar: _face
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) UIImage *snapshotImage; // ivar: _snapshotImage
@property (retain, nonatomic) NSString *snapshotKeyOfSnapshotImage; // ivar: _snapshotKeyOfSnapshotImage
@property (retain, nonatomic) NTKFaceSnapshotCacheRequest *snapshotRequest; // ivar: _snapshotRequest
@property (readonly) Class superclass;


-(id)initWithFace:(id)arg0 ;
-(void)_attemptToFetchSnapshot;
-(void)_handleSnapshot:(id)arg0 forKey:(id)arg1 ;
-(void)_updateFaceSnapshotIfNecessaryOfFace;
-(void)dealloc;
-(void)faceConfigurationDidChange:(id)arg0 ;
-(void)faceResourceDirectoryDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif