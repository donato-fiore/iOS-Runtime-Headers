// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCUIACTIVITYLISTVIEW_H
#define FCUIACTIVITYLISTVIEW_H

@class UIScrollView, UIView<FCUIActivityDisplaying><FCUIExpandingContracting>, NSArray, NSString, UIView;
@protocol FCUIContentSizeCategoryAdjusting;


#import "FCUIActivityListContentView.h"

@interface FCUIActivityListView : UIScrollView <FCUIContentSizeCategoryAdjusting>

 {
    FCUIActivityListContentView *_contentView;
    UIView<FCUIActivityDisplaying><FCUIExpandingContracting> *_isolatedActivityView;
    CGPoint _initialContentOffset;
    BOOL _contentSizeValid;
}


@property (copy, nonatomic) NSArray *activityViews;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFooterPinnedToBottom) BOOL footerPinnedToBottom; // ivar: _footerPinnedToBottom
@property (retain, nonatomic) UIView *footerView;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *headerView;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;


-(BOOL)adjustForContentSizeCategoryChange;
-(BOOL)touchesShouldCancelInContentView:(id)arg0 ;
-(id)_activityViewForRepresentedActivity:(id)arg0 ;
-(id)_orderedSubviewsIncludingHeader:(BOOL)arg0 andFooter:(BOOL)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_contentViewFrameForContentSize:(struct CGSize )arg0 inBounds:(struct CGRect )arg1 ;
-(struct CGRect )_setContractedFrame:(struct CGRect )arg0 viaResizeWithRepresentedActivity:(id)arg1 transitionCoordinator:(id)arg2 ;
-(struct CGRect )_setContractedFrame:(struct CGRect )arg0 viaScaleWithRepresentedActivity:(id)arg1 transitionCoordinator:(id)arg2 ;
// -(struct CGRect )_setExpandedFrame:(struct CGRect )arg0 initialFrame:(struct CGRect )arg1 representedActivity:(id)arg2 anchorActivityView:(id)arg3 collapsedSizeBlock:(id)arg4 preludeBlock:(unk)arg5 activityViewAnimationBlock:(id)arg6 transitionCoordinator:(unk)arg7  ;
-(struct CGRect )_setExpandedFrame:(struct CGRect )arg0 initialFrame:(struct CGRect )arg1 viaResizeWithRepresentedActivity:(id)arg2 transitionCoordinator:(id)arg3 ;
-(struct CGRect )_setExpandedFrame:(struct CGRect )arg0 initialFrame:(struct CGRect )arg1 viaScaleWithRepresentedActivity:(id)arg2 transitionCoordinator:(id)arg3 ;
-(struct CGRect )setContractedFrame:(struct CGRect )arg0 representedActivity:(id)arg1 presentationStyle:(NSInteger)arg2 transitionCoordinator:(id)arg3 ;
-(struct CGRect )setExpandedFrame:(struct CGRect )arg0 initialFrame:(struct CGRect )arg1 representedActivity:(id)arg2 presentationStyle:(NSInteger)arg3 transitionCoordinator:(id)arg4 ;
-(struct CGSize )_contentSizeForBounds:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureContentViewIfNecessary;
-(void)_invalidateContentSize;
-(void)_recalculateContentSize;
-(void)endIsolation;
-(void)isolateActivityView:(id)arg0 withInset:(struct UIEdgeInsets )arg1 ;
-(void)layoutSubviews;
-(void)setExpandedActivityView:(id)arg0 withTransitionCoordinator:(id)arg1 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setNeedsLayout;


@end


#endif