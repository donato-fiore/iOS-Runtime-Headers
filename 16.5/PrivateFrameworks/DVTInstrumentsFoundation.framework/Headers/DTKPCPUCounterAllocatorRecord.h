// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTKPCPUCOUNTERALLOCATORRECORD_H
#define DTKPCPUCOUNTERALLOCATORRECORD_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DTKPCPUCounterAllocatorRecord : NSObject

@property (retain, nonatomic) NSString *counterName; // ivar: _counterName
@property (retain, nonatomic) NSString *eventName; // ivar: _eventName
@property (retain, nonatomic) NSString *eventOrAliasName; // ivar: _eventOrAliasName
@property (nonatomic) NSUInteger hwIdx; // ivar: _hwIdx
@property (nonatomic) BOOL isPMI; // ivar: _isPMI
@property (nonatomic) *kpep_event kpepEvent; // ivar: _kpepEvent


-(id)initWithName:(id)arg0 nameOrAlias:(id)arg1 counterName:(id)arg2 kpepEvent:(struct kpep_event *)arg3 isPMI:(BOOL)arg4 hwIdx:(NSUInteger)arg5 ;


@end


#endif