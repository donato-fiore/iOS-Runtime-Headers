// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKCFACEDETAILCUSTOMPHOTOSVIEWCONTROLLER_H
#define NTKCFACEDETAILCUSTOMPHOTOSVIEWCONTROLLER_H

@class NSString;
@protocol NTKCFaceDetailCustomPhotosViewControllerDelegate;


#import "NTKCNavigationController.h"
#import "_NTKCFaceDetailCustomPhotosViewController.h"
#import "NTKCompanionCustomPhotosEditor.h"
#import "NTKFace.h"

@interface NTKCFaceDetailCustomPhotosViewController : NTKCNavigationController <NTKCFaceDetailCustomPhotosViewControllerDelegate>

 {
    _NTKCFaceDetailCustomPhotosViewController *_implementationVC;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NTKCFaceDetailCustomPhotosViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NTKCompanionCustomPhotosEditor *editor; // ivar: _editor
@property (retain, nonatomic) NTKFace *face; // ivar: _face
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL inGallery;
@property (readonly) Class superclass;


-(BOOL)isModalInPresentation;
-(id)initWithPhotosEditor:(id)arg0 forFace:(id)arg1 inGallery:(BOOL)arg2 faceView:(id)arg3 externalImagesSet:(BOOL)arg4 ;
-(void)customPhotosControllerDidFinish:(id)arg0 ;


@end


#endif