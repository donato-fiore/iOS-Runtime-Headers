// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPROCESSEXITAGGREGATORHISTOGRAM_H
#define PLPROCESSEXITAGGREGATORHISTOGRAM_H


#import <Foundation/Foundation.h>


@interface PLProcessExitAggregatorHistogram : NSObject

@property int duration_0_5; // ivar: _duration_0_5
@property int duration_10_60; // ivar: _duration_10_60
@property int duration_5_10; // ivar: _duration_5_10
@property int duration_60_above; // ivar: _duration_60_above
@property int duration_unknown; // ivar: _duration_unknown
@property int total; // ivar: _total


-(id)description;


@end


#endif