// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCLOCKUPTHEME_H
#define ASCLOCKUPTHEME_H

@class UIColor, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ASCLockupTheme : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) id *headingFontSizeProvider; // ivar: _headingFontSizeProvider
@property (nonatomic) CGFloat headingFontWeight; // ivar: _headingFontWeight
@property (readonly, nonatomic) UIColor *headingTextColor; // ivar: _headingTextColor
@property (copy, nonatomic) NSString *headingTextStyle; // ivar: _headingTextStyle
@property (copy, nonatomic) id *subtitleFontSizeProvider; // ivar: _subtitleFontSizeProvider
@property (nonatomic) CGFloat subtitleFontWeight; // ivar: _subtitleFontWeight
@property (readonly, nonatomic) UIColor *subtitleTextColor; // ivar: _subtitleTextColor
@property (copy, nonatomic) NSString *subtitleTextStyle; // ivar: _subtitleTextStyle
@property (copy, nonatomic) id *titleFontSizeProvider; // ivar: _titleFontSizeProvider
@property (nonatomic) CGFloat titleFontWeight; // ivar: _titleFontWeight
@property (readonly, nonatomic) UIColor *titleTextColor; // ivar: _titleTextColor
@property (copy, nonatomic) NSString *titleTextStyle; // ivar: _titleTextStyle


+(BOOL)supportsSecureCoding;
+(id)adTheme;
+(id)adWhiteTheme;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)headingFontCompatibleWithTraitCollection:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
// -(id)initWithTitleTextColor:(id)arg0 titleFontSizeProvider:(id)arg1 titleFontWeight:(unk)arg2 subtitleTextColor:(CGFloat)arg3 subtitleFontSizeProvider:(id)arg4 subtitleFontWeight:(id)arg5 headingTextColor:(unk)arg6 headingFontSizeProvider:(CGFloat)arg7 headingFontWeight:(id)arg8  ;
-(id)initWithTitleTextColor:(id)arg0 titleTextStyle:(id)arg1 titleFontWeight:(CGFloat)arg2 subtitleTextColor:(id)arg3 subtitleTextStyle:(id)arg4 subtitleFontWeight:(CGFloat)arg5 headingTextColor:(id)arg6 headingTextStyle:(id)arg7 headingFontWeight:(CGFloat)arg8 ;
-(id)subtitleFontCompatibleWithTraitCollection:(id)arg0 ;
-(id)titleFontCompatibleWithTraitCollection:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif