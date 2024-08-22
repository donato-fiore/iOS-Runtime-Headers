// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUFONT_H
#define TSUFONT_H

@class NSString, UIFont;

#import <Foundation/Foundation.h>


@interface TSUFont : NSObject

@property (readonly, nonatomic) *__CTFont CTFont; // ivar: _ctFont
@property (readonly, nonatomic) CGFloat ascender;
@property (readonly, nonatomic) CGFloat capHeight;
@property (readonly, nonatomic) CGFloat descender;
@property (readonly, retain, nonatomic) NSString *familyName;
@property (readonly, retain, nonatomic) NSString *fontName;
@property (readonly, nonatomic) CGFloat lineHeight;
@property (readonly, nonatomic) UIFont *platformFont;
@property (readonly, nonatomic) CGFloat pointSize;
@property (readonly, nonatomic) CGFloat xHeight;


+(id)boldSystemFontOfSize:(CGFloat)arg0 ;
+(id)fontWithName:(id)arg0 size:(CGFloat)arg1 ;
+(id)fontWithPlatformFont:(id)arg0 ;
+(id)italicSystemFontOfSize:(CGFloat)arg0 ;
+(id)systemFontOfSize:(CGFloat)arg0 ;
+(id)systemFontOfSize:(CGFloat)arg0 weight:(CGFloat)arg1 ;
-(id)convertFontToBold:(BOOL)arg0 italic:(BOOL)arg1 ;
-(id)fontWithScale:(CGFloat)arg0 ;
-(id)fontWithSize:(CGFloat)arg0 ;
-(id)initWithCTFont:(struct __CTFont *)arg0 ;
-(id)initWithPlatformFont:(id)arg0 ;
-(void)dealloc;


@end


#endif