// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKBEDGEEFFECT_H
#define UIKBEDGEEFFECT_H

@class NSString;
@protocol UIKBRenderEffect;

#import <Foundation/Foundation.h>

#import "UIKBGradient.h"

@interface UIKBEdgeEffect : NSObject <UIKBRenderEffect>

 {
    NSString *_colorName;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger edges; // ivar: _edges
@property (retain, nonatomic) UIKBGradient *gradient; // ivar: _gradient
@property (readonly) NSUInteger hash;
@property (nonatomic) UIEdgeInsets insets; // ivar: _insets
@property (readonly, nonatomic) BOOL isValid;
@property (nonatomic) CGFloat opacity; // ivar: _opacity
@property (readonly, nonatomic) SEL renderSelector;
@property (readonly, nonatomic) BOOL renderUnder;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL usesRGBColors;
@property (nonatomic) CGFloat weight; // ivar: _weight


+(id)effectWithColor:(id)arg0 edges:(NSUInteger)arg1 inset:(CGFloat)arg2 weight:(CGFloat)arg3 ;
+(id)effectWithColor:(id)arg0 edges:(NSUInteger)arg1 insets:(struct UIEdgeInsets )arg2 weight:(CGFloat)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithColor:(id)arg0 edges:(NSUInteger)arg1 insets:(struct UIEdgeInsets )arg2 weight:(CGFloat)arg3 ;
-(struct CGColor *)CGColor;
-(void)dealloc;


@end


#endif