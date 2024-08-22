// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKNOISEMAP_H
#define GKNOISEMAP_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface GKNoiseMap : NSObject {
    *float _map;
    ? _sampleCount;
    ? _size;
    ? _origin;
}


@property (copy, nonatomic) NSDictionary *gradientColors; // ivar: _gradientColors
@property ? origin;
@property ? sampleCount;
@property (readonly, nonatomic, getter=isSeamless) BOOL seamless; // ivar: _seamless
@property ? size;


+(id)noiseMapWithNoise:(id)arg0 ;
+(id)noiseMapWithNoise:(id)arg0 size:(BOOL)arg1 originsampleCountseamless;
-(float)interpolatedValueAtPosition;
-(float)valueAtPosition;
-(id)initWithNoise:(id)arg0 ;
-(id)initWithNoise:(id)arg0 size:(BOOL)arg1 originsampleCountseamless;
-(int)mapIndexX:(int)arg0 y:(int)arg1 ;


@end


#endif