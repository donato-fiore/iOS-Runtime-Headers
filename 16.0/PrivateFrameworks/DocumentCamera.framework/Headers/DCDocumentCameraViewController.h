// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DCDOCUMENTCAMERAVIEWCONTROLLER_H
#define DCDOCUMENTCAMERAVIEWCONTROLLER_H

@class UIViewController;
@protocol DCDocumentCameraViewControllerDelegate;



@interface DCDocumentCameraViewController : UIViewController

@property (retain, nonatomic, setter=setChildViewController:) UIViewController *childViewController; // ivar: _childViewController
@property (weak, nonatomic) NSObject<DCDocumentCameraViewControllerDelegate> *docCamDelegate; // ivar: _docCamDelegate


+(BOOL)isAvailable;
+(id)defaultViewControllerWithDelegate:(id)arg0 ;
+(id)inProcessViewControllerWithDelegate:(id)arg0 ;
+(id)viewServiceViewControllerWithDelegate:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 childViewController:(id)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;


@end


#endif