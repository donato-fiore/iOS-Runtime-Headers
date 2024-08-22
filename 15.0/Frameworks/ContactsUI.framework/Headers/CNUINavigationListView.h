// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNUINAVIGATIONLISTVIEW_H
#define CNUINAVIGATIONLISTVIEW_H

@class UITableView, UIGestureRecognizer, NSString, UISelectionFeedbackGenerator, UILongPressGestureRecognizer, NSIndexPath;
@protocol UIGestureRecognizerDelegate, CNUINavigationListViewDataSource, CNUINavigationListViewDelegate;


#import "_CNUINavigationListViewPermissiveGestureRecognizerDelegate.h"

@interface CNUINavigationListView : UITableView <UIGestureRecognizerDelegate>



@property (retain, nonatomic) UIGestureRecognizer *additionalSelectionGestureRecognizer; // ivar: _additionalSelectionGestureRecognizer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGPoint gestureStartLocation; // ivar: _gestureStartLocation
@property (nonatomic) CGPoint gestureStartLocationInWindow; // ivar: _gestureStartLocationInWindow
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<CNUINavigationListViewDataSource> *navigationListViewDataSource; // ivar: _navigationListViewDataSource
@property (weak, nonatomic) NSObject<CNUINavigationListViewDelegate> *navigationListViewDelegate; // ivar: _navigationListViewDelegate
@property (retain, nonatomic) UIGestureRecognizer *pressGestureRecognizer; // ivar: _pressGestureRecognizer
@property (retain, nonatomic) UISelectionFeedbackGenerator *retargetBehavior; // ivar: _retargetBehavior
@property (retain, nonatomic) UILongPressGestureRecognizer *selectionGestureRecognizer; // ivar: _selectionGestureRecognizer
@property (retain, nonatomic) _CNUINavigationListViewPermissiveGestureRecognizerDelegate *selectionGestureRecognizerDelegate; // ivar: _selectionGestureRecognizerDelegate
@property (readonly) Class superclass;
@property (retain, nonatomic) NSIndexPath *trackedElementIndexPath; // ivar: _trackedElementIndexPath


+(BOOL)disableHeaderAccessibilityElements;
-(BOOL)location:(struct CGPoint )arg0 isInAccessoryControlTouchArea:(id)arg1 ;
-(id)dequeueDetailNavigationListViewCell;
-(id)dequeueNavigationListViewCell;
-(id)disclosureNavigationListViewCellForRowAtIndexPath:(id)arg0 ;
-(id)elementAtLocation:(struct CGPoint )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 ;
-(void)clearAdditionalSelectionGestureRecognizer;
-(void)handlePanGestureRecognizerUpdate:(id)arg0 ;
-(void)handlePressSelection;
-(void)handleSelectionGestureRecognizerUpdate:(id)arg0 ;
-(void)notifyDelegateWithSelectionEventAtIndexPath:(id)arg0 ;
-(void)notifyDelegateWithSelectionEventAtPoint:(struct CGPoint )arg0 trackedElementIndexPath:(id)arg1 ;
-(void)startTrackingElementAtIndexPath:(id)arg0 ;
-(void)startTrackingSelectionFromGestureRecognizer:(id)arg0 ;
-(void)stopTrackingElementAtIndexPath:(id)arg0 ;
-(void)updateCellAccessoryControlState:(id)arg0 withTrackedLocation:(struct CGPoint )arg1 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif