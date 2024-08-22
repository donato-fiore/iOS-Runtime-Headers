// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDAPPSUBSCRIPTIONAPPLAUNCHENTITY_H
#define HDAPPSUBSCRIPTIONAPPLAUNCHENTITY_H



#import "HDHealthEntity.h"

@interface HDAppSubscriptionAppLaunchEntity : HDHealthEntity



+(BOOL)insertOrUpdateAppSDKVersion:(unsigned int)arg0 forBundleID:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(BOOL)removeBundleIdentifier:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(BOOL)setLaunchTime:(id)arg0 forBundleID:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)launchTimeForBundleID:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)tableAliases;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
+(unsigned int)appSDKVersionForBundleID:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;


@end


#endif