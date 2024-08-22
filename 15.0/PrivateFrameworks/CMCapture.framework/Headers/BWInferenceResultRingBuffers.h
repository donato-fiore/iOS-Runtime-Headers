// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWINFERENCERESULTRINGBUFFERS_H
#define BWINFERENCERESULTRINGBUFFERS_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface BWInferenceResultRingBuffers : NSObject {
    *OpaqueFigSimpleMutex _lock;
    NSMutableDictionary *_rings;
}




-(id)init;
-(id)retrieveInferencesForType:(int)arg0 beginning:(struct ? )arg1 until:(struct ? )arg2 ;
-(void)bufferingStatsForType:(int)arg0 firstOut:(struct ? *)arg1 lastOut:(struct ? *)arg2 countOut:(*int)arg3 ;
-(void)dealloc;
-(void)insertInferenceResultsFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)setupRingBuffer:(int)arg0 inferencesOfType:(int)arg1 ;


@end


#endif