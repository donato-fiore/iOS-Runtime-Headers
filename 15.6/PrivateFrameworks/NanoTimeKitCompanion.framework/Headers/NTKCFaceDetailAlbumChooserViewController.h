// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKCFACEDETAILALBUMCHOOSERVIEWCONTROLLER_H
#define NTKCFACEDETAILALBUMCHOOSERVIEWCONTROLLER_H

@class NSString;
@protocol _NTKCFaceDetailAlbumChooserViewControllerDelegate, NTKCFaceDetailAlbumChooserViewControllerDelegate;


#import "NTKCNavigationController.h"
#import "_NTKCFaceDetailAlbumChooserViewController.h"
#import "NTKCompanionSyncedAlbumEditor.h"
#import "NTKFace.h"

@interface NTKCFaceDetailAlbumChooserViewController : NTKCNavigationController <_NTKCFaceDetailAlbumChooserViewControllerDelegate>

 {
    _NTKCFaceDetailAlbumChooserViewController *_implementationVC;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NTKCFaceDetailAlbumChooserViewControllerDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NTKCompanionSyncedAlbumEditor *editor;
@property (readonly, nonatomic) NTKFace *face;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL inGallery;
@property (readonly) Class superclass;


-(id)initWithPhotosEditor:(id)arg0 forFace:(id)arg1 inGallery:(BOOL)arg2 ;
-(void)_albumChooserDidFinish:(id)arg0 ;


@end


#endif