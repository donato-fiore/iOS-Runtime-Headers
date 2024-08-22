// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMLGAUSSIANSAMPLER_H
#define PMLGAUSSIANSAMPLER_H

@class NSString;
@protocol PMLSampler;

#import <Foundation/Foundation.h>


@interface PMLGaussianSampler : NSObject <PMLSampler>

 {
    ? _rng;
    float _magnitude;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(float)sample;
-(id)initWithMagnitude:(float)arg0 ;
-(id)initWithMagnitude:(float)arg0 seed:(NSUInteger)arg1 ;


@end


#endif