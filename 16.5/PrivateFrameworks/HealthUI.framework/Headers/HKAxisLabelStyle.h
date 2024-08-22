// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKAXISLABELSTYLE_H
#define HKAXISLABELSTYLE_H

@class UIFont, NSNumber, UIColor;
@protocol NSCopying, HKNumberFormatter;

#import <Foundation/Foundation.h>


@interface HKAxisLabelStyle : NSObject <NSCopying>



@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (nonatomic) NSInteger horizontalAlignment; // ivar: _horizontalAlignment
@property (retain, nonatomic) NSNumber *hyphenationFactor; // ivar: _hyphenationFactor
@property (retain, nonatomic) NSObject<HKNumberFormatter> *numberFormatter; // ivar: _numberFormatter
@property (copy, nonatomic) UIColor *textColor; // ivar: _textColor
@property (nonatomic) NSInteger verticalAlignment; // ivar: _verticalAlignment


+(id)labelStyleWithColor:(id)arg0 font:(id)arg1 horizontalAlignment:(NSInteger)arg2 verticalAlignment:(NSInteger)arg3 ;
+(id)labelStyleWithColor:(id)arg0 font:(id)arg1 horizontalAlignment:(NSInteger)arg2 verticalAlignment:(NSInteger)arg3 hyphenationFactor:(id)arg4 ;
+(id)labelStyleWithColor:(id)arg0 font:(id)arg1 horizontalAlignment:(NSInteger)arg2 verticalAlignment:(NSInteger)arg3 numberFormatter:(id)arg4 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif