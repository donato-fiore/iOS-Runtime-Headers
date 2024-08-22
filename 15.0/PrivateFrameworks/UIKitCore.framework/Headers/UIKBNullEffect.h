// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKBNULLEFFECT_H
#define UIKBNULLEFFECT_H

@class NSString;
@protocol UIKBRenderEffect;

#import <Foundation/Foundation.h>

#import "UIKBGradient.h"

@interface UIKBNullEffect : NSObject <UIKBRenderEffect>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIKBGradient *gradient;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) SEL renderSelector;
@property (readonly, nonatomic) BOOL renderUnder;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL usesRGBColors;
@property (nonatomic) CGFloat weight;


+(id)nullEffect;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(struct CGColor *)CGColor;


@end


#endif