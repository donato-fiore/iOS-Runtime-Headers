// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRPOLLCONTROLCLUSTERSETLONGPOLLINTERVALPARAMS_H
#define MTRPOLLCONTROLCLUSTERSETLONGPOLLINTERVALPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRPollControlClusterSetLongPollIntervalParams : NSObject

@property (retain, nonatomic, getter=getNewLongPollInterval) NSNumber *newLongPollInterval; // ivar: _newLongPollInterval
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif