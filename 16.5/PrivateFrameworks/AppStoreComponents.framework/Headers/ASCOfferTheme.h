// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCOFFERTHEME_H
#define ASCOFFERTHEME_H

@class UIColor;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "ASCOfferBackgroundStyle.h"

@interface ASCOfferTheme : NSObject <NSCopying>



@property (readonly, retain, nonatomic) ASCOfferBackgroundStyle *backgroundStyle; // ivar: _backgroundStyle
@property (readonly, nonatomic) UIColor *iconTintColor; // ivar: _iconTintColor
@property (readonly, nonatomic) UIColor *progressColor; // ivar: _progressColor
@property (readonly, nonatomic) int progressLineCap; // ivar: _progressLineCap
@property (readonly, nonatomic) CGFloat progressLineWidth; // ivar: _progressLineWidth
@property (readonly, nonatomic) CGSize stopIndicatorCornerSize; // ivar: _stopIndicatorCornerSize
@property (readonly, nonatomic) CGFloat stopIndicatorRatio; // ivar: _stopIndicatorRatio
@property (readonly, nonatomic) UIColor *subtitleTextColor; // ivar: _subtitleTextColor
@property (readonly, nonatomic) UIColor *titleBackgroundColor; // ivar: _titleBackgroundColor
@property (readonly, nonatomic) UIColor *titleTextColor; // ivar: _titleTextColor
@property (readonly, nonatomic) UIColor *titleTextDisabledColor; // ivar: _titleTextDisabledColor


+(id)adTheme;
+(id)blueTheme;
+(id)confirmationForTheme:(id)arg0 ;
+(id)essoTheme;
+(id)grayTheme;
+(id)loadingTheme;
+(id)primaryTheme;
+(id)secondaryTheme;
+(id)viewInAppStoreTheme;
+(id)whiteOnGrayTheme;
+(id)whiteTheme;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)clone;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithTitleBackgroundColor:(id)arg0 titleTextColor:(id)arg1 subtitleTextColor:(id)arg2 iconTintColor:(id)arg3 progressColor:(id)arg4 ;
-(id)initWithTitleBackgroundColor:(id)arg0 titleTextColor:(id)arg1 titleTextDisabledColor:(id)arg2 subtitleTextColor:(id)arg3 iconTintColor:(id)arg4 progressColor:(id)arg5 ;
-(id)initWithTitleBackgroundColor:(id)arg0 titleTextColor:(id)arg1 titleTextDisabledColor:(id)arg2 subtitleTextColor:(id)arg3 iconTintColor:(id)arg4 progressColor:(id)arg5 progressLineWidth:(CGFloat)arg6 progressLineCap:(int)arg7 stopIndicatorRatio:(CGFloat)arg8 stopIndicatorCornerSize:(struct CGSize )arg9 backgroundStyle:(id)arg10 ;
-(id)offerThemeWithBackgroundStyle:(id)arg0 ;
-(id)offerThemeWithProgressLineCap:(int)arg0 ;
-(id)offerThemeWithProgressLineWidth:(CGFloat)arg0 ;
-(id)offerThemeWithStopIndicatorRatio:(CGFloat)arg0 ;


@end


#endif