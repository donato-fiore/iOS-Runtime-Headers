// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNKFACETIMECAMERAVIEWCONTROLLER_H
#define CNKFACETIMECAMERAVIEWCONTROLLER_H

@class CFXCameraViewController;
@protocol CNKFaceTimeCameraViewControllerDelegate;



@interface CNKFaceTimeCameraViewController : CFXCameraViewController

@property (nonatomic, weak) NSObject<CNKFaceTimeCameraViewControllerDelegate> *cameraDelegate; // ivar: cameraDelegate


-(id)initWithCaptureMode:(NSInteger)arg0 devicePosition:(NSInteger)arg1 flashMode:(NSInteger)arg2 aspectRatioCrop:(NSInteger)arg3 ;
-(void)effectBrowserViewController:(id)arg0 didSelectAppWithIdentifier:(id)arg1 ;
-(void)effectBrowserViewController:(id)arg0 didSelectEffect:(id)arg1 ;


@end


#endif