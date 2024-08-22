// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIINTERFACEACTIONSELECTIONTRACKINGCONTROLLER_H
#define UIINTERFACEACTIONSELECTIONTRACKINGCONTROLLER_H

@class NSString, NSArray, NSMutableSet, NSPointerArray;
@protocol UIGestureRecognizerDelegate, UIFocusedInterfaceActionPressDelegate;

#import <Foundation/Foundation.h>

#import "UIScrollView.h"
#import "UIHoverGestureRecognizer.h"
#import "_UIInterfaceActionSelectByPressGestureRecognizer.h"
#import "_UIInterfaceActionSelectionDelayGestureRecognizer.h"
#import "UILongPressGestureRecognizer.h"
#import "UISelectionFeedbackGenerator.h"
#import "UIGestureRecognizer.h"
#import "UIView.h"

@interface UIInterfaceActionSelectionTrackingController : NSObject <UIGestureRecognizerDelegate, UIFocusedInterfaceActionPressDelegate>



@property (readonly, nonatomic) CGPoint actionSelectionInitialLocationInContainerView; // ivar: _actionSelectionInitialLocationInContainerView
@property (weak, nonatomic) UIScrollView *actionsScrollView; // ivar: _actionsScrollView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIHoverGestureRecognizer *hoverGestureRecognizer; // ivar: _hoverGestureRecognizer
@property (retain, nonatomic) NSArray *representationViews; // ivar: _representationViews
@property (retain, nonatomic) id *scrollViewDidEndDeceleratingNotificationToken; // ivar: _scrollViewDidEndDeceleratingNotificationToken
@property (retain, nonatomic) id *scrollViewDidEndDraggingNotificationToken; // ivar: _scrollViewDidEndDraggingNotificationToken
@property (retain, nonatomic) id *scrollViewWillBeginDraggingNotificationToken; // ivar: _scrollViewWillBeginDraggingNotificationToken
@property (nonatomic) BOOL scrubbingEnabled; // ivar: _scrubbingEnabled
@property (nonatomic) BOOL selectByIndirectPointerTouchEnabled; // ivar: _selectByIndirectPointerTouchEnabled
@property (nonatomic) BOOL selectByPressGestureEnabled; // ivar: _selectByPressGestureEnabled
@property (retain, nonatomic) _UIInterfaceActionSelectByPressGestureRecognizer *selectByPressGestureRecognizer; // ivar: _selectByPressGestureRecognizer
@property (readonly, nonatomic) _UIInterfaceActionSelectionDelayGestureRecognizer *selectionDelayGestureRecognizer; // ivar: _selectionDelayGestureRecognizer
@property (nonatomic) BOOL selectionFeedbackEnabled; // ivar: _selectionFeedbackEnabled
@property (readonly, nonatomic) UILongPressGestureRecognizer *selectionGestureRecognizer; // ivar: _selectionGestureRecognizer
@property (retain, nonatomic) UISelectionFeedbackGenerator *selectionRetargetFeedbackGenerator; // ivar: _selectionRetargetFeedbackGenerator
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIGestureRecognizer *systemProvidedGestureRecognizer; // ivar: _systemProvidedGestureRecognizer
@property (weak, nonatomic) UIView *trackableContainerView; // ivar: _trackableContainerView
@property (readonly, nonatomic) NSMutableSet *viewsRequiringSelectionGestureDisabling; // ivar: _viewsRequiringSelectionGestureDisabling
@property (retain, nonatomic) NSPointerArray *weakCooperatingSelectionTrackingControllers; // ivar: _weakCooperatingSelectionTrackingControllers


-(BOOL)_allowSelectionForCurrentGestureLocationWithGestureRecognizer:(id)arg0 ;
-(BOOL)_gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)_gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)_isPresentedAndVisible;
-(BOOL)_shouldDisableSelectionTrackingIfScrollingScrollView:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(id)_actionViewAtCurrentLocationForGestureRecognizer:(id)arg0 ;
-(id)_actionViewIncludingCooperatingActionViewsAtCurrentLocationForGestureRecognizer:(id)arg0 ;
-(id)_allActionViewsIncludingCooperatingActionViews;
-(id)_allGestureRecognizers;
-(id)_interfaceActionOfFocusedRepresentationView;
-(id)focusedInterfaceAction;
-(id)initWithTrackableContainerView:(id)arg0 actionsScrollView:(id)arg1 ;
-(void)_clearSystemProvidedGestureRecognizer;
-(void)_handleActionSelectionGestureRecognizer:(id)arg0 ;
-(void)_handleSystemProvidedGestureRecognizer:(id)arg0 ;
-(void)_initializeSelectionGestureRecognizer;
-(void)_invokeHandlerForInterfaceAction:(id)arg0 ;
-(void)_noteScrollView:(id)arg0 isUserScrolling:(BOOL)arg1 ;
-(void)_performRecursivelyWithVisitedCooperatingControllers:(id)arg0 block:(id)arg1 ;
-(void)_registerForScrollViewNotifications;
-(void)_rolloverActionChanged:(id)arg0 ;
-(void)_unregisterForScrollViewNotifications;
-(void)beginTrackingSessionByTakingOverForSystemProvidedGestureRecognizer:(id)arg0 ;
-(void)dealloc;
-(void)deselectAllActions;
-(void)handlePressedFocusedInterfaceAction:(id)arg0 ;
-(void)setCooperatingSelectionTrackingControllers:(id)arg0 ;


@end


#endif