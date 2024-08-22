// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUWAVEFORMDATA_H
#define MRUWAVEFORMDATA_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MRUWaveformData : NSObject

@property (retain, nonatomic) NSArray *amplitudes; // ivar: _amplitudes


+(id)zero;
+(int)amplitudeCount;
-(float)maxAbsoluteDifferenceFrom:(id)arg0 ;
-(id)initWithAmplitudes:(id)arg0 ;
-(id)initWithFFTSamples:(*float)arg0 count:(int)arg1 sampleRate:(float)arg2 settings:(id)arg3 ;


@end


#endif