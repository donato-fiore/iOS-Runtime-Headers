// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCADAPTIVELEARNING_H
#define VCADAPTIVELEARNING_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VCAdaptiveLearning : NSObject {
    NSMutableDictionary *_callHistory;
    BOOL _dirty;
    int _shortTermHistoryLength;
    int _longTermHistoryLength;
    CGFloat _shortTermAdjustmentFactor;
    CGFloat _longTermAdjustmentFactor;
    CGFloat _shortTermValueWeight;
    CGFloat _longTermValueWeight;
    NSObject<OS_dispatch_queue> *_stateQueue;
}


@property (readonly) int adaptiveLearningState; // ivar: _adaptiveLearningState


-(id)initWithParameters:(id)arg0 ;
-(int)learntBitrateForSegment:(id)arg0 defaultValue:(int)arg1 ;
-(int)longTermAverageBWEForSegment:(id)arg0 ;
-(int)longTermAverageISBRForSegment:(id)arg0 ;
-(int)longTermAverageSARBRForSegment:(id)arg0 ;
-(int)longTermAverageSATXBRForSegment:(id)arg0 ;
-(int)longTermAverageTBRForSegment:(id)arg0 ;
-(int)previousISBRForSegment:(id)arg0 ;
-(int)shortTermAverageBWEForSegment:(id)arg0 ;
-(int)shortTermAverageISBRForSegment:(id)arg0 ;
-(int)shortTermAverageSARBRForSegment:(id)arg0 ;
-(int)shortTermAverageSATXBRForSegment:(id)arg0 ;
-(int)shortTermAverageTBRForSegment:(id)arg0 ;
-(void)dealloc;
-(void)saveCallSegmentHistory;
-(void)updateSegment:(id)arg0 TBR:(int)arg1 ISBTR:(int)arg2 SATXBR:(int)arg3 SARBR:(int)arg4 BWE:(int)arg5 ;


@end


#endif