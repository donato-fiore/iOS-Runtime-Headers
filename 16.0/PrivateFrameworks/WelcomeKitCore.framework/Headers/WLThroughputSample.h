// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLTHROUGHPUTSAMPLE_H
#define WLTHROUGHPUTSAMPLE_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface WLThroughputSample : NSObject

@property (nonatomic) NSUInteger bytes; // ivar: _bytes
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (nonatomic) NSUInteger expectedBytes; // ivar: _expectedBytes
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate




@end


#endif