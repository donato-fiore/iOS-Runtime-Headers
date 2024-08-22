// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCOFFERTHEME_H
#define ASCOFFERTHEME_H

@class UIColor;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ASCOfferTheme : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) UIColor *iconTintColor; // ivar: _iconTintColor
@property (readonly, nonatomic) UIColor *progressColor; // ivar: _progressColor
@property (readonly, nonatomic) UIColor *subtitleTextColor; // ivar: _subtitleTextColor
@property (readonly, nonatomic) UIColor *titleBackgroundColor; // ivar: _titleBackgroundColor
@property (readonly, nonatomic) UIColor *titleTextColor; // ivar: _titleTextColor
@property (readonly, nonatomic) UIColor *titleTextDisabledColor; // ivar: _titleTextDisabledColor


+(BOOL)supportsSecureCoding;
+(id)adTheme;
+(id)blueTheme;
+(id)confirmationForTheme:(id)arg0 ;
+(id)grayTheme;
+(id)loadingTheme;
+(id)primaryTheme;
+(id)secondaryTheme;
+(id)whiteTheme;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitleBackgroundColor:(id)arg0 titleTextColor:(id)arg1 subtitleTextColor:(id)arg2 iconTintColor:(id)arg3 progressColor:(id)arg4 ;
-(id)initWithTitleBackgroundColor:(id)arg0 titleTextColor:(id)arg1 titleTextDisabledColor:(id)arg2 subtitleTextColor:(id)arg3 iconTintColor:(id)arg4 progressColor:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif