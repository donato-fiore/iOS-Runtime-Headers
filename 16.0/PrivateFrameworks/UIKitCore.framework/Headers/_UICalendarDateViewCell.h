// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICALENDARDATEVIEWCELL_H
#define _UICALENDARDATEVIEWCELL_H

@class NSString, NSArray;
@protocol UIPointerInteractionDelegate;


#import "UICollectionViewCell.h"
#import "UIPointerInteraction.h"
#import "UILabel.h"
#import "UIView.h"
#import "UICalendarView.h"

@interface _UICalendarDateViewCell : UICollectionViewCell <UIPointerInteractionDelegate>

 {
    UIPointerInteraction *_pointerInteraction;
    ? _flags;
    NSString *_fontDesign;
    NSArray *_decorations;
    UILabel *_dayLabel;
    UIView *_decorationContentView;
    UIView *_backgroundView;
    UIView *_labelContentView;
}


@property (weak, nonatomic) UICalendarView *calendarView; // ivar: _calendarView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)emphasizedFontForTraitCollection:(id)arg0 fontDesign:(id)arg1 ;
+(id)fontForTraitCollection:(id)arg0 fontDesign:(id)arg1 ;
+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(void)_updateBackgroundView;
-(void)_updateFontDesign;
-(void)_updateForPreferredContentSizeCategoryChange;
-(void)_updateLabelColor;
-(void)configureWithDay:(id)arg0 formatter:(id)arg1 fontDesign:(id)arg2 decorations:(id)arg3 outOfRange:(BOOL)arg4 renderOverhangDays:(BOOL)arg5 highlightsToday:(BOOL)arg6 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif