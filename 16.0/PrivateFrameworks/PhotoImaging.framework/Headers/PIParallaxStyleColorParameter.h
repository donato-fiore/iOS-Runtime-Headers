// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIPARALLAXSTYLECOLORPARAMETER_H
#define PIPARALLAXSTYLECOLORPARAMETER_H

@class NSNumber;


#import "PIParallaxStyleParameter.h"

@interface PIParallaxStyleColorParameter : PIParallaxStyleParameter

@property (readonly, nonatomic) NSNumber *alphaValue; // ivar: _alphaValue
@property (readonly, nonatomic) NSNumber *blueValue; // ivar: _blueValue
@property (readonly, nonatomic) NSNumber *greenValue; // ivar: _greenValue
@property (readonly, nonatomic) NSNumber *redValue; // ivar: _redValue


-(BOOL)isEqualToParallaxStyleParameter:(id)arg0 ;
-(id)description;
-(id)evaluateWithContext:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithRed:(id)arg0 green:(id)arg1 blue:(id)arg2 alpha:(id)arg3 ;
-(id)type;


@end


#endif