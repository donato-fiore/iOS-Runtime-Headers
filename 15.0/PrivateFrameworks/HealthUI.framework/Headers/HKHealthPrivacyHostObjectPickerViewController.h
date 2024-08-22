// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKHEALTHPRIVACYHOSTOBJECTPICKERVIEWCONTROLLER_H
#define HKHEALTHPRIVACYHOSTOBJECTPICKERVIEWCONTROLLER_H

@class UIRemoteViewController;
@protocol HKHealthPrivacyHostRemoteViewController, HKHealthPrivacyServiceRemoteObjectPickerViewController, HKHealthPrivacyHostObjectPickerViewControllerDelegate;



@interface HKHealthPrivacyHostObjectPickerViewController : UIRemoteViewController <HKHealthPrivacyHostRemoteViewController>



@property (readonly, nonatomic) NSObject<HKHealthPrivacyServiceRemoteObjectPickerViewController> *_healthPrivacyServiceViewControllerProxy;
@property (weak, nonatomic) NSObject<HKHealthPrivacyHostObjectPickerViewControllerDelegate> *delegate; // ivar: _delegate


+(BOOL)shouldPropagateAppearanceCustomizations;
+(id)exportedInterface;
+(id)requestRemoteViewControllerWithConnectionHandler:(id)arg0 ;
+(id)serviceViewControllerInterface;
-(void)didFinishWithError:(id)arg0 ;
-(void)setPromptSession:(id)arg0 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif