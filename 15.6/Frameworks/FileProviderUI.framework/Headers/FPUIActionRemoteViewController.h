// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPUIACTIONREMOTEVIEWCONTROLLER_H
#define FPUIACTIONREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController;
@protocol FPUIActionRemoteViewControllerDelegate;



@interface FPUIActionRemoteViewController : UIRemoteViewController

@property (weak, nonatomic) NSObject<FPUIActionRemoteViewControllerDelegate> *delegate; // ivar: _delegate


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif