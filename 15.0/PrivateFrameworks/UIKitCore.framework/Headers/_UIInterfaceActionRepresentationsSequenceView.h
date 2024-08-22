// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIINTERFACEACTIONREPRESENTATIONSSEQUENCEVIEW_H
#define _UIINTERFACEACTIONREPRESENTATIONSSEQUENCEVIEW_H

@class NSArray, NSLayoutConstraint;


#import "UIScrollView.h"
#import "_UIInterfaceActionSeparatableSequenceView.h"
#import "UIInterfaceActionVisualStyle.h"

@interface _UIInterfaceActionRepresentationsSequenceView : UIScrollView {
    NSInteger _sizingSeparatedContentSequenceViewToFitDisabledCount;
}


@property (nonatomic) NSInteger actionLayoutAxis; // ivar: _actionLayoutAxis
@property (retain, nonatomic) NSArray *arrangedActionRepresentationViews; // ivar: _arrangedActionRepresentationViews
@property (readonly, nonatomic) NSLayoutConstraint *minimumHeightConstraint; // ivar: _minimumHeightConstraint
@property (readonly, nonatomic) _UIInterfaceActionSeparatableSequenceView *separatedContentSequenceView; // ivar: _separatedContentSequenceView
@property (nonatomic) BOOL visualCornerForcedOverride; // ivar: _visualCornerForcedOverride
@property (nonatomic) NSUInteger visualCornerPosition; // ivar: _visualCornerPosition
@property (retain, nonatomic) UIInterfaceActionVisualStyle *visualStyle; // ivar: _visualStyle


-(BOOL)_isHorizontalLayout;
-(CGFloat)_contentFitCanScrollThreshold;
-(CGFloat)_minimumNumberOfRowsRequiredVisible;
-(CGFloat)fittingWidthForLayoutAxis:(NSInteger)arg0 ;
-(id)initWithVisualStyle:(id)arg0 ;
-(struct CGSize )_sizeByApplyingLayoutMarginsAsOutsetToSize:(struct CGSize )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 ;
-(void)_applyVisualStyle;
-(void)_applyVisualStyleToSeparatedContentSequenceView;
-(void)_disableSeparatedContentSequenceViewToFit;
-(void)_enableSeparatedContentSequenceViewToFit;
-(void)_loadDefaultSizingConstraints;
-(void)_notifyDidScroll;
-(void)_temporarilySkipSizingSeparatedContentSequenceViewToFit;
-(void)_updateMinimumHeightConstraint;
-(void)_updateSeparatedContentSequenceViewToFitSizeIfPossible;
-(void)_willUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutSubviews;
-(void)reloadDisplayedContentVisualStyle;
-(void)updateConstraints;


@end


#endif