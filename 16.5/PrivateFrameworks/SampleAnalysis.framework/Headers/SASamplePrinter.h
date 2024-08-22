// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASAMPLEPRINTER_H
#define SASAMPLEPRINTER_H

@class NSMutableDictionary, NSMutableArray, NSString, NSUUID;

#import <Foundation/Foundation.h>

#import "SAOutputStream.h"
#import "SASamplePrintOptions.h"
#import "SATimestamp.h"
#import "SAHIDEvent.h"
#import "SATask.h"
#import "SAThread.h"
#import "SASampleStore.h"

@interface SASamplePrinter : NSObject {
    SAOutputStream *_stream;
    SASamplePrintOptions *_options;
    BOOL _hasFilterApplied;
    SATimestamp *_reportStartTime;
    SATimestamp *_reportEndTime;
    NSUInteger _reportStartSampleIndex;
    NSUInteger _reportEndSampleIndex;
    NSUInteger _numSamples;
    NSMutableDictionary *_binaryImagesHit;
    NSMutableDictionary *_indexForImage;
    CGFloat _minimumSamplingInterval;
    NSMutableArray *_timeJumps;
    BOOL _potentiallyHit65324447;
    BOOL _avoided65324447;
    SAHIDEvent *_targetHIDEvent;
    NSMutableArray *_targetHidStepSamples;
    SATask *_heaviestTask;
    SAThread *_heaviestThread;
}


@property (copy) NSString *headerNote; // ivar: _headerNote
@property (copy) NSUUID *incidentUUID; // ivar: _incidentUUID
@property (copy) SASamplePrintOptions *options;
@property (readonly) SASampleStore *sampleStore; // ivar: _sampleStore
@property BOOL shareWithAppDevs; // ivar: _shareWithAppDevs


-(id)callTreeForDispatchQueue:(id)arg0 andThread:(id)arg1 inTask:(id)arg2 ;
-(id)callTreeForDispatchQueue:(id)arg0 swiftTask:(id)arg1 thread:(id)arg2 inTask:(id)arg3 ;
-(id)callTreeForExecutable:(id)arg0 ;
-(id)callTreeForSwiftTask:(id)arg0 thread:(id)arg1 inTask:(id)arg2 ;
-(id)callTreeForTask:(id)arg0 ;
-(id)callTreeForThread:(id)arg0 inTask:(id)arg1 ;
-(id)callTreesForThreadsInTask:(id)arg0 ;
-(id)initWithSampleStore:(id)arg0 ;
-(void)filterToDisplayTimeIndexStart:(NSUInteger)arg0 end:(NSUInteger)arg1 ;
-(void)filterToMachAbsTimeRangeStart:(NSUInteger)arg0 end:(NSUInteger)arg1 ;
-(void)filterToTimestampRangeStart:(id)arg0 end:(id)arg1 ;
-(void)filterToWallTimeRangeStart:(CGFloat)arg0 end:(CGFloat)arg1 ;
-(void)printToMutableData:(id)arg0 ;
-(void)printToStream:(struct __sFILE *)arg0 ;


@end


#endif