// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAKEYFRAMEANIMATION_H
#define CAKEYFRAMEANIMATION_H

@class NSArray, NSString;


#import "CAPropertyAnimation.h"

@interface CAKeyframeAnimation : CAPropertyAnimation

@property (copy) NSArray *biasValues;
@property (copy) NSString *calculationMode;
@property (copy) NSArray *continuityValues;
@property (copy) NSArray *keyTimes;
@property *CGPath path;
@property (copy) NSString *rotationMode;
@property (copy) NSArray *tensionValues;
@property (copy) NSArray *timingFunctions;
@property (copy) NSArray *values;


-(*void)_copyRenderAnimationForLayer:(id)arg0 ;
-(BOOL)CA_validateValue:(id)arg0 forKey:(id)arg1 ;
-(BOOL)_setCARenderAnimation:(*void)arg0 layer:(id)arg1 ;
-(void)CA_prepareRenderValue;
-(void)applyForTime:(CGFloat)arg0 presentationObject:(id)arg1 modelObject:(id)arg2 ;


@end


#endif