// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCTEXTINFO_H
#define FCTEXTINFO_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "FCColor.h"
#import "FCLoadableFont.h"

@interface FCTextInfo : NSObject <NSCopying>



@property (copy, nonatomic) FCColor *color; // ivar: _color
@property (copy, nonatomic) FCLoadableFont *font; // ivar: _font
@property (nonatomic) NSInteger fontSizeAdjustment; // ivar: _fontSizeAdjustment
@property (nonatomic) CGFloat lineHeightMultiplier; // ivar: _lineHeightMultiplier


+(id)textInfoFromJSONValues:(id)arg0 ;
-(CGFloat)fontSizeWithInitialFontSize:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif