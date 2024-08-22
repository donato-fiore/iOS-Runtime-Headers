// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCRECORDINGSESSION_H
#define MPCRECORDINGSESSION_H

@class NSString, ICEnvironmentMonitor;
@protocol MPCSamplesRecorderDelegate, ICEnvironmentMonitorObserver;

#import <Foundation/Foundation.h>

#import "MPCSamplesRecorder.h"
#import "MPCFirstFailureDetector.h"
#import "MPCStatisticsReporter.h"

@interface MPCRecordingSession : NSObject <MPCSamplesRecorderDelegate, ICEnvironmentMonitorObserver>

 {
    BOOL _shouldRecordSamples;
    int _currentThermalLevel;
}


@property (readonly, nonatomic) MPCSamplesRecorder *currentRecorder; // ivar: _currentRecorder
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) MPCFirstFailureDetector *firstFailureDetector; // ivar: _firstFailureDetector
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *modelID; // ivar: _modelID
@property (readonly, copy, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (readonly, nonatomic) MPCStatisticsReporter *statisticsReporter; // ivar: _statisticsReporter
@property (readonly) Class superclass;
@property (readonly, nonatomic) ICEnvironmentMonitor *thermalMonitor; // ivar: _thermalMonitor


-(id)initWithModelID:(id)arg0 samplingTime:(CGFloat)arg1 renderingLimit:(CGFloat)arg2 shouldRecordSamples:(BOOL)arg3 ;
-(void)dealloc;
-(void)environmentMonitorDidChangeThermalLevel:(id)arg0 ;
-(void)flush;
-(void)recordSample:(id)arg0 ;
-(void)samplesRecorderHasNewSamples:(id)arg0 ;
-(void)save;


@end


#endif