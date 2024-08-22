// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUIENGAGEMENTREMOTEVIEWCONTROLLER_H
#define AMSUIENGAGEMENTREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController;
@protocol AMSUIEngagementTaskHostInterface, AMSUIEngagementTaskRemoteInterface;



@interface AMSUIEngagementRemoteViewController : UIRemoteViewController

@property (weak, nonatomic) NSObject<AMSUIEngagementTaskHostInterface> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<AMSUIEngagementTaskRemoteInterface> *remoteProxy;


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)engagementTaskDidFinishWithResult:(id)arg0 error:(id)arg1 completion:(id)arg2 ;
-(void)preferredContentSizeDidChange:(struct CGSize )arg0 ;


@end


#endif