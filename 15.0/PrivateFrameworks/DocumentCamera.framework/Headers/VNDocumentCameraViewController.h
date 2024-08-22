// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNDOCUMENTCAMERAVIEWCONTROLLER_H
#define VNDOCUMENTCAMERAVIEWCONTROLLER_H

@class UIViewController;
@protocol VNDocumentCameraViewControllerDelegate;



@interface VNDocumentCameraViewController : UIViewController

@property (retain, nonatomic, setter=setChildViewController:) UIViewController *childViewController; // ivar: _childViewController
@property (weak, nonatomic) NSObject<VNDocumentCameraViewControllerDelegate> *delegate; // ivar: _delegate


+(BOOL)isSupported;
+(id)newDefaultViewController;
+(id)newInProcessViewController;
+(id)newViewServiceViewController;
-(BOOL)_canShowWhileLocked;
-(BOOL)prefersStatusBarHidden;
-(id)init;
-(id)initWithChildViewController:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;


@end


#endif