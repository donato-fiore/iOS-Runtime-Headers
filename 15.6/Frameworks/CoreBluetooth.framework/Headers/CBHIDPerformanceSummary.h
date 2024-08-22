// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CBHIDPERFORMANCESUMMARY_H
#define CBHIDPERFORMANCESUMMARY_H

@class NSError;

#import <Foundation/Foundation.h>

#import "CBDevice.h"

@interface CBHIDPerformanceSummary : NSObject

@property (retain, nonatomic) CBDevice *device; // ivar: _device
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) CGFloat errorRate; // ivar: _errorRate
@property (nonatomic) CGFloat intervalSecondsExpected; // ivar: _intervalSecondsExpected
@property (nonatomic) CGFloat intervalSecondsMax; // ivar: _intervalSecondsMax
@property (nonatomic) char rssi; // ivar: _rssi




@end


#endif