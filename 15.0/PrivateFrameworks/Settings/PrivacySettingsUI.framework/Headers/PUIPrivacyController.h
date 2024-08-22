// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUIPRIVACYCONTROLLER_H
#define PUIPRIVACYCONTROLLER_H

@class PSListController, PSSpecifier, ACAccountStore, NSNumber, CoreTelephonyClient, NSString;
@protocol CoreTelephonyClientCarrierBundleDelegate, PSListControllerTestableSpecifiers;



@interface PUIPrivacyController : PSListController <CoreTelephonyClientCarrierBundleDelegate, PSListControllerTestableSpecifiers>

 {
    PSSpecifier *_locationSpecifier;
    ACAccountStore *_accountStore;
}


@property (retain, nonatomic) NSNumber *_cachedLocationServicesAvailableValue; // ivar: __cachedLocationServicesAvailableValue
@property (retain, nonatomic) CoreTelephonyClient *_client; // ivar: __client
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)booleanCapabilitiesToTest;
+(void)formatSearchEntries:(id)arg0 parent:(id)arg1 ;
-(BOOL)shouldReloadSpecifiersOnResume;
-(id)_accountStore;
-(id)capabilityEnabled:(id)arg0 ;
-(id)init;
-(id)locationServicesEnabled:(id)arg0 ;
-(id)specifiers;
-(void)carrierBundleChange:(id)arg0 ;
-(void)refreshLocationServicesAvailable;
-(void)setCapabilityEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)updateLocationServicesVisibility;


@end


#endif