// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NOISESAMPLER_H
#define NOISESAMPLER_H


#import <Foundation/Foundation.h>


@interface NoiseSampler : NSObject {
    vector<unsigned long, std::allocator<unsigned long>> _alias;
    vector<float, std::allocator<float>> _unigram;
    mersenne_twister_engine<unsigned int, 32UL, 624UL, 397UL, 31UL, 2567483615U, 11UL, 4294967295U, 7UL, 2636928640U, 15UL, 4022730752U, 18UL, 1812433253U> _generator;
}




-(NSUInteger)drawNoise;
-(id)init;
-(id)initWithUnigram:(*float)arg0 ofSize:(NSUInteger)arg1 ;
-(id)initWithZipfOfSize:(NSUInteger)arg0 ;


@end


#endif