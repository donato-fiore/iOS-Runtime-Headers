// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKEVENTSTATSCOUNTERINTERNAL_H
#define _DKEVENTSTATSCOUNTERINTERNAL_H

@class NSString, NSArray, PETEventTracker;

#import <Foundation/Foundation.h>


@interface _DKEventStatsCounterInternal : NSObject {
    os_unfair_lock_s _lock;
    BOOL _hasType;
    BOOL _hasResult;
    NSUInteger _numCounters;
    *NSUInteger _counters;
    NSString *_eventName;
    NSString *_eventType;
    NSArray *_typeValues;
    NSString *_domain;
    PETEventTracker *_eventTracker;
}




-(void)dealloc;


@end


#endif