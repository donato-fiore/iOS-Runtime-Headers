// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUIDETAILEDVIEW_H
#define SEARCHUIDETAILEDVIEW_H

@class NUIContainerStackView, NSMutableArray, TLKStackView, NSString, TLKDetailsView, UIView;
@protocol NUIContainerViewDelegate, SearchUIAccessoryViewDelegate, TLKDetailsViewDelegate, SearchUIDetailedViewDelegate, SearchUIFeedbackDelegate;


#import "SearchUIButtonItemProvider.h"
#import "SearchUIAccessoryViewController.h"
#import "SearchUILeadingViewController.h"
#import "SearchUIDetailedRowModel.h"

@interface SearchUIDetailedView : NUIContainerStackView <NUIContainerViewDelegate, SearchUIAccessoryViewDelegate, TLKDetailsViewDelegate>



@property (retain, nonatomic) NSMutableArray *accessoryViewControllers; // ivar: _accessoryViewControllers
@property (retain, nonatomic) TLKStackView *buttonAndDetailViewStackView; // ivar: _buttonAndDetailViewStackView
@property (weak, nonatomic) NSObject<SearchUIDetailedViewDelegate> *buttonDelegate; // ivar: _buttonDelegate
@property (retain, nonatomic) SearchUIButtonItemProvider *buttonItemProvider; // ivar: _buttonItemProvider
@property (retain, nonatomic) TLKStackView *buttonItemStackView; // ivar: _buttonItemStackView
@property (retain, nonatomic) SearchUIAccessoryViewController *currentAccessoryViewController; // ivar: _currentAccessoryViewController
@property (retain, nonatomic) SearchUILeadingViewController *currentLeadingViewController; // ivar: _currentLeadingViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TLKDetailsView *detailsView; // ivar: _detailsView
@property (weak, nonatomic) NSObject<SearchUIFeedbackDelegate> *feedbackDelegate; // ivar: _feedbackDelegate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TLKStackView *innerContainer; // ivar: _innerContainer
@property BOOL isCompactWidth; // ivar: _isCompactWidth
@property (nonatomic) BOOL isVerticalAlignment; // ivar: _isVerticalAlignment
@property (readonly, nonatomic) UIView *leadingTextView;
@property (readonly, nonatomic) UIView *leadingView;
@property (retain, nonatomic) NSMutableArray *leadingViewControllers; // ivar: _leadingViewControllers
@property (retain, nonatomic) SearchUIDetailedRowModel *rowModel; // ivar: _rowModel
@property (readonly) Class superclass;


+(id)bannerBadgeForRowModel:(id)arg0 ;
+(void)addViewIfNecessary:(id)arg0 toStackView:(id)arg1 removeFromStackView:(id)arg2 ;
-(BOOL)arrangedViewMustCenter:(id)arg0 ;
-(BOOL)configureMenuForFootnoteButton:(id)arg0 ;
-(CGFloat)trailingMarginForAccessoryViewController:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFeedbackDelegate:(id)arg0 ;
-(struct CGRect )containerView:(id)arg0 layoutFrameForArrangedSubview:(id)arg1 withProposedFrame:(struct CGRect )arg2 ;
-(struct UIEdgeInsets )layoutMargins;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)containerView:(id)arg0 willMeasureArrangedSubviewsFittingSize:(struct CGSize )arg1 forReason:(NSInteger)arg2 ;
-(void)didMoveToWindow;
-(void)footnoteButtonPressed;
-(void)layoutSubviews;
-(void)tlk_updateForAppearance:(id)arg0 ;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif