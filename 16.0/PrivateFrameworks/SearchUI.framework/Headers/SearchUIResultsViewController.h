// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUIRESULTSVIEWCONTROLLER_H
#define SEARCHUIRESULTSVIEWCONTROLLER_H

@class UIViewController, NSString, UIView, UIResponder, UISearchTextField, NSArray;
@protocol UIGestureRecognizerDelegate, SearchUIKeyboardableTableViewDelegate, SearchUISizingDelegate, SearchUIViewTesting, SearchUICommandDelegate, SearchUIResultsViewDelegate, SFFeedbackListener;


#import "SearchUIResultsCollectionViewController.h"
#import "SearchUIBackgroundView.h"

@interface SearchUIResultsViewController : UIViewController <UIGestureRecognizerDelegate, SearchUIKeyboardableTableViewDelegate, SearchUISizingDelegate, SearchUIViewTesting>



@property (nonatomic) CGFloat additionalKeyboardHeight;
@property (weak, nonatomic) NSObject<SearchUICommandDelegate> *commandDelegate;
@property (readonly, nonatomic) CGSize contentSize;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SearchUIResultsViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat distanceToTopOfAppIcons;
@property (weak, nonatomic) NSObject<SFFeedbackListener> *feedbackListener;
@property (retain, nonatomic) UIView *footerView;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL immediatelyShowCardForSingleResult; // ivar: _immediatelyShowCardForSingleResult
@property (retain, nonatomic) NSString *previousSearchString; // ivar: _previousSearchString
@property (retain, nonatomic) NSString *queryString;
@property (readonly, nonatomic) UIResponder *responderForKeyboardInput;
@property (retain, nonatomic) SearchUIResultsCollectionViewController *resultsTableViewController; // ivar: _resultsTableViewController
@property (retain, nonatomic) UISearchTextField *searchField;
@property (retain, nonatomic) NSArray *sections; // ivar: _sections
@property (nonatomic) BOOL shouldHideResultsUnderKeyboard;
@property (nonatomic) BOOL shouldMonitorScrollingPastBottomOfContent; // ivar: _shouldMonitorScrollingPastBottomOfContent
@property (nonatomic) BOOL shouldUseInsetRoundedSections;
@property (nonatomic) BOOL shouldUseStandardSectionInsets;
@property (nonatomic) BOOL showsVerticalScrollIndicator;
@property (nonatomic) NSUInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (retain, nonatomic) SearchUIBackgroundView *view;
@property (copy, nonatomic) id *viewDidUpdateHandler; // ivar: viewDidUpdateHandler
@property (copy, nonatomic) id *viewWillUpdateHandler; // ivar: viewWillUpdateHandler


-(BOOL)_canShowWhileLocked;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(CGFloat)contentHeightForWidth:(CGFloat)arg0 maxHeight:(CGFloat)arg1 ;
-(NSInteger)numberOfSections;
-(id)contentScrollView;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct CGRect )scrollToIndexPath:(id)arg0 ;
-(void)contentSizeDidChange:(struct CGSize )arg0 animated:(BOOL)arg1 ;
-(void)didBeginScrolling;
-(void)didFocusOnCell:(id)arg0 ;
-(void)didPresentToResumeSearch:(BOOL)arg0 ;
-(void)didScrollPastBottomOfContent;
-(void)didTap;
-(void)didUpdateKeyboardFocusToResult:(id)arg0 cardSection:(id)arg1 ;
-(void)highlightResult:(id)arg0 ;
-(void)iterateIndexPaths:(id)arg0 ;
-(void)performRecapScrollTestWithTestName:(id)arg0 completion:(id)arg1 ;
-(void)performReturnKeyPressAction;
-(void)performScrollTestWithCompletion:(id)arg0 ;
// -(void)performScrollTestWithHandlerForFirstScrollCompletion:(id)arg0 completion:(unk)arg1  ;
-(void)purgeMemory;
-(void)replaceResult:(id)arg0 withResult:(id)arg1 ;
-(void)restoreResultsIfNeeded;
-(void)tapAtIndexPath:(id)arg0 ;
-(void)toggleShowMoreForSection:(NSUInteger)arg0 ;
-(void)updateWithResultSections:(id)arg0 ;
-(void)updateWithResultSections:(id)arg0 resetScrollPoint:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)willDismiss;


@end


#endif