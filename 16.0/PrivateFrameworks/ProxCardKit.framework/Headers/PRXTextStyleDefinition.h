// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRXTEXTSTYLEDEFINITION_H
#define PRXTEXTSTYLEDEFINITION_H

@class UIFont, UIColor;

#import <Foundation/Foundation.h>


@interface PRXTextStyleDefinition : NSObject

@property (readonly, nonatomic) NSUInteger accessibilityTraits; // ivar: _accessibilityTraits
@property (readonly, nonatomic) UIFont *font; // ivar: _font
@property (readonly, nonatomic) NSInteger numberOfLines; // ivar: _numberOfLines
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (readonly, nonatomic) NSInteger textAlignment; // ivar: _textAlignment
@property (readonly, nonatomic) UIColor *textColor; // ivar: _textColor


-(id)initWithStyle:(NSInteger)arg0 ;


@end


#endif