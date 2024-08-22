// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOSTREAMCOMPOSESERVICEVIEWCONTROLLER_H
#define PXPHOTOSTREAMCOMPOSESERVICEVIEWCONTROLLER_H

@class SLComposeServiceViewController, NSString;
@protocol PXPhotoStreamComposeServiceDelegate;



@interface PXPhotoStreamComposeServiceViewController : SLComposeServiceViewController

@property (nonatomic) BOOL addToExistingWorkflow; // ivar: _addToExistingWorkflow
@property (retain, nonatomic) NSString *albumTitle; // ivar: _albumTitle
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (weak, nonatomic) NSObject<PXPhotoStreamComposeServiceDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL shouldAllowAlbumPicking; // ivar: _shouldAllowAlbumPicking


+(id)createCanonicalInstance;
+(void)initialize;
+(void)registerCanonicalClass:(Class)arg0 ;
-(void)setAssetsToShare:(id)arg0 ;
-(void)setSourcesToShare:(id)arg0 ;


@end


#endif