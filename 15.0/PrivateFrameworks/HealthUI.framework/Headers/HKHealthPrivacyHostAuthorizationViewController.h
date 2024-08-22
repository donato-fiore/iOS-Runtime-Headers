// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKHEALTHPRIVACYHOSTAUTHORIZATIONVIEWCONTROLLER_H
#define HKHEALTHPRIVACYHOSTAUTHORIZATIONVIEWCONTROLLER_H

@class UIRemoteViewController;
@protocol HKHealthPrivacyHostRemoteViewController, HKHealthPrivacyServiceRemoteAuthorizationViewController, HKHealthPrivacyHostAuthorizationControllerDelegate;



@interface HKHealthPrivacyHostAuthorizationViewController : UIRemoteViewController <HKHealthPrivacyHostRemoteViewController>



@property (readonly, nonatomic) NSObject<HKHealthPrivacyServiceRemoteAuthorizationViewController> *_healthPrivacyServiceViewControllerProxy;
@property (weak, nonatomic) NSObject<HKHealthPrivacyHostAuthorizationControllerDelegate> *delegate; // ivar: _delegate


+(BOOL)shouldPropagateAppearanceCustomizations;
+(id)exportedInterface;
+(id)requestRemoteViewControllerWithConnectionHandler:(id)arg0 ;
+(id)serviceViewControllerInterface;
-(void)didFinishWithError:(id)arg0 ;
-(void)setRequestRecord:(id)arg0 presentationRequests:(id)arg1 ;
-(void)show;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif