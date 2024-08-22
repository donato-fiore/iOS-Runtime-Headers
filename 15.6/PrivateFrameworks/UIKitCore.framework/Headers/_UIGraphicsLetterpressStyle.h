// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIGRAPHICSLETTERPRESSSTYLE_H
#define _UIGRAPHICSLETTERPRESSSTYLE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UIColor.h"

@interface _UIGraphicsLetterpressStyle : NSObject <NSCopying>



@property (retain, nonatomic) UIColor *bottomGradientColor; // ivar: bottomGradientColor
@property (readonly, nonatomic) UIEdgeInsets edgeInsets;
@property (retain, nonatomic) UIColor *embossHighlightColor; // ivar: embossHighlightColor
@property (retain, nonatomic) UIColor *embossShadowColor; // ivar: embossShadowColor
@property (nonatomic) CGFloat embossSize; // ivar: embossSize
@property (nonatomic) CGFloat innerOpacity; // ivar: innerOpacity
@property (nonatomic) int innerShadowBlendMode; // ivar: innerShadowBlendMode
@property (nonatomic) CGFloat innerShadowBlur; // ivar: innerShadowBlur
@property (retain, nonatomic) UIColor *innerShadowColor; // ivar: innerShadowColor
@property (nonatomic) CGPoint innerShadowOffset; // ivar: innerShadowOffset
@property (nonatomic) int outerShadowBlendMode; // ivar: outerShadowBlendMode
@property (nonatomic) CGFloat outerShadowBlur; // ivar: outerShadowBlur
@property (retain, nonatomic) UIColor *outerShadowColor; // ivar: outerShadowColor
@property (nonatomic) CGPoint outerShadowOffset; // ivar: outerShadowOffset
@property (retain, nonatomic) UIColor *topGradientColor; // ivar: topGradientColor


+(id)defaultLetterpressStyle;
+(id)old2xLetterpressStyle;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif