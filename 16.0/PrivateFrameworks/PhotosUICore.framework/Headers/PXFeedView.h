// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXFEEDVIEW_H
#define PXFEEDVIEW_H

@class UIView, NSString, UIHoverGestureRecognizer, UITapGestureRecognizer;
@protocol UIGestureRecognizerDelegate, PXTouchingUIGestureRecognizerDelegate, PXGAXResponder, PXTapToRadarDiagnosticProvider, NSObject><NSCopying;


#import "PXFeedContentLayout.h"
#import "PXGSplitLayout.h"
#import "PXFeedTitleLayout.h"
#import "PXTouchingUIGestureRecognizer.h"
#import "PXGView.h"
#import "PXStoryTransitionableTungstenViewManager.h"
#import "PXFeedViewModel.h"

@interface PXFeedView : UIView <UIGestureRecognizerDelegate, PXTouchingUIGestureRecognizerDelegate, PXGAXResponder, PXTapToRadarDiagnosticProvider>



@property (weak, nonatomic) NSObject<PXGAXResponder> *axNextResponder; // ivar: _axNextResponder
@property (copy, nonatomic) id *currentHoverCompletion; // ivar: _currentHoverCompletion
@property (copy, nonatomic) id *currentTouchCompletion; // ivar: _currentTouchCompletion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXFeedContentLayout *feedContentLayout; // ivar: _feedContentLayout
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIHoverGestureRecognizer *hoverGesture; // ivar: _hoverGesture
@property (retain, nonatomic) NSObject<NSObject><NSCopying> *hoveredItemObjectID; // ivar: _hoveredItemObjectID
@property (nonatomic) BOOL isActive; // ivar: _isActive
@property (readonly, nonatomic) PXGSplitLayout *splitLayout; // ivar: _splitLayout
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (readonly, nonatomic) PXFeedTitleLayout *titleLayout; // ivar: _titleLayout
@property (readonly, nonatomic) PXTouchingUIGestureRecognizer *touchingGestureRecognizer; // ivar: _touchingGestureRecognizer
@property (readonly, nonatomic) PXGView *tungstenView;
@property (readonly, nonatomic) PXStoryTransitionableTungstenViewManager *tungstenViewManager; // ivar: _tungstenViewManager
@property (readonly, nonatomic) PXFeedViewModel *viewModel; // ivar: _viewModel


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
-(struct PXSimpleIndexPath )indexPathClosestToIndexPath:(struct PXSimpleIndexPath )arg0 inDirection:(NSUInteger)arg1 ;
-(void)_handleChangeToModifySelectionWithUserInfo:(id)arg0 ;
-(void)_handleHover:(id)arg0 ;
-(void)_handleHoverEventAtPoint:(struct CGPoint )arg0 ;
-(void)_handleTap:(id)arg0 ;
-(void)_handleTouch:(id)arg0 ;
-(void)_installGestureRecognizers;
-(void)axGroup:(id)arg0 didChange:(NSUInteger)arg1 userInfo:(id)arg2 ;
-(void)beginTouchingAtPoint:(struct CGPoint )arg0 ;
-(void)collectTapToRadarDiagnosticsIntoContainer:(id)arg0 ;
-(void)endTouching;
-(void)scrollObjectReference:(id)arg0 toScrollPosition:(NSUInteger)arg1 ;
-(void)touchingUIGestureRecognizerWillBeginTouching:(id)arg0 ;
-(void)touchingUIGestureRecognizerWillEndTouching:(id)arg0 ;


@end


#endif