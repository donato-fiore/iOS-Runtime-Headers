// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALENTITLEMENTSVERIFIER_H
#define CALENTITLEMENTSVERIFIER_H


#import <Foundation/Foundation.h>


@interface CalEntitlementsVerifier : NSObject



+(BOOL)currentProcessHasAllowSuggestionsEntitlement;
+(BOOL)currentProcessHasBirthdayModificationEntitlement;
+(BOOL)currentProcessHasBooleanEntitlement:(id)arg0 ;
+(BOOL)currentProcessHasContactsUIEntitlement;
+(BOOL)currentProcessHasLocationdEffectiveBundleEntitlement;
+(BOOL)currentProcessHasSyncClientEntitlement;
+(BOOL)currentProcessHasTestingEntitlement;
+(BOOL)currentProcessHasWatchOSMutableDatabaseEntitlement;
+(BOOL)currentProcessIsCalendarDaemon;
+(BOOL)currentProcessIsDataAccess;
+(BOOL)currentProcessIsFirstPartyCalendarApp;
+(BOOL)currentProcessIsPreferences;
+(id)_currentProcessValueForEntitlement:(id)arg0 expectedType:(NSUInteger)arg1 ;
+(id)currentProcessGetStringEntitlement:(id)arg0 ;


@end


#endif