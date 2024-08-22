// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSVOICETRIGGERFIRSTPASSMETRICS_H
#define CSVOICETRIGGERFIRSTPASSMETRICS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CSVoiceTriggerFirstPassMetrics : NSObject

@property (readonly, nonatomic) NSNumber *firstPassInfoGeneratedTime; // ivar: _firstPassInfoGeneratedTime
@property (readonly, nonatomic) NSNumber *firstPassInfoProcessedTime; // ivar: _firstPassInfoProcessedTime


+(id)CSVoiceTriggerFirstPassMetricsWithFirstPassInfoGeneratedTime:(NSUInteger)arg0 firstPassInfoProcessedTime:(NSUInteger)arg1 ;
-(id)_initWithFirstPassInfoGeneratedTime:(NSUInteger)arg0 firstPassInfoProcessedTime:(NSUInteger)arg1 ;


@end


#endif