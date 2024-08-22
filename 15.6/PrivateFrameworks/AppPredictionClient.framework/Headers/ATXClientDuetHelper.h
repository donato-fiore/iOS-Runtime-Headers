// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXCLIENTDUETHELPER_H
#define ATXCLIENTDUETHELPER_H


#import <Foundation/Foundation.h>


@interface ATXClientDuetHelper : NSObject



+(id)sharedInstance;
-(id)_getIntentEventForSource:(NSInteger)arg0 startDate:(id)arg1 endDate:(id)arg2 otherPredicates:(id)arg3 bundleIdFilter:(id)arg4 limit:(NSUInteger)arg5 ;
-(id)_queryDuetStream:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 otherPredicates:(id)arg3 limit:(NSUInteger)arg4 ;
-(id)_queryDuetStreamUnbatched:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 otherPredicates:(id)arg3 limit:(NSUInteger)arg4 ;
-(id)getActivityEventsBetweenStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)getActivityEventsBetweenStartDate:(id)arg0 endDate:(id)arg1 bundleIdFilter:(id)arg2 ;
-(id)getIntentEventsBetweenStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)getIntentEventsBetweenStartDate:(id)arg0 endDate:(id)arg1 bundleIdFilter:(id)arg2 forSource:(NSInteger)arg3 ;
-(id)getIntentEventsBetweenStartDate:(id)arg0 endDate:(id)arg1 forSource:(NSInteger)arg2 ;
-(void)_enumerateBatchesInDuetStream:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 otherPredicates:(id)arg3 limit:(NSUInteger)arg4 block:(id)arg5 ;


@end


#endif