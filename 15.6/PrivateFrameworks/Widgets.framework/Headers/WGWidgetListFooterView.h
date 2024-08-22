// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WGWIDGETLISTFOOTERVIEW_H
#define WGWIDGETLISTFOOTERVIEW_H

@class UIView, NSMutableDictionary, UIFont, MTMaterialView, UIButton, NSString, _UILegibilitySettings;
@protocol UITextViewDelegate, MTMaterialGrouping, WGWidgetListFooterViewDelegate;


#import "WGShortLookStyleButton.h"
#import "WGNewWidgetsButton.h"

@interface WGWidgetListFooterView : UIView <UITextViewDelegate, MTMaterialGrouping>

 {
    NSMutableDictionary *_widgetIDsToAttributionViews;
    UIFont *_referenceFont;
    MTMaterialView *_customizeButtonBackground;
}


@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (retain, nonatomic) UIButton *customizeButton; // ivar: _customizeButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WGWidgetListFooterViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) WGShortLookStyleButton *editButton; // ivar: _editButton
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger layoutMode; // ivar: _layoutMode
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (copy, nonatomic) NSString *materialGroupNameBase;
@property (nonatomic) BOOL shouldBlurContent;
@property (nonatomic) BOOL shouldSizeContent; // ivar: _shouldSizeContent
@property (readonly) Class superclass;
@property (retain, nonatomic) WGNewWidgetsButton *widgetAvailableButton; // ivar: _widgetAvailableButton


-(BOOL)textView:(id)arg0 shouldInteractWithTextAttachment:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)_referenceFont;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_addCustomizeButton;
-(void)_availableWidgetsUpdated:(id)arg0 ;
-(void)_setAttributedString:(id)arg0 forWidgetIdentifier:(id)arg1 ;
-(void)_updateForContentCategorySizeDidChange;
-(void)invalidateSubviewGeometery;
-(void)layoutSubviews;
-(void)setVisibleWidgetsIDs:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif