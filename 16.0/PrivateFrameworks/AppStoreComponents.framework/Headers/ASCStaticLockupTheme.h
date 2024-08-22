// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASCSTATICLOCKUPTHEME_H
#define ASCSTATICLOCKUPTHEME_H

@class NSString, UIColor;
@protocol ASCLockupTheme, NSCopying;

#import <Foundation/Foundation.h>


@interface ASCStaticLockupTheme : NSObject <ASCLockupTheme, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *headingFontSizeProvider; // ivar: _headingFontSizeProvider
@property (nonatomic) CGFloat headingFontWeight; // ivar: _headingFontWeight
@property (readonly, nonatomic) UIColor *headingTextColor; // ivar: _headingTextColor
@property (copy, nonatomic) NSString *headingTextStyle; // ivar: _headingTextStyle
@property (copy, nonatomic) id *subtitleFontSizeProvider; // ivar: _subtitleFontSizeProvider
@property (nonatomic) CGFloat subtitleFontWeight; // ivar: _subtitleFontWeight
@property (readonly, nonatomic) UIColor *subtitleTextColor; // ivar: _subtitleTextColor
@property (copy, nonatomic) NSString *subtitleTextStyle; // ivar: _subtitleTextStyle
@property (readonly) Class superclass;
@property (copy, nonatomic) id *titleFontSizeProvider; // ivar: _titleFontSizeProvider
@property (nonatomic) CGFloat titleFontWeight; // ivar: _titleFontWeight
@property (readonly, nonatomic) UIColor *titleTextColor; // ivar: _titleTextColor
@property (copy, nonatomic) NSString *titleTextStyle; // ivar: _titleTextStyle


+(id)adTheme;
+(id)adWhiteTheme;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)headingFontCompatibleWithTraitCollection:(id)arg0 ;
// -(id)initWithTitleTextColor:(id)arg0 titleFontSizeProvider:(id)arg1 titleFontWeight:(unk)arg2 subtitleTextColor:(CGFloat)arg3 subtitleFontSizeProvider:(id)arg4 subtitleFontWeight:(id)arg5 headingTextColor:(unk)arg6 headingFontSizeProvider:(CGFloat)arg7 headingFontWeight:(id)arg8  ;
-(id)initWithTitleTextColor:(id)arg0 titleTextStyle:(id)arg1 titleFontWeight:(CGFloat)arg2 subtitleTextColor:(id)arg3 subtitleTextStyle:(id)arg4 subtitleFontWeight:(CGFloat)arg5 headingTextColor:(id)arg6 headingTextStyle:(id)arg7 headingFontWeight:(CGFloat)arg8 ;
-(id)subtitleFontCompatibleWithTraitCollection:(id)arg0 ;
-(id)titleFontCompatibleWithTraitCollection:(id)arg0 ;
-(void)applyToLockupContentView:(id)arg0 compatibleWithTraitCollection:(id)arg1 ;


@end


#endif