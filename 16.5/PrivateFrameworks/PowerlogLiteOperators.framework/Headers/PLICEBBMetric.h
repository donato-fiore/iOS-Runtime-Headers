// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLICEBBMETRIC_H
#define PLICEBBMETRIC_H

@class NSNumber, NSData, NSMutableDictionary, PLAgent, NSString, NSDictionary, PLTimer;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PLICEBBHardwareMessage.h"

@interface PLICEBBMetric : NSObject

@property (retain) NSNumber *aPeriodicProfileId; // ivar: _aPeriodicProfileId
@property (retain) NSNumber *aPeriodicTriggerCnt; // ivar: _aPeriodicTriggerCnt
@property (retain) NSData *aPeriodicTriggerPayload; // ivar: _aPeriodicTriggerPayload
@property (retain) NSMutableDictionary *egprsSimMetrics; // ivar: _egprsSimMetrics
@property (retain) NSNumber *error; // ivar: _error
@property (retain) PLAgent *logAgent; // ivar: _logAgent
@property (retain) NSMutableDictionary *lteSimMetrics; // ivar: _lteSimMetrics
@property (retain) NSString *notifyTitle; // ivar: _notifyTitle
@property (retain) NSDictionary *plistSimMetrics; // ivar: _plistSimMetrics
@property (retain) NSMutableDictionary *prodMetrics; // ivar: _prodMetrics
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain) NSMutableDictionary *sendSimMetrics; // ivar: _sendSimMetrics
@property (retain) PLICEBBHardwareMessage *storeMetricsLogger; // ivar: _storeMetricsLogger
@property (retain) NSMutableDictionary *tdsSimMetrics; // ivar: _tdsSimMetrics
@property (retain) PLTimer *tickTock; // ivar: _tickTock
@property (retain) NSMutableDictionary *umtsSimMetrics; // ivar: _umtsSimMetrics


+(id)sharedInstance;
-(BOOL)registerForNotifClient:(id)arg0 andProfile:(id)arg1 ;
-(void)deregisterForNotifications:(id)arg0 ;
-(void)initializeDataStoreBBTS:(id)arg0 triggerCnt:(id)arg1 triggerId:(id)arg2 ;
-(void)initializeMetricsDictWithTS:(id)arg0 triggerCnt:(id)arg1 triggerId:(id)arg2 ;
-(void)initializeMetricsSim;
-(void)modelProdMetricsNotify;
-(void)modelSimMetricsNotify:(id)arg0 ;
-(void)queueAperiodicMetricId:(id)arg0 payload:(id)arg1 profileId:(id)arg2 ;
-(void)queuePeriodicMetricId:(id)arg0 payload:(id)arg1 forTrigger:(id)arg2 ;


@end


#endif