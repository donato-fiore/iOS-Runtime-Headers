// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSRESTRICTIONS_H
#define SSRESTRICTIONS_H


#import <Foundation/Foundation.h>


@interface SSRestrictions : NSObject



+(BOOL)_calculateIsRestrictionsPasscodeSet;
+(BOOL)_isExplicitContentDisallowedInCurrentStoreFront;
+(BOOL)_isExplicitContentRestrictedByDefaultInCurrentStoreFront;
+(BOOL)isActiveAccountAllowedToUpdateRestrictions;
+(id)setOfActiveRestrictionUUIDs;
+(void)didDisplayExplicitRestrictionAlertOfType:(NSInteger)arg0 ;
+(void)isExplicitContentDisallowedInCurrentStoreFront:(id)arg0 ;
+(void)isExplicitContentRestrictedByDefaultInCurrentStoreFront:(id)arg0 ;
+(void)isRestrictionsPasscodeSet:(id)arg0 ;
+(void)setAllowExplicitContent;
+(void)shouldDisplayExplicitRestrictionAlertOfType:(NSInteger)arg0 completionBlock:(id)arg1 ;


@end


#endif