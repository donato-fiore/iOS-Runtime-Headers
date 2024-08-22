// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CTUIWIRELESSUSAGEANDAPPPOLICYCONTROLLER_H
#define CTUIWIRELESSUSAGEANDAPPPOLICYCONTROLLER_H

@class PSListController, CoreTelephonyClient, NSString, PSSpecifier;
@protocol CoreTelephonyClientSubscriberDelegate;


#import "PSUIAppDataUsageGroup.h"

@interface CTUIWirelessUsageAndAppPolicyController : PSListController <CoreTelephonyClientSubscriberDelegate>



@property (retain, nonatomic) PSUIAppDataUsageGroup *appDataUsageGroup; // ivar: _appDataUsageGroup
@property (retain, nonatomic) CoreTelephonyClient *coreTelephonyClient; // ivar: _coreTelephonyClient
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PSSpecifier *groupSpecifier; // ivar: _groupSpecifier
@property (readonly) NSUInteger hash;
@property BOOL shouldCalculateUsage; // ivar: _shouldCalculateUsage
@property (readonly) Class superclass;


-(BOOL)shouldReloadSpecifiersOnResume;
-(id)getLogger;
-(id)init;
-(id)selectSpecifier:(id)arg0 ;
-(id)specifiers;
-(void)_handleCellularPlanChangedNotification:(id)arg0 ;
-(void)_handleNewCarrierNotification:(id)arg0 ;
-(void)_handleWirelessDataUsageChangedNotification:(id)arg0 ;
-(void)dealloc;
-(void)managedConfigurationProfileListDidChange;
-(void)managedConfigurationSettingsDidChange;
-(void)simStatusDidChange:(id)arg0 status:(id)arg1 ;


@end


#endif