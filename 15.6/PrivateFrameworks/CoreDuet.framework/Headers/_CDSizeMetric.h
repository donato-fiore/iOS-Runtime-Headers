// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CDSIZEMETRIC_H
#define _CDSIZEMETRIC_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>

#import "_CDSizeMetricFamily.h"

@interface _CDSizeMetric : NSObject {
    os_unfair_lock_s _lock;
    NSUInteger _scale;
    NSUInteger _count;
    NSUInteger _firstSize;
    NSUInteger _lastSize;
    NSUInteger _minimumSize;
    NSUInteger _maximumSize;
    NSUInteger _totalSizes;
    NSDate *_firstUpdate;
    NSDate *_lastUpdate;
    NSString *_name;
    NSString *_string;
    _CDSizeMetricFamily *_family;
}




-(id)initWithName:(id)arg0 string:(id)arg1 scale:(NSUInteger)arg2 family:(id)arg3 ;


@end


#endif