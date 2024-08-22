// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APLOCALENFORCEMENTMANAGER_H
#define APLOCALENFORCEMENTMANAGER_H



#import "APEnforcementManager.h"

@interface APLocalEnforcementManager : APEnforcementManager



-(BOOL)adServicesEnabled:(id)arg0 ;
-(BOOL)deviceRegionStorefrontEnabled;
-(BOOL)isU13MAIDEDU;
-(BOOL)loggingEnabled;
-(BOOL)shouldShowTCCWithAds;
-(id)accountStorefront;
-(id)appTrackingServiceProxy:(id)arg0 ;
// -(id)appTrackingXPCConnection:(id)arg0 withInvalidation:(unk)arg1  ;
-(id)disabledReasons;


@end


#endif