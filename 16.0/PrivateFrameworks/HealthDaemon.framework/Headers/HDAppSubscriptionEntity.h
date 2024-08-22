// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDAPPSUBSCRIPTIONENTITY_H
#define HDAPPSUBSCRIPTIONENTITY_H



#import "HDHealthEntity.h"

@interface HDAppSubscriptionEntity : HDHealthEntity



+(BOOL)addSubscriptionWithBundleID:(id)arg0 dataCode:(NSInteger)arg1 updateFrequency:(NSUInteger)arg2 profile:(id)arg3 error:(*id)arg4 ;
+(BOOL)removeSubscriptionsWithBundleID:(id)arg0 dataCode:(NSInteger)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(BOOL)setLastAnchor:(id)arg0 lastAckTime:(id)arg1 forBundleID:(id)arg2 dataTypes:(id)arg3 profile:(id)arg4 error:(*id)arg5 ;
+(BOOL)setLaunchTimeHysteresis:(id)arg0 forBundleID:(id)arg1 dataTypes:(id)arg2 profile:(id)arg3 error:(*id)arg4 ;
+(NSInteger)protectionClass;
+(id)allSubscriptionsForBundleID:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)allSubscriptionsForType:(NSInteger)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)databaseTable;
+(id)subscriptionForBundleID:(id)arg0 dataCode:(NSInteger)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(id)tableAliases;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif