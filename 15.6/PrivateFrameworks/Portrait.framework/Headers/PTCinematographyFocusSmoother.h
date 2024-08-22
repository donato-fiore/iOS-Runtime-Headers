// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTCINEMATOGRAPHYFOCUSSMOOTHER_H
#define PTCINEMATOGRAPHYFOCUSSMOOTHER_H


#import <Foundation/Foundation.h>

#import "MutableFloatArray.h"
#import "PTCinematographyFocusSmoother.h"

@interface PTCinematographyFocusSmoother : NSObject

@property (retain) MutableFloatArray *cachedSamples; // ivar: _cachedSamples
@property (readonly) BOOL didEndSamples; // ivar: _didEndSamples
@property (readonly) BOOL isEndOfSmoothedSamples;
@property (readonly) BOOL isSmoothedSampleAvailable;
@property (readonly) PTCinematographyFocusSmoother *lastFocusSmoother;
@property (readonly) NSUInteger minSamplesNeeded; // ivar: _minSamplesNeeded
@property (retain) PTCinematographyFocusSmoother *nextFocusSmoother; // ivar: _nextFocusSmoother
@property NSUInteger unprocessedSampleCount; // ivar: _unprocessedSampleCount


-(float)_getSmoothedSample;
-(float)_lastAddedSample;
-(float)nextSmoothedSample;
-(id)init;
-(void)_advanceToNextSmoothedSample;
-(void)_padByCount:(NSUInteger)arg0 ;
-(void)_padToFill;
-(void)addSample:(float)arg0 ;
-(void)endSamples;


@end


#endif