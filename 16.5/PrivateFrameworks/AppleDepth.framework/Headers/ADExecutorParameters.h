// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ADEXECUTORPARAMETERS_H
#define ADEXECUTORPARAMETERS_H

@class NSString;

#import <Foundation/Foundation.h>

#import "ADLogManager.h"
#import "ADTimeProfiler.h"

@interface ADExecutorParameters : NSObject

@property (copy, nonatomic) NSString *intermediatesOutputPath; // ivar: _intermediatesOutputPath
@property (retain, nonatomic) ADLogManager *logger; // ivar: _logger
@property (nonatomic) BOOL powerMeasureMode; // ivar: _powerMeasureMode
@property (nonatomic) NSInteger stepsToSkip; // ivar: _stepsToSkip
@property (retain, nonatomic) ADTimeProfiler *timeProfiler; // ivar: _timeProfiler


-(id)init;


@end


#endif