// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKHEALTHPRIVACYHOSTRECALIBRATEESTIMATESVIEWCONTROLLER_H
#define HKHEALTHPRIVACYHOSTRECALIBRATEESTIMATESVIEWCONTROLLER_H

@class UIRemoteViewController;
@protocol HKHealthPrivacyHostRemoteViewController, HKHealthPrivacyServiceRemoteRecalibrateEstimatesViewController, HKHealthPrivacyHostRecalibrateEstimatesControllerDelegate;



@interface HKHealthPrivacyHostRecalibrateEstimatesViewController : UIRemoteViewController <HKHealthPrivacyHostRemoteViewController>



@property (readonly, nonatomic) NSObject<HKHealthPrivacyServiceRemoteRecalibrateEstimatesViewController> *_healthPrivacyServiceViewControllerProxy;
@property (weak, nonatomic) NSObject<HKHealthPrivacyHostRecalibrateEstimatesControllerDelegate> *delegate; // ivar: _delegate


+(BOOL)shouldPropagateAppearanceCustomizations;
+(id)exportedInterface;
+(id)requestRemoteViewControllerWithConnectionHandler:(id)arg0 ;
+(id)serviceViewControllerInterface;
-(void)didFinishWithError:(id)arg0 ;
-(void)setRequestRecord:(id)arg0 completion:(id)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif