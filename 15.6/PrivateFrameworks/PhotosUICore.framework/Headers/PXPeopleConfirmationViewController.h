// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPEOPLECONFIRMATIONVIEWCONTROLLER_H
#define PXPEOPLECONFIRMATIONVIEWCONTROLLER_H

@class UIViewController, NSString, UILabel, UIActivityIndicatorView, NSTimer;
@protocol PXPeopleSuggestionManagerDelegate, PXPeopleSummaryDelegate;


#import "PXAnimatedHeaderView.h"
#import "PXPeopleConfirmationLoadingView.h"
#import "PXPeopleSuggestionManager.h"
#import "PXPeopleSuggestionView.h"
#import "PXPeopleConfirmationSummaryViewController.h"

@interface PXPeopleConfirmationViewController : UIViewController <PXPeopleSuggestionManagerDelegate, PXPeopleSummaryDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXAnimatedHeaderView *headerView; // ivar: _headerView
@property (retain, nonatomic) UIActivityIndicatorView *interimLoadingIndicator; // ivar: _interimLoadingIndicator
@property (retain, nonatomic) UILabel *interimLoadingLabel; // ivar: _interimLoadingLabel
@property (readonly) BOOL isSummaryViewShowing;
@property (retain, nonatomic) NSTimer *loadingDelayTimer; // ivar: _loadingDelayTimer
@property (retain, nonatomic) PXPeopleConfirmationLoadingView *loadingView; // ivar: _loadingView
@property (nonatomic) BOOL showTypeDebugColor; // ivar: _showTypeDebugColor
@property (readonly) PXPeopleSuggestionManager *suggestionManager; // ivar: _suggestionManager
@property (retain, nonatomic) PXPeopleSuggestionView *suggestionView; // ivar: _suggestionView
@property (nonatomic) BOOL suggestionsPresented; // ivar: _suggestionsPresented
@property (retain, nonatomic) PXPeopleConfirmationSummaryViewController *summaryViewController; // ivar: _summaryViewController
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger viewState; // ivar: _viewState


-(NSUInteger)autoConfirmedCountForSummaryViewController:(id)arg0 ;
-(NSUInteger)userConfirmedCountForSummaryViewController:(id)arg0 ;
-(id)initWithPerson:(id)arg0 ;
-(id)personForSummaryViewController:(id)arg0 ;
-(void)cancelOperation:(id)arg0 ;
-(void)confirmTapped:(id)arg0 ;
-(void)confirmationCountUpdatedForSuggestionManager:(id)arg0 undoing:(BOOL)arg1 ;
-(void)denyTapped:(id)arg0 ;
-(void)dismissSummary;
-(void)displaySummary;
-(void)doneTapped:(id)arg0 ;
-(void)noMoreSuggestionsAvailableForSuggestionManager:(id)arg0 ;
-(void)performUndo:(id)arg0 ;
-(void)presentSuggestion:(id)arg0 animated:(BOOL)arg1 ;
-(void)suggestionDidDisplay;
-(void)suggestionManager:(id)arg0 hasNewSuggestionsAvailable:(id)arg1 ;
-(void)undoConfirm:(id)arg0 ;
-(void)undoDeny:(id)arg0 ;
-(void)updateViewWithViewState:(NSUInteger)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)willLoadMoreSuggestionsForSuggestionManager:(id)arg0 ;


@end


#endif