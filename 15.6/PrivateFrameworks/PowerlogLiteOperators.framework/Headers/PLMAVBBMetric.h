// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLMAVBBMETRIC_H
#define PLMAVBBMETRIC_H

@class NSNumber, NSData, PLAgent, NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "PLMAVBBHardwareMessage.h"

@interface PLMAVBBMetric : NSObject

@property (retain) NSNumber *aPeriodicProfileId; // ivar: _aPeriodicProfileId
@property (retain) NSNumber *aPeriodicTriggerCnt; // ivar: _aPeriodicTriggerCnt
@property (retain) NSData *aPeriodicTriggerPayload; // ivar: _aPeriodicTriggerPayload
@property (retain) PLAgent *logAgent; // ivar: _logAgent
@property (retain) NSString *notifyTitle; // ivar: _notifyTitle
@property (retain) NSMutableDictionary *prodMetrics; // ivar: _prodMetrics
@property (retain) PLMAVBBHardwareMessage *storeMetricsLogger; // ivar: _storeMetricsLogger


+(id)sharedInstance;
-(BOOL)registerForNotifClient:(id)arg0 andProfile:(id)arg1 ;
-(void)initializeDataStoreBBTS:(id)arg0 triggerCnt:(id)arg1 triggerId:(id)arg2 ;
-(void)initializeMetricsDictWithTS:(id)arg0 triggerCnt:(id)arg1 triggerId:(id)arg2 ;
-(void)modelProdMetricsNotify;
-(void)queueAperiodicMetricId:(id)arg0 payload:(id)arg1 profileId:(id)arg2 ;
-(void)queuePeriodicMetricId:(id)arg0 payload:(id)arg1 forTrigger:(id)arg2 ;


@end


#endif