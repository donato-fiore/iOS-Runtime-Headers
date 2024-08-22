// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
-(void)dealloc;
-(void)prune;


@end


#endif