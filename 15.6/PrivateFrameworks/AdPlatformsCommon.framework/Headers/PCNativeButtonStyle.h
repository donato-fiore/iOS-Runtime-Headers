// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PCNATIVEBUTTONSTYLE_H
#define PCNATIVEBUTTONSTYLE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PCNativeBorderStyle.h"
#import "PCNativeColor.h"

@interface PCNativeButtonStyle : NSObject <NSSecureCoding>



@property (retain, nonatomic) PCNativeBorderStyle *borderStyle; // ivar: _borderStyle
@property (retain, nonatomic) PCNativeColor *color; // ivar: _color
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (retain, nonatomic) PCNativeColor *disabledColor; // ivar: _disabledColor
@property (retain, nonatomic) PCNativeColor *highlightColor; // ivar: _highlightColor
@property (retain, nonatomic) PCNativeColor *textColor; // ivar: _textColor


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif