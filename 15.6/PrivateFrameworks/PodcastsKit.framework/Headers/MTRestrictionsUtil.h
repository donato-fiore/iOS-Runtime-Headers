// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTRESTRICTIONSUTIL_H
#define MTRESTRICTIONSUTIL_H


#import <Foundation/Foundation.h>


@interface MTRestrictionsUtil : NSObject



+(BOOL)_fetchIsExplicitContentAllowed;
+(BOOL)_isActiveAccountAllowedToUpdateRestrictions;
+(BOOL)_isRestrictedByAdministrator;
+(BOOL)_mustResolveInScreenTimePreferences;
+(BOOL)isExplicitContentAllowed;
+(id)_userDefaultsKeyForExplicitRestrictionAlertType:(int)arg0 ;
+(id)settingsURL;
+(id)settingsURLString;
+(int)explicitRestrictionAlertTypeForTypeString:(id)arg0 ;
+(void)_setAllowExplicitContent;
+(void)didDisplayExplicitRestrictionAlertOfType:(int)arg0 ;
+(void)reloadSettings;


@end


#endif