// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCAPPENFORCEDRESTRICTIONUTILITIES_H
#define MCAPPENFORCEDRESTRICTIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface MCAppEnforcedRestrictionUtilities : NSObject



+(id)appUnavailableInRegionRestrictionForBundleID:(id)arg0 ;
+(id)clientUUIDForBundleID:(id)arg0 ;
+(id)currentCountryCodes;
+(id)enforcedRestrictionsForBundleID:(id)arg0 restrictionPlistURL:(id)arg1 countryCodes:(id)arg2 ;


@end


#endif