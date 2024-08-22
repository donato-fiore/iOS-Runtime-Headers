// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXLTHISTOGRAMCALCULATOR_H
#define AXLTHISTOGRAMCALCULATOR_H


#import <Foundation/Foundation.h>


@interface AXLTHistogramCalculator : NSObject



+(id)histogramForAudioPCMBuffer:(id)arg0 ;
+(id)histogramForAudioQueueBuffer:(struct AudioQueueBuffer *)arg0 packetCount:(NSInteger)arg1 channelsCount:(NSInteger)arg2 format:(NSUInteger)arg3 ;
+(id)histogramForFloat32MonoBuffer:(*float)arg0 samplesCount:(NSInteger)arg1 ;
+(id)histogramForInt16MonoBuffer:(*short)arg0 samplesCount:(NSInteger)arg1 ;


@end


#endif