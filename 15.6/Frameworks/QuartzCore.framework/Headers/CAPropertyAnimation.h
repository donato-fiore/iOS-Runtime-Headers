// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAPROPERTYANIMATION_H
#define CAPROPERTYANIMATION_H

@class NSString;


#import "CAAnimation.h"
#import "CAValueFunction.h"

@interface CAPropertyAnimation : CAAnimation

@property (getter=isAdditive) BOOL additive;
@property (getter=isCumulative) BOOL cumulative;
@property (copy) NSString *keyPath;
@property (retain) CAValueFunction *valueFunction;


+(id)animationWithKeyPath:(id)arg0 ;
-(BOOL)_setCARenderAnimation:(*void)arg0 layer:(id)arg1 ;
-(BOOL)additive;
-(BOOL)cumulative;
-(unsigned int)_propertyFlagsForLayer:(id)arg0 ;
-(void)applyForTime:(CGFloat)arg0 presentationObject:(id)arg1 modelObject:(id)arg2 ;


@end


#endif