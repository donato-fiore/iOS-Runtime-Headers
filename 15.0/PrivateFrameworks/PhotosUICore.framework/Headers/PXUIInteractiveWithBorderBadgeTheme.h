// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXUIINTERACTIVEWITHBORDERBADGETHEME_H
#define PXUIINTERACTIVEWITHBORDERBADGETHEME_H

@class UIColor, UIBlurEffect, NSString, CAFilter, UIImageSymbolConfiguration, UIFont;
@protocol PXUIBadgeTheme;

#import <Foundation/Foundation.h>


@interface PXUIInteractiveWithBorderBadgeTheme : NSObject <PXUIBadgeTheme>



@property (readonly, nonatomic) UIColor *afterLabelImageTintColor; // ivar: _afterLabelImageTintColor
@property (readonly, nonatomic) CGFloat backgroundAlpha; // ivar: _backgroundAlpha
@property (readonly, nonatomic) UIBlurEffect *backgroundBlurEffect; // ivar: _backgroundBlurEffect
@property (readonly, nonatomic) UIColor *backgroundBorderColor; // ivar: _backgroundBorderColor
@property (readonly, nonatomic) CGFloat backgroundBorderWidth; // ivar: _backgroundBorderWidth
@property (readonly, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) CGFloat backgroundCornerRadius; // ivar: _backgroundCornerRadius
@property (readonly, nonatomic) Class backgroundViewClass; // ivar: _backgroundViewClass
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat imageAlpha; // ivar: _imageAlpha
@property (readonly, nonatomic) CAFilter *imageCompositingFilter; // ivar: _imageCompositingFilter
@property (readonly, nonatomic) UIImageSymbolConfiguration *imageConfiguration; // ivar: _imageConfiguration
@property (readonly, nonatomic) UIColor *imageTintColor; // ivar: _imageTintColor
@property (readonly, nonatomic) CGFloat labelAlpha; // ivar: _labelAlpha
@property (readonly, nonatomic) CAFilter *labelCompositingFilter; // ivar: _labelCompositingFilter
@property (readonly, nonatomic) UIFont *labelFont; // ivar: _labelFont
@property (readonly, nonatomic) UIColor *labelTextColor; // ivar: _labelTextColor
@property (readonly) Class superclass;


+(id)sharedToggledOffBadgeTheme;
+(id)sharedToggledOffOverContentBadgeTheme;
+(id)sharedToggledOnBadgeTheme;
+(id)sharedToggledOnOverContentBadgeTheme;
-(id)init;
-(id)initWithIsToggledOn:(BOOL)arg0 isOverContent:(BOOL)arg1 ;


@end


#endif