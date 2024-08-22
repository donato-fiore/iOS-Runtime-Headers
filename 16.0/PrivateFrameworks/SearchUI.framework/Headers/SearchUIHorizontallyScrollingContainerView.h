// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUIHORIZONTALLYSCROLLINGCONTAINERVIEW_H
#define SEARCHUIHORIZONTALLYSCROLLINGCONTAINERVIEW_H

@class NUIContentScrollView, NSArray, NSMapTable, NSString, UIViewController, NUIContainerStackView, NSMutableSet;
@protocol NUIContainerViewDelegate, UIScrollViewDelegate, SearchUIFeedbackDelegate;


#import "SearchUIHorizontallyScrollingMoreResultsButtonController.h"

@interface SearchUIHorizontallyScrollingContainerView : NUIContentScrollView <NUIContainerViewDelegate, UIScrollViewDelegate>



@property (retain, nonatomic) NSArray *buttonControllers; // ivar: _buttonControllers
@property (retain, nonatomic) NSMapTable *buttonControllersForViews; // ivar: _buttonControllersForViews
@property (readonly, copy) NSString *debugDescription;
@property CGFloat defaultArrangedSubviewWidth; // ivar: _defaultArrangedSubviewWidth
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<SearchUIFeedbackDelegate> *feedbackDelegate; // ivar: _feedbackDelegate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIViewController *presentedViewController; // ivar: _presentedViewController
@property (copy, nonatomic) NSArray *scrollableCardSectionRowModels; // ivar: _scrollableCardSectionRowModels
@property (retain, nonatomic) SearchUIHorizontallyScrollingMoreResultsButtonController *seeMoreButtonController; // ivar: _seeMoreButtonController
@property (retain, nonatomic) NUIContainerStackView *stackViewToScroll; // ivar: _stackViewToScroll
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableSet *visibleResultsAlreadySentBack; // ivar: _visibleResultsAlreadySentBack


-(CGFloat)widthForArrangedSubview:(id)arg0 ;
-(id)init;
-(struct CGRect )containerView:(id)arg0 layoutFrameForArrangedSubview:(id)arg1 withProposedFrame:(struct CGRect )arg2 ;
-(struct CGSize )containerView:(id)arg0 systemLayoutSizeFittingSize:(struct CGSize )arg1 forArrangedSubview:(id)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)containerViewDidLayoutArrangedSubviews:(id)arg0 ;
-(void)modalViewControllerClosed;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)scrollingButtonPressed:(id)arg0 ;
-(void)sendVisibleFeedback;


@end


#endif