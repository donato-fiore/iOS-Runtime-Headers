// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVMONOGRAMIMAGECONFIGURATION_H
#define TVMONOGRAMIMAGECONFIGURATION_H

@class UIColor, NSString, UIFont;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TVMonogramImageConfiguration : NSObject <NSCopying>



@property (retain, nonatomic) UIColor *bgColor; // ivar: _bgColor
@property (nonatomic) CGFloat diameter; // ivar: _diameter
@property (copy, nonatomic) NSString *firstName; // ivar: _firstName
@property (nonatomic) CGFloat focusedSizeIncrease; // ivar: _focusedSizeIncrease
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (copy, nonatomic) NSString *lastName; // ivar: _lastName
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;


@end


#endif