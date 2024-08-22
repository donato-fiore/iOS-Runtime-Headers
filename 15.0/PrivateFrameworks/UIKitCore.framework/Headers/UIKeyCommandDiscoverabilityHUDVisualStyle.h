// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKEYCOMMANDDISCOVERABILITYHUDVISUALSTYLE_H
#define UIKEYCOMMANDDISCOVERABILITYHUDVISUALSTYLE_H

@class NSString, UIFont;
@protocol UIKeyCommandDiscoverabilityHUDVisualStyle;

#import <Foundation/Foundation.h>

#import "UIColor.h"

@interface UIKeyCommandDiscoverabilityHUDVisualStyle : NSObject <UIKeyCommandDiscoverabilityHUDVisualStyle>



@property (readonly, nonatomic) CGFloat HUDPageControlBottomMargin;
@property (readonly, nonatomic) UIEdgeInsets HUDViewInsets;
@property (readonly, nonatomic) CGFloat columnDividerWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIColor *dividerColor;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIColor *inputColor;
@property (readonly, nonatomic) CGFloat minimumFontScaleBeforeTruncation;
@property (readonly, nonatomic) CGFloat summaryDescriptionToModifiersSpacing;
@property (readonly, nonatomic) UIFont *summaryFont;
@property (readonly, nonatomic) CGFloat summaryLineHeight;
@property (readonly, nonatomic) CGFloat summaryLineSpacing;
@property (readonly, nonatomic) CGFloat summaryModifiersSpacing;
@property (readonly, nonatomic) CGFloat summaryXPadding;
@property (readonly, nonatomic) CGFloat summaryYPadding;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIColor *titleColor;


+(id)visualStyleForTraitCollection:(id)arg0 ;
-(CGFloat)columnDividerHeightForHUDHeight:(CGFloat)arg0 ;
-(CGFloat)maxHUDHeightForHeight:(CGFloat)arg0 ;
-(CGFloat)maxHUDWidthForWidth:(CGFloat)arg0 ;


@end


#endif