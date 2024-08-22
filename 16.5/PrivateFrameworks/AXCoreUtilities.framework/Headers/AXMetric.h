// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXMETRIC_H
#define AXMETRIC_H

@class NSMutableArray, NSString;
@protocol NSSecureCoding, AXMetricContainer;

#import <Foundation/Foundation.h>

#import "AXMetricSession.h"

@interface AXMetric : NSObject <NSSecureCoding, AXMetricContainer>



@property (retain, nonatomic) NSMutableArray *childMetrics; // ivar: _childMetrics
@property (nonatomic) NSInteger cpuInstructions; // ivar: _cpuInstructions
@property (nonatomic) NSInteger cpuTime; // ivar: _cpuTime
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger dirtyMemory; // ivar: _dirtyMemory
@property (nonatomic) NSInteger dirtyMemoryDelta; // ivar: _dirtyMemoryDelta
@property (nonatomic) NSInteger dirtyMemoryPeak; // ivar: _dirtyMemoryPeak
@property (nonatomic) NSInteger dirtyMemoryPeakDelta; // ivar: _dirtyMemoryPeakDelta
@property (nonatomic) NSInteger dirtyMemoryPeakLifetime; // ivar: _dirtyMemoryPeakLifetime
@property (readonly, nonatomic) CGFloat elapsedTime;
@property (nonatomic) CGFloat endTime; // ivar: _endTime
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL measurementsEnabled;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) *pc_session perfCheckSession; // ivar: _perfCheckSession
@property (weak, nonatomic) AXMetricSession *session; // ivar: _session
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)_formatDeltaKbAsMbString:(NSInteger)arg0 ;
-(id)_formatKbAsMbString:(NSInteger)arg0 ;
-(id)_initWithName:(id)arg0 session:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)measure:(id)arg0 tryExecute:(id)arg1 ;
-(id)startMeasure:(id)arg0 ;
-(void)_appendToReport:(id)arg0 withIndentation:(NSInteger)arg1 ;
-(void)_endMeasurement;
-(void)_startMeasurement;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)measure:(id)arg0 execute:(id)arg1 ;


@end


#endif