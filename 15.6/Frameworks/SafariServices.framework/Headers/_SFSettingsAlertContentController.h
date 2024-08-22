// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFSETTINGSALERTCONTENTCONTROLLER_H
#define _SFSETTINGSALERTCONTENTCONTROLLER_H

@class UIViewController, NSMutableArray, NSMutableIndexSet, UIScrollView, UIStackView, NSArray, NSLayoutConstraint, UIView, UIControl, UISelectionFeedbackGenerator, NSString;
@protocol UIGestureRecognizerDelegate, SFSettingsAlertItemViewDelegate;


#import "_SFSettingsAlertController.h"
#import "_SFSettingsAlertItem.h"

@interface _SFSettingsAlertContentController : UIViewController <UIGestureRecognizerDelegate, SFSettingsAlertItemViewDelegate>

 {
    NSMutableArray *_items;
    NSMutableIndexSet *_groupStartIndices;
    UIScrollView *_scrollView;
    UIStackView *_stackView;
    NSArray *_focusedItemConstraints;
    NSArray *_stackViewTopBottomConstraints;
    NSLayoutConstraint *_stackViewWidthConstraint;
    UIView *_lastViewForAlignment;
    UIControl *_controlHighlightedForPan;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    BOOL _updatePreferredContentSizeAfterLayout;
    BOOL _updateScrollPositionAfterLayout;
}


@property (weak, nonatomic) _SFSettingsAlertController *alertController; // ivar: _alertController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _SFSettingsAlertItem *focusedItem; // ivar: _focusedItem
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *items;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesReverseOrder; // ivar: _usesReverseOrder


-(BOOL)canBecomeFirstResponder;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)_createViewForItem:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_addGroupSeparatorIfNeededBeforeItemAtIndex:(NSUInteger)arg0 ;
-(void)_addViewForItem:(id)arg0 ;
-(void)_alignButtonImageView:(id)arg0 ;
-(void)_panRecognized:(id)arg0 ;
-(void)_scrollToBottomIfNeeded;
-(void)_stepperValueChanged:(id)arg0 ;
-(void)_tappedItemView:(id)arg0 ;
-(void)_updateFocusedItemConstraints;
-(void)_updatePreferredContentSize;
-(void)_updateSeparators;
-(void)addDivider;
-(void)addItem:(id)arg0 ;
-(void)alertItemViewContentSizeDidChange:(id)arg0 ;
-(void)loadView;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif