// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SLATTRIBUTIONVIEW_H
#define SLATTRIBUTIONVIEW_H

@class UIView, NSString, UIButton, NSLayoutConstraint, UIColor;
@protocol SLHighlightPillViewDelegate, SLAttributionViewDelegate;


#import "SLHighlight.h"
#import "SLHighlightPillView.h"

@interface SLAttributionView : UIView <SLHighlightPillViewDelegate>



@property (retain, nonatomic) NSString *blurEffectGroupName; // ivar: _blurEffectGroupName
@property (readonly, nonatomic) UIButton *closeButton; // ivar: _closeButton
@property (readonly, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) NSLayoutConstraint *closeButtonVerticalConstraint; // ivar: _closeButtonVerticalConstraint
@property (retain, nonatomic) NSLayoutConstraint *closeButtonXDimensionConstraint; // ivar: _closeButtonXDimensionConstraint
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SLAttributionViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enablesMarquee; // ivar: _enablesMarquee
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SLHighlight *highlight; // ivar: _highlight
@property (nonatomic) BOOL marqueeRequired; // ivar: _marqueeRequired
@property (nonatomic) CGFloat maxWidthForClippingMarquee; // ivar: _maxWidthForClippingMarquee
@property (retain, nonatomic) NSLayoutConstraint *ourHeightConstraint; // ivar: _ourHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *ourWidthConstraint; // ivar: _ourWidthConstraint
@property (retain, nonatomic) NSLayoutConstraint *pillCenterYConstraint; // ivar: _pillCenterYConstraint
@property (retain, nonatomic) NSLayoutConstraint *pillHorizontalAlignmentConstraint; // ivar: _pillHorizontalAlignmentConstraint
@property (retain, nonatomic) SLHighlightPillView *pillView; // ivar: _pillView
@property (nonatomic) NSInteger preferredAlignment; // ivar: _preferredAlignment
@property (retain, nonatomic) UIColor *preferredBackgroundColor; // ivar: _preferredBackgroundColor
@property (nonatomic) NSInteger preferredBackgroundStyle; // ivar: _preferredBackgroundStyle
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesBannerLayout; // ivar: _usesBannerLayout


+(void)presentTranscriptForAttributionIdenfitier:(id)arg0 attachmentGUID:(id)arg1 presentingViewController:(id)arg2 ;
+(void)presentTranscriptForAttributionIdenfitier:(id)arg0 presentingViewController:(id)arg1 ;
+(void)useNewDefaultBackgroundStyle;
-(BOOL)_crossPlatformIsRTL;
-(BOOL)_hasiOSBannerVariant;
-(CGFloat)_minHeightForCurrentStyle;
-(NSInteger)_alignmentEnforcingPolicies;
-(NSInteger)_backgroundStyleEnforcingPolicies;
-(NSUInteger)variant;
-(id)_backgroundColorEnforcingPolicies;
-(id)additionalContextMenuItemsForHighlightPillView:(id)arg0 ;
-(id)contextMenuItems;
-(id)initWithHighlight:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_crossPlatformCloseButtonTapped:(id)arg0 ;
-(void)_crossPlatformNeedsLayout;
-(void)_crossPlatformNeedsUpdateConstraints;
-(void)_sanitizeFrameIfNecessaryForTAMIC;
-(void)_updateMarqueeIfNecessary;
-(void)dealloc;
-(void)excludeContextMenuItemsWithIdentifiers:(id)arg0 ;
-(void)feedbackForCloseButtonHit;
-(void)highlightPillViewDidLoadNewRemoteContent:(id)arg0 ;
-(void)layoutSubviews;
-(void)loadCloseButton;
-(void)prepareLayout;
-(void)prepareLayoutWithMaxWidth:(CGFloat)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg0 ;
-(void)updateAlignment:(NSInteger)arg0 ;
-(void)updateBackgroundColor:(id)arg0 ;
-(void)updateBackgroundStyle:(NSInteger)arg0 ;
-(void)updateConstraints;
-(void)updateInterfaceStyle:(NSInteger)arg0 ;
-(void)useBannerLayout;


@end


#endif