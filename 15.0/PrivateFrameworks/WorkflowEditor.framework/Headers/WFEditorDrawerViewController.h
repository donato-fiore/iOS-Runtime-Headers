// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFEDITORDRAWERVIEWCONTROLLER_H
#define WFEDITORDRAWERVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol WFActionDrawerScrollViewObserver, WFActionDrawerDelegate;


#import "WFEditorDrawerHostingViewController.h"
#import "WFActionDrawerResultsController.h"
#import "WFEditorDrawerScrollViewDelegate.h"

@interface WFEditorDrawerViewController : UIViewController <WFActionDrawerScrollViewObserver>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFActionDrawerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WFEditorDrawerHostingViewController *hostingViewController; // ivar: _hostingViewController
@property (nonatomic) NSUInteger navigationStyle; // ivar: _navigationStyle
@property (readonly, nonatomic) WFActionDrawerResultsController *resultsController; // ivar: _resultsController
@property (readonly, nonatomic) WFEditorDrawerScrollViewDelegate *scrollViewDelegate; // ivar: _scrollViewDelegate
@property (readonly) Class superclass;


-(id)contentScrollViewForEdge:(NSUInteger)arg0 ;
-(id)initWithResultsController:(id)arg0 ;
-(void)activeScrollViewDidChange;
-(void)clearSearchBar;
-(void)focusSearchBar;
-(void)loadView;
-(void)performScrollingTest:(id)arg0 ;


@end


#endif