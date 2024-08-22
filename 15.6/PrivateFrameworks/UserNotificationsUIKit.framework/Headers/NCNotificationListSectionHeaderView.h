// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCNOTIFICATIONLISTSECTIONHEADERVIEW_H
#define NCNOTIFICATIONLISTSECTIONHEADERVIEW_H

@class UIView, UIControl, UIButton, NSString, _UILegibilitySettings;
@protocol NCToggleControlDelegate, NCLegibilitySettingsAdjusting, PLContentSizeCategoryAdjusting, NCNotificationListSectionHeaderViewDelegate;


#import "NCToggleControl.h"
#import "NCNotificationListHeaderTitleView.h"

@interface NCNotificationListSectionHeaderView : UIView <NCToggleControlDelegate, NCLegibilitySettingsAdjusting, PLContentSizeCategoryAdjusting>

 {
    NCToggleControl *_clearButton;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (readonly, nonatomic) UIControl *clearButton;
@property (retain, nonatomic) UIButton *collapseButton; // ivar: _collapseButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCNotificationListSectionHeaderViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NCNotificationListHeaderTitleView *headerTitleView; // ivar: _headerTitleView
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (copy, nonatomic) NSString *materialGroupNameBase; // ivar: _materialGroupNameBase
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // ivar: _preferredContentSizeCategory
@property (copy, nonatomic) NSString *sectionIdentifier; // ivar: _sectionIdentifier
@property (nonatomic) BOOL showCollapseButton; // ivar: _showCollapseButton
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


+(CGFloat)headerHeightWithWidth:(CGFloat)arg0 title:(id)arg1 isShowingCollapseButton:(BOOL)arg2 ;
-(BOOL)adjustForContentSizeCategoryChange;
-(BOOL)dismissModalFullScreenIfNeeded;
-(id)containerViewForToggleControlClickInteractionPresentedContent:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_configureClearButtonIfNecessary;
-(void)_configureCollapseButtonIfNecessary;
-(void)_configureHeaderTitleViewIfNecessary;
-(void)_contentSizeCategoryDidChange;
-(void)_handleClearAll:(id)arg0 ;
-(void)_handleClearButtonPrimaryActionTriggered:(id)arg0 ;
-(void)_handleClearButtonTouchUpInside:(id)arg0 ;
-(void)_handleCollapseActionTriggered:(id)arg0 ;
-(void)_layoutClearButton;
-(void)_layoutCollapseButton;
-(void)_layoutHeaderTitleView;
-(void)_updateHeaderTitleViewWithLegibilitySettings:(id)arg0 ;
-(void)adjustForLegibilitySettingsChange:(id)arg0 ;
-(void)layoutSubviews;
-(void)toggleControlDidBeginClickInteraction:(id)arg0 ;
-(void)toggleControlDidDismssClickInteractionPresentedContent:(id)arg0 ;
-(void)toggleControlDidPresentClickInteractionPresentedContent:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif