// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUIENGAGEMENTREMOTEVIEWCONTROLLER_H
#define AMSUIENGAGEMENTREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol AMSUIEngagementTaskHostInterface, AMSUIEngagementTaskRemoteInterface;



@interface AMSUIEngagementRemoteViewController : UIRemoteViewController <AMSUIEngagementTaskHostInterface>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AMSUIEngagementTaskHostInterface> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<AMSUIEngagementTaskRemoteInterface> *remoteProxy;
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)engagementTaskDidFinishWithResult:(id)arg0 error:(id)arg1 completion:(id)arg2 ;
-(void)preferredContentSizeDidChange:(struct CGSize )arg0 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif