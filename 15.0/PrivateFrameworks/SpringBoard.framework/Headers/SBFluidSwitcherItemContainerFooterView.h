// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFLUIDSWITCHERITEMCONTAINERFOOTERVIEW_H
#define SBFLUIDSWITCHERITEMCONTAINERFOOTERVIEW_H

@class UIView, UILabel, NSArray, UITapGestureRecognizer, NSString;
@protocol PTSettingsKeyObserver, SBFluidSwitcherItemContainerFooterViewDelegate;


#import "SBFluidSwitcherIconImageContainerView.h"
#import "SBFluidSwitcherSpaceTitleItem.h"
#import "SBMedusaSettings.h"

@interface SBFluidSwitcherItemContainerFooterView : UIView <PTSettingsKeyObserver>

 {
    SBFluidSwitcherIconImageContainerView *_firstIconView;
    UILabel *_firstLabel;
    SBFluidSwitcherIconImageContainerView *_secondIconView;
    UILabel *_secondLabel;
    SBFluidSwitcherSpaceTitleItem *_firstItem;
    SBFluidSwitcherSpaceTitleItem *_secondItem;
    NSArray *_titleItems;
    UITapGestureRecognizer *_tapGestureRecognizer;
    SBMedusaSettings *_settings;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<SBFluidSwitcherItemContainerFooterViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat textAlpha; // ivar: _textAlpha


+(CGFloat)iconViewHeight;
-(id)_attributedTextFromText:(id)arg0 ;
-(id)_makeIconView;
-(id)_makeLabel;
-(id)initWithFrame:(struct CGRect )arg0 delegate:(id)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_handleTapGestureRecognizer:(id)arg0 ;
-(void)_updateLabels;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitleItems:(id)arg0 animated:(BOOL)arg1 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif