// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMREMINDERCREATIONREMOTEVIEWCONTROLLER_H
#define REMREMINDERCREATIONREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController, UIViewController<REMReminderCreationPublicViewController>;
@protocol REMReminderCreationRemoteViewController, REMReminderCreationViewServiceViewController;



@interface REMReminderCreationRemoteViewController : UIRemoteViewController <REMReminderCreationRemoteViewController>



@property (weak, nonatomic) UIViewController<REMReminderCreationPublicViewController> *publicViewController; // ivar: _publicViewController
@property (readonly, nonatomic, getter=viewServiceViewController) NSObject<REMReminderCreationViewServiceViewController> *viewServiceViewController;


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)viewHostDidDismiss;
-(void)viewServiceDidCancel;
-(void)viewServiceDidFailWithError:(id)arg0 ;
-(void)viewServiceDidFinish;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;
-(void)viewServicePreferredSizeDidChange:(struct CGSize )arg0 ;


@end


#endif