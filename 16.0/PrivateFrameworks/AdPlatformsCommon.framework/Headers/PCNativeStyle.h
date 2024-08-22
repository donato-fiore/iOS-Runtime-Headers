// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PCNATIVESTYLE_H
#define PCNATIVESTYLE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PCNativeColor.h"
#import "PCNativeBorderStyle.h"
#import "PCNativeButtonStyle.h"
#import "PCNativeShadowStyle.h"

@interface PCNativeStyle : NSObject <NSSecureCoding>



@property (retain, nonatomic) PCNativeColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) PCNativeBorderStyle *borderStyle; // ivar: _borderStyle
@property (retain, nonatomic) PCNativeButtonStyle *buttonStyle; // ivar: _buttonStyle
@property (retain, nonatomic) PCNativeShadowStyle *shadowStyle; // ivar: _shadowStyle
@property (retain, nonatomic) PCNativeColor *textColor; // ivar: _textColor


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif