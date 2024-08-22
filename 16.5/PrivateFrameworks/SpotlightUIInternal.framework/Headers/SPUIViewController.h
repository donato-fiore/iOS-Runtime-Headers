// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPUIVIEWCONTROLLER_H
#define SPUIVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol SPUIResultsViewDelegate, SearchUIResultsViewDelegate, SearchUICommandDelegate, SFFeedbackListener, SPUIViewControllerDelegate;


#import "SPUIResultsViewController.h"

@interface SPUIViewController : UIViewController <SPUIResultsViewDelegate, SearchUIResultsViewDelegate, SearchUICommandDelegate, SFFeedbackListener>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SPUIViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) SPUIResultsViewController *searchResultViewController; // ivar: _searchResultViewController
@property (readonly) Class superclass;


+(BOOL)isFeedbackSelector:(SEL)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)activeViewController;
-(id)contentScrollView;
-(id)currentQuery;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)viewControllerForPresenting;
-(void)activateViewController:(id)arg0 animate:(BOOL)arg1 ;
-(void)didTapInEmptyRegion;
-(void)didUpdateActiveViewController;
-(void)willUpdateActiveViewController;
-(void)willUpdateFromResultsWithHighlightedResult:(id)arg0 viewController:(id)arg1 ;


@end


#endif