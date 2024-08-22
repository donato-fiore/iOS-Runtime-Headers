// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCNOTIFICATIONLISTCELLACTIONBUTTON_H
#define NCNOTIFICATIONLISTCELLACTIONBUTTON_H

@class UIControl, MTMaterialView, NSString, BSUIFontProvider, NCNotificationAction, UILabel, UIBezierPath;
@protocol NCNotificationOptionsMenuPresenter, PLContentSizeCategoryAdjusting, MTMaterialGrouping;



@interface NCNotificationListCellActionButton : UIControl <NCNotificationOptionsMenuPresenter, PLContentSizeCategoryAdjusting, MTMaterialGrouping>



@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (nonatomic) NSInteger backgroundMaterialRecipe; // ivar: _backgroundMaterialRecipe
@property (retain, nonatomic) MTMaterialView *backgroundView; // ivar: _backgroundView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic, getter=_fontProvider, setter=_setFontProvider:) BSUIFontProvider *fontProvider; // ivar: _fontProvider
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *materialGroupNameBase; // ivar: _materialGroupNameBase
@property (retain, nonatomic) NCNotificationAction *notificationAction; // ivar: _notificationAction
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // ivar: _preferredContentSizeCategory
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (readonly, copy, nonatomic) UIBezierPath *visiblePathForPreview;


-(BOOL)adjustForContentSizeCategoryChange;
-(NSInteger)_wordCountForText:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureBackgroundViewIfNecessary;
-(void)_configureTitleLabelEffects;
-(void)_configureTitleLabelIfNecessary;
-(void)_handleHoverGestureRecognizerEvent:(id)arg0 ;
-(void)_highlightButton:(id)arg0 ;
-(void)_layoutBackgroundView;
-(void)_layoutTitleLabel;
-(void)_unHighlightButton:(id)arg0 ;
-(void)_updateTitleLabelFont;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)willMoveToSuperview:(id)arg0 ;


@end


#endif