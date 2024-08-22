// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICONTEXTMENUVIEW_H
#define _UICONTEXTMENUVIEW_H

@class NSDate, NSTimer, NSString, NSIndexPath, NSArray;
@protocol UIGestureRecognizerDelegate, _UIContextMenuViewDelegate;


#import "UIView.h"
#import "UICollectionViewDiffableDataSource.h"
#import "_UIContextMenuListView.h"
#import "_UIContextMenuNode.h"
#import "UISelectionFeedbackGenerator.h"
#import "UIHoverGestureRecognizer.h"
#import "_UIContextMenuSelectionDelayGestureRecognizer.h"
#import "_UIContextMenuSelectionGestureRecognizer.h"
#import "_UIContextMenuLinkedList.h"

@interface _UIContextMenuView : UIView <UIGestureRecognizerDelegate>



@property (retain, nonatomic) NSDate *appearanceDate; // ivar: _appearanceDate
@property (nonatomic) NSUInteger attachmentEdge; // ivar: _attachmentEdge
@property (retain, nonatomic) NSTimer *autoNavigationTimer; // ivar: _autoNavigationTimer
@property (retain, nonatomic) UICollectionViewDiffableDataSource *collectionViewDataSource; // ivar: _collectionViewDataSource
@property (readonly, nonatomic) _UIContextMenuListView *currentListView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIContextMenuViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) _UIContextMenuNode *departingNode; // ivar: _departingNode
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UISelectionFeedbackGenerator *feedbackGenerator; // ivar: _feedbackGenerator
@property (nonatomic) BOOL hasTrackingTouch; // ivar: _hasTrackingTouch
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger hierarchyStyle; // ivar: _hierarchyStyle
@property (retain, nonatomic) UIHoverGestureRecognizer *highlightHoverGestureRecognizer; // ivar: _highlightHoverGestureRecognizer
@property (nonatomic) BOOL isComputingPreferredSize; // ivar: _isComputingPreferredSize
@property (nonatomic) BOOL retainHighlightOnMenuNavigation; // ivar: _retainHighlightOnMenuNavigation
@property (nonatomic) BOOL reversesActionOrder; // ivar: _reversesActionOrder
@property (nonatomic) BOOL scrubbingEnabled; // ivar: _scrubbingEnabled
@property (retain, nonatomic) _UIContextMenuSelectionDelayGestureRecognizer *selectionDelayGestureRecognizer; // ivar: _selectionDelayGestureRecognizer
@property (retain, nonatomic) _UIContextMenuSelectionGestureRecognizer *selectionGestureRecognizer; // ivar: _selectionGestureRecognizer
@property (nonatomic) BOOL showsShadow; // ivar: _showsShadow
@property (retain, nonatomic) _UIContextMenuLinkedList *submenus; // ivar: _submenus
@property (readonly) Class superclass;
@property (copy, nonatomic) NSIndexPath *unselectableIndexPath; // ivar: _unselectableIndexPath
@property (nonatomic) CGSize visibleContentSize; // ivar: _visibleContentSize
@property (readonly, nonatomic) NSArray *visibleMenus;


-(BOOL)_allowsChangingFirstResponderForFocusUpdateWithContext:(id)arg0 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)kickstartActionScrubbingWithGesture:(id)arg0 ;
-(id)_newListViewWithMenu:(id)arg0 position:(NSUInteger)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)keyCommands;
-(id)preferredFocusEnvironments;
-(struct CGRect )_rectOfNodeParentElement:(id)arg0 ;
-(struct CGRect )activeSubmenuFrameInCoordinateSpace:(id)arg0 ;
-(struct CGSize )preferredContentSizeWithWidth:(CGFloat)arg0 ;
-(void)_clearAutoNavigationTimer;
-(void)_displayMenu:(id)arg0 inPlaceOfMenu:(id)arg1 updateType:(NSUInteger)arg2 alongsideAnimations:(id)arg3 ;
-(void)_handleEscapeKey:(id)arg0 ;
-(void)_handleHoverGestureRecognizer:(id)arg0 ;
-(void)_handleLeftArrowKey:(id)arg0 ;
-(void)_handleMenuPressGesture:(id)arg0 ;
-(void)_handleRightArrowKey:(id)arg0 ;
-(void)_handleSelectPressGesture:(id)arg0 ;
-(void)_handleSelectionForElement:(id)arg0 shouldUnhighlightPreviousElement:(BOOL)arg1 ;
-(void)_handleSelectionGesture:(id)arg0 ;
-(void)_performActionForElement:(id)arg0 ;
-(void)_setHighlightedIndexPath:(id)arg0 playFeedback:(BOOL)arg1 ;
-(void)_testing_tapAnAction;
-(void)_updateSelectionGestureAllowableMovement;
-(void)displayMenu:(id)arg0 updateType:(NSUInteger)arg1 alongsideAnimations:(id)arg2 ;
-(void)flashScrollIndicators;
-(void)layoutSubviews;
-(void)replaceVisibleMenu:(id)arg0 withMenu:(id)arg1 alongsideAnimations:(id)arg2 ;
-(void)scrollToFirstSignificantAction;
-(void)setUserInteractionEnabled:(BOOL)arg0 ;


@end


#endif