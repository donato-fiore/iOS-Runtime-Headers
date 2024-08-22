// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCNOTIFICATIONLISTHEADERTITLEVIEW_H
#define NCNOTIFICATIONLISTHEADERTITLEVIEW_H

@class UIView, NSString, BSUIFontProvider, _UILegibilitySettings, SBUILegibilityLabel;
@protocol NCLegibilitySettingsAdjusting, PLContentSizeCategoryAdjusting;



@interface NCNotificationListHeaderTitleView : UIView <NCLegibilitySettingsAdjusting, PLContentSizeCategoryAdjusting>



@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic, getter=_fontProvider, setter=_setFontProvider:) BSUIFontProvider *fontProvider; // ivar: _fontProvider
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // ivar: _preferredContentSizeCategory
@property (nonatomic, getter=isPrimary) BOOL primary; // ivar: _primary
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) SBUILegibilityLabel *titleLabel; // ivar: _titleLabel


-(BOOL)adjustForContentSizeCategoryChange;
-(id)_labelFont;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureTitleLabelIfNecessary;
-(void)_invalidateTitleLabel;
-(void)_layoutTitleLabel;
-(void)adjustForLegibilitySettingsChange:(id)arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif