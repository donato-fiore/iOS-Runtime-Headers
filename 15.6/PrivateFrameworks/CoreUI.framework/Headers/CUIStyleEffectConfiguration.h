// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUISTYLEEFFECTCONFIGURATION_H
#define CUISTYLEEFFECTCONFIGURATION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CUIStyleEffectConfiguration : NSObject <NSCopying>



@property (copy, nonatomic) NSString *appearanceName; // ivar: _appearanceName
@property (nonatomic) CGFloat brightnessMultiplier; // ivar: _brightnessMultiplier
@property (nonatomic) NSUInteger colorTemperature; // ivar: _colorTemperature
@property (nonatomic) NSUInteger dimension1; // ivar: _dimension1
@property (nonatomic) CGFloat effectScale; // ivar: _effectScale
@property (nonatomic) BOOL foregroundColorShouldTintEffects; // ivar: _foregroundColorShouldTintEffects
@property (nonatomic) NSInteger presentationState; // ivar: _presentationState
@property (nonatomic) NSInteger state; // ivar: _state
@property (nonatomic) BOOL useSimplifiedEffect; // ivar: _useSimplifiedEffect
@property (nonatomic) NSInteger value; // ivar: _value


-(BOOL)shouldIgnoreForegroundColor;
-(BOOL)shouldRespectOutputBlending;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif