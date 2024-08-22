// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC17CORESUGGESTIONSUI27SGSUGGESTIONTABLECONTROLLER_H
#define _TTC17CORESUGGESTIONSUI27SGSUGGESTIONTABLECONTROLLER_H

@class UIViewController;
@protocol SGSuggestionViewControllerPresenter;



@interface _TtC17CoreSuggestionsUI27SGSuggestionTableController : UIViewController <SGSuggestionViewControllerPresenter>

 {
    ? store;
    ? tableViewController;
    ? presenterDelegate;
    ? suggestionPresenter;
    ? suggestionList;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStore:(id)arg0 delegate:(id)arg1 suggestionPresenter:(id)arg2 suggestionList:(id)arg3 ;
-(void)dealloc;
-(void)dismissViewController:(id)arg0 ;
-(void)dismissalPressed:(id)arg0 ;
-(void)presentViewController:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif