// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLTITLEDPLATTERVIEW_H
#define PLTITLEDPLATTERVIEW_H

@class UIView, NSDate, NSString, NSArray, NSTimeZone, UIButton;
@protocol PLPlatterInternal, PLTitled, PLContentSizeCategoryAdjusting;


#import "PLPlatterView.h"
#import "PLPlatterHeaderContentView.h"

@interface PLTitledPlatterView : PLPlatterView <PLPlatterInternal, PLTitled, PLContentSizeCategoryAdjusting>

 {
    PLPlatterHeaderContentView *_headerContentView;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (nonatomic, getter=isBackgroundBlurred) BOOL backgroundBlurred;
@property (readonly, nonatomic) UIView *customContentView;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic, getter=isDateAllDay) BOOL dateAllDay;
@property (nonatomic) NSInteger dateFormatStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasShadow;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *iconButtons;
@property (copy, nonatomic) NSArray *icons;
@property (nonatomic, getter=isLargerHeaderMarginEnabled) BOOL largerHeaderMarginEnabled; // ivar: _largerHeaderMarginEnabled
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic, getter=isSashHidden) BOOL sashHidden;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) UIButton *utilityButton;


-(BOOL)adjustForContentSizeCategoryChange;
-(BOOL)headerHeedsHorizontalLayoutMargins;
-(id)_headerContentView;
-(id)utilityView;
-(struct CGRect )_mainContentFrame;
-(struct CGSize )sizeThatFitsContentWithSize:(struct CGSize )arg0 ;
-(void)_configureHeaderContentView;
-(void)_configureHeaderContentViewIfNecessary;
-(void)_layoutHeaderViews;
-(void)layoutSubviews;
-(void)setBackgroundView:(id)arg0 ;
-(void)setHeaderHeedsHorizontalLayoutMargins:(BOOL)arg0 ;
-(void)setNeedsLayout;
-(void)setUtilityView:(id)arg0 ;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;


@end


#endif