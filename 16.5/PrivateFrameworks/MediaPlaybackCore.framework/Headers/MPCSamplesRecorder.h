// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCSAMPLESRECORDER_H
#define MPCSAMPLESRECORDER_H

@class NSString, NSMutableArray;
@protocol OS_dispatch_queue, MPCSamplesRecorderDelegate;

#import <Foundation/Foundation.h>

#import "MPCFirstFailureDetector.h"

@interface MPCSamplesRecorder : NSObject {
    int _k;
    CGFloat _Q;
    NSObject<OS_dispatch_queue> *_accessQueue;
}


@property (readonly, weak, nonatomic) NSObject<MPCSamplesRecorderDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) MPCFirstFailureDetector *firstFailureDetector; // ivar: _firstFailureDetector
@property (readonly, nonatomic) int glitches; // ivar: _glitches
@property (readonly, nonatomic) CGFloat max; // ivar: _max
@property (readonly, nonatomic) CGFloat mean; // ivar: _mean
@property (readonly, nonatomic) CGFloat min; // ivar: _min
@property (readonly, copy, nonatomic) NSString *modelID; // ivar: _modelID
@property (readonly, nonatomic) int numberOfSamples;
@property (readonly, copy, nonatomic) NSString *recordID; // ivar: _recordID
@property (readonly, nonatomic) CGFloat rms; // ivar: _rms
@property (readonly, nonatomic) NSMutableArray *samples; // ivar: _samples
@property (readonly, nonatomic, getter=isStoringSamples) BOOL storingSamples; // ivar: _storingSamples
@property (readonly, nonatomic) int thermalLevel; // ivar: _thermalLevel


-(id)description;
-(id)dictionaryRepresentation;
-(id)flushSamplesToCSVDataWithHeader:(BOOL)arg0 ;
-(id)initWithRecordID:(id)arg0 modelID:(id)arg1 firstFailureDetector:(id)arg2 shouldStoreSamples:(BOOL)arg3 delegate:(id)arg4 ;
-(void)recordSample:(id)arg0 ;


@end


#endif