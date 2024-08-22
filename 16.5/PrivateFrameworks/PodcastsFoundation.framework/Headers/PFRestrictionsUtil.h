// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFRESTRICTIONSUTIL_H
#define PFRESTRICTIONSUTIL_H


#import <Foundation/Foundation.h>


@interface PFRestrictionsUtil : NSObject



+(BOOL)_fetchIsExplicitContentAllowed;
+(BOOL)isActiveAccountAllowedToUpdateRestrictions;
+(BOOL)isExplicitContentAllowed;
+(BOOL)isRestrictedByAdministrator;
+(BOOL)mustResolveInScreenTimePreferences;
+(void)reloadSettings;
+(void)setAllowExplicitContent;


@end


#endif