// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRIUISNIPPETVIEWCONTROLLER_H
#define SIRIUISNIPPETVIEWCONTROLLER_H

@class UICollectionReusableView<SiriUIReusableView>, NSAttributedString, UIView, SAUIAppPunchOut, NSUUID, NSString, SAUIConfirmationOptions, NSArray, UIColor;
@protocol SiriUISnippetViewControllerDelegate;


#import "SiriUIBaseSnippetViewController.h"

@interface SiriUISnippetViewController : SiriUIBaseSnippetViewController {
    UICollectionReusableView<SiriUIReusableView> *_headerView;
    UICollectionReusableView<SiriUIReusableView> *_footerView;
    UICollectionReusableView<SiriUIReusableView> *_transparentHeaderView;
    UICollectionReusableView<SiriUIReusableView> *_transparentFooterView;
}


@property (copy, nonatomic) NSAttributedString *attributedSubtitle; // ivar: _attributedSubtitle
@property (nonatomic, getter=_isAwaitingSuccessOrFailureEvent, setter=_setAwaitingSuccessOrFailureEvent:) BOOL awaitingSuccessOrFailureEvent; // ivar: _awaitingSuccessOrFailureEvent
@property (nonatomic, getter=isCancelled) BOOL cancelled; // ivar: _cancelled
@property (nonatomic, getter=isConfirmed) BOOL confirmed; // ivar: _confirmed
@property (weak, nonatomic) UIView *containingView; // ivar: _containingView
@property (nonatomic) NSInteger defaultKeylineType; // ivar: _defaultKeylineType
@property (nonatomic) UIEdgeInsets defaultViewInsets; // ivar: _defaultViewInsets
@property (weak, nonatomic) NSObject<SiriUISnippetViewControllerDelegate> *delegate;
@property (retain, nonatomic) SAUIAppPunchOut *headerPunchOut; // ivar: _headerPunchOut
@property (readonly, nonatomic, getter=isIndicatingActivity) BOOL indicatingActivity;
@property (retain, nonatomic) NSUUID *instrumentationTurnIdentifier; // ivar: _instrumentationTurnIdentifier
@property (nonatomic) BOOL isFullPadWidth; // ivar: _isFullPadWidth
@property (nonatomic) BOOL isTransparent; // ivar: _isTransparent
@property (nonatomic, getter=isLoading) BOOL loading; // ivar: _loading
@property (nonatomic, getter=isNavigating) BOOL navigating; // ivar: _navigating
@property (copy, nonatomic) NSString *navigationTitle; // ivar: _navigationTitle
@property (retain, nonatomic, getter=_previousConfirmationOptions, setter=_setPreviousConfirmationOptions:) SAUIConfirmationOptions *previousConfirmationOptions; // ivar: _previousConfirmationOptions
@property (nonatomic, getter=_isProvisional, setter=_setProvisional:) BOOL provisional; // ivar: _provisional
@property (copy, nonatomic) NSArray *requestContext; // ivar: _requestContext
@property (nonatomic) BOOL showHeaderChevron; // ivar: _showHeaderChevron
@property (retain, nonatomic) SAUIAppPunchOut *snippetPunchOut; // ivar: _snippetPunchOut
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) UIColor *titleBackgroundColor; // ivar: _titleBackgroundColor
@property (copy, nonatomic) UIColor *titleTextColor; // ivar: _titleTextColor
@property (nonatomic, getter=isUserConfirmationEnabled) BOOL userConfirmationEnabled; // ivar: _userConfirmationEnabled
@property (readonly, nonatomic, getter=isVirgin) BOOL virgin; // ivar: _virgin
@property (nonatomic) BOOL wantsConfirmationInsets; // ivar: _wantsConfirmationInsets
@property (nonatomic, getter=_willAnimateCancellation, setter=_setWillAnimateCancellation:) BOOL willAnimateCancellation; // ivar: _willAnimateCancellation
@property (nonatomic, getter=_willAnimateConfirmation, setter=_setWillAnimateConfirmation:) BOOL willAnimateConfirmation; // ivar: _willAnimateConfirmation


-(BOOL)_hasConfirmationButtons;
-(BOOL)_hasConfirmationOrCancelledInsets;
-(BOOL)hasGeneratedNewInstrumentationTurnForPunchOutAceCommand:(id)arg0 url:(id)arg1 ;
-(BOOL)isMemoryIntensive;
-(BOOL)logContentsIfApplicable;
-(BOOL)removedAfterDialogProgresses;
-(BOOL)shouldHidePriorViews;
-(BOOL)usePlatterStyle;
-(BOOL)wantsToManageBackgroundColor;
-(CGFloat)desiredHeightForFooterView;
-(CGFloat)desiredHeightForHeaderView;
-(CGFloat)desiredHeightForTransparentFooterView;
-(CGFloat)desiredHeightForTransparentHeaderView;
-(Class)footerViewClass;
-(Class)headerViewClass;
-(Class)transparentFooterViewClass;
-(Class)transparentHeaderViewClass;
-(NSInteger)_insertionAnimation;
-(NSInteger)_pinAnimationType;
-(NSInteger)_replacementAnimation;
-(id)_createReusableViewIfNeededWithClass:(Class)arg0 ;
-(id)_footerView;
-(id)_headerView;
-(id)_instrumentationManager;
-(id)_privateDelegate;
-(id)_transparentFooterView;
-(id)_transparentHeaderView;
-(id)alternativeAceCommandsToPerformIfNotExposingViews;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_cancelTouchesIfNecessary;
-(void)_cellDidLayoutSubviews;
-(void)_instrumentConfirmationOptionInteractionWithPreviousTurn:(id)arg0 ;
-(void)_resumeTouchesIfNecessary;
-(void)_snippetViewControllerWillBeRemoved;
-(void)cancelButtonTapped:(id)arg0 ;
-(void)configureReusableFooterView:(id)arg0 ;
-(void)configureReusableHeaderView:(id)arg0 ;
-(void)configureReusableTransparentFooterView:(id)arg0 ;
-(void)configureReusableTransparentHeaderView:(id)arg0 ;
-(void)confirmButtonTapped:(id)arg0 ;
-(void)confirmSnippet;
-(void)headerTapped:(id)arg0 ;
-(void)setManageBackgroundColor:(BOOL)arg0 ;
-(void)setTopKeylineHidden:(BOOL)arg0 ;
-(void)siriDidLayoutSnippetView;
-(void)siriWillLayoutSnippetView;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)willCancel;
-(void)willConfirm;


@end


#endif