// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RPCONNECTIONMETRICS_H
#define RPCONNECTIONMETRICS_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface RPConnectionMetrics : NSObject {
    os_unfair_lock_s _reportLock;
    NSObject<OS_dispatch_queue> *_reportQueue;
    NSObject<OS_dispatch_source> *_reportTimer;
    BOOL _sendReport;
    NSUInteger _eventCount;
}


@property (retain, nonatomic) NSMutableDictionary *metrics; // ivar: _metrics


+(id)sharedMetrics;
-(id)init;
-(unsigned char)lengthToBucketIndex:(NSUInteger)arg0 ;
-(unsigned char)linkTypeToBucketIndex:(int)arg0 ;
-(unsigned char)rttToBucketIndex:(NSUInteger)arg0 ;
-(void)logRequestOnLinkType:(int)arg0 length:(NSUInteger)arg1 rtt:(NSUInteger)arg2 ;
-(void)reportMetrics;


@end


#endif