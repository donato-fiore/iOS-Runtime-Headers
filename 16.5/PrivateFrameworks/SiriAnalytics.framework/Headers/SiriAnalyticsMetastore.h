// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIANALYTICSMETASTORE_H
#define SIRIANALYTICSMETASTORE_H


#import <Foundation/Foundation.h>


@interface SiriAnalyticsMetastore : NSObject {
    ? storageURL;
    ? db;
    ? bootstrapped;
    ? schemas;
}




-(BOOL)endLastSpanWithClockIdentifier:(id)arg0 conditionType:(int)arg1 endedOn:(NSUInteger)arg2 ;
-(BOOL)storeSensitiveConditionSpan:(id)arg0 for:(id)arg1 bootSessionUUID:(id)arg2 ;
-(id)init;
-(id)sensitiveConditionsWithBootSessionUUIDs:(id)arg0 ;
-(void)bootstrap;
-(void)cleanupAbandonedClocksWithActiveClockIdentifier:(id)arg0 ;
-(void)createClock:(id)arg0 rootClockIdentifier:(id)arg1 bootSessionUUID:(id)arg2 startedOn:(NSUInteger)arg3 ;
-(void)dealloc;
-(void)endClock:(id)arg0 endedOn:(NSUInteger)arg1 endedReason:(NSUInteger)arg2 ;
-(void)prune;


@end


#endif