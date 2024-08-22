// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKBTEXTSTYLE_H
#define UIKBTEXTSTYLE_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface UIKBTextStyle : NSObject <NSCopying>



@property (nonatomic) NSInteger alignment; // ivar: _alignment
@property (nonatomic) NSUInteger anchorCorner; // ivar: _anchorCorner
@property (retain, nonatomic) NSString *etchColor; // ivar: _etchColor
@property (nonatomic) CGPoint etchOffset; // ivar: _etchOffset
@property (retain, nonatomic) NSString *fontName; // ivar: _fontName
@property (nonatomic) CGFloat fontSize; // ivar: _fontSize
@property (nonatomic) CGFloat fontWeight; // ivar: _fontWeight
@property (nonatomic) BOOL ignoreTextMarginOnKey; // ivar: _ignoreTextMarginOnKey
@property (nonatomic) CGFloat imageScale; // ivar: _imageScale
@property (nonatomic) CGFloat kerning; // ivar: _kerning
@property (nonatomic) CGFloat minFontSize; // ivar: _minFontSize
@property (nonatomic) CGFloat pathWeight; // ivar: _pathWeight
@property (nonatomic) NSInteger selector; // ivar: _selector
@property (retain, nonatomic) NSString *textColor; // ivar: _textColor
@property (nonatomic) CGPoint textOffset; // ivar: _textOffset
@property (nonatomic) CGFloat textOpacity; // ivar: _textOpacity
@property (nonatomic) BOOL usesSymbolImage; // ivar: _usesSymbolImage


+(id)styleWithFontName:(id)arg0 withFontSize:(CGFloat)arg1 ;
+(id)styleWithTextColor:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)overlayWithStyle:(id)arg0 ;


@end


#endif