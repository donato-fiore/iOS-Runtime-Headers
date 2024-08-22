// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYFEEDVIEW_H
#define PXSTORYFEEDVIEW_H

@class UIView, NSString;
@protocol UIGestureRecognizerDelegate, PXTouchingUIGestureRecognizerDelegate, PXGAXResponder, PXTapToRadarDiagnosticProvider;


#import "PXStoryFeedViewLayout.h"
#import "PXTouchingUIGestureRecognizer.h"
#import "PXGView.h"
#import "PXStoryTransitionableTungstenViewManager.h"
#import "PXStoryFeedViewModel.h"

@interface PXStoryFeedView : UIView <UIGestureRecognizerDelegate, PXTouchingUIGestureRecognizerDelegate, PXGAXResponder, PXTapToRadarDiagnosticProvider>



@property (weak, nonatomic) NSObject<PXGAXResponder> *axNextResponder; // ivar: _axNextResponder
@property (copy, nonatomic) id *currentTouchCompletion; // ivar: _currentTouchCompletion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXStoryFeedViewLayout *feedViewLayout; // ivar: _feedViewLayout
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isActive; // ivar: _isActive
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXTouchingUIGestureRecognizer *touchingGestureRecognizer; // ivar: _touchingGestureRecognizer
@property (readonly, nonatomic) PXGView *tungstenView;
@property (readonly, nonatomic) PXStoryTransitionableTungstenViewManager *tungstenViewManager; // ivar: _tungstenViewManager
@property (readonly, nonatomic) PXStoryFeedViewModel *viewModel; // ivar: _viewModel


-(BOOL)axGroup:(id)arg0 didRequestToPerformAction:(NSInteger)arg1 userInfo:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)handlePrimaryInteractionAtPoint:(struct CGPoint )arg0 ;
-(id)axContainingScrollViewForAXGroup:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 configuration:(id)arg1 ;
-(id)itemPlacementControllerForItemReference:(id)arg0 ;
-(id)regionOfInterestForObjectReference:(id)arg0 ;
-(void)_handleChangeToModifySelectionWithUserInfo:(id)arg0 ;
-(void)_handleTouch:(id)arg0 ;
-(void)_installGestureRecognizers;
-(void)axGroup:(id)arg0 didChange:(NSUInteger)arg1 userInfo:(id)arg2 ;
-(void)beginTouchingAtPoint:(struct CGPoint )arg0 ;
-(void)collectTapToRadarDiagnosticsIntoContainer:(id)arg0 ;
-(void)endTouching;
-(void)touchingUIGestureRecognizerWillBeginTouching:(id)arg0 ;
-(void)touchingUIGestureRecognizerWillEndTouching:(id)arg0 ;


@end


#endif