// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STYSCENARIOREPORT_H
#define STYSCENARIOREPORT_H

@class SignpostInterval, NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "STYUserScenario.h"

@interface STYScenarioReport : NSObject

@property (retain) SignpostInterval *interval; // ivar: _interval
@property (readonly) NSString *issueCategory; // ivar: _issueCategory
@property (retain) NSString *metadata; // ivar: _metadata
@property (readonly) float observedFps; // ivar: _observedFps
@property (readonly) float observedLatencyInMs; // ivar: _observedLatencyInMs
@property (readonly) STYUserScenario *scenario; // ivar: _scenario
@property (readonly) NSUInteger scenarioEndTime; // ivar: _scenarioEndTime
@property (readonly) NSUInteger scenarioStartTime; // ivar: _scenarioStartTime
@property (retain) NSMutableDictionary *symptomsSignature; // ivar: _symptomsSignature
@property (readonly) float targetFps; // ivar: _targetFps
@property float targetLatencyInMs; // ivar: _targetLatencyInMs


+(id)reportFromSignpostEvent:(id)arg0 error:(*id)arg1 ;
+(id)reportFromSignpostInterval:(id)arg0 error:(*id)arg1 ;
-(id)convertDictionaryToString:(id)arg0 ;
-(id)initWithScenario:(id)arg0 ;
-(id)initWithSignpostEvent:(id)arg0 scenario:(id)arg1 error:(*id)arg2 ;
-(id)initWithSignpostInterval:(id)arg0 scenario:(id)arg1 error:(*id)arg2 ;


@end


#endif