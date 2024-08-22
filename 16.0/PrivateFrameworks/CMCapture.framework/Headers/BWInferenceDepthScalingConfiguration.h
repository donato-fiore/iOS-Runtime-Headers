// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWINFERENCEDEPTHSCALINGCONFIGURATION_H
#define BWINFERENCEDEPTHSCALINGCONFIGURATION_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface BWInferenceDepthScalingConfiguration : NSObject

@property (readonly, nonatomic) NSNumber *NANValue; // ivar: _NANValue
@property (readonly, nonatomic) BOOL allowUpsampling; // ivar: _allowUpsampling
@property (readonly, nonatomic) NSNumber *clampMax; // ivar: _clampMax
@property (readonly, nonatomic) NSNumber *clampMin; // ivar: _clampMin
@property (readonly, nonatomic) NSUInteger concurrencyWidth; // ivar: _concurrencyWidth
@property (readonly, nonatomic) BOOL flipX; // ivar: _flipX


-(id)initWithflipX:(BOOL)arg0 clampMin:(id)arg1 clampMax:(id)arg2 NANValue:(id)arg3 allowUpsampling:(BOOL)arg4 concurrencyWidth:(NSUInteger)arg5 ;
-(void)dealloc;


@end


#endif