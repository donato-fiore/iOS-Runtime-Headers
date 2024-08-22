// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKDRAWINGPALETTEINPUTASSISTANTVIEW_H
#define PKDRAWINGPALETTEINPUTASSISTANTVIEW_H

@class UIView, NSArray, UIStackView, NSString, NSHashTable;
@protocol PKPaletteButtonIntrinsicContentSizeObserver, PKPaletteEdgeLocating, PKPaletteViewSizeScaling;


#import "PKPaletteButtonGroupView.h"
#import "PKPaletteKeyboardButton.h"
#import "PKPaletteButton.h"

@interface PKDrawingPaletteInputAssistantView : UIView <PKPaletteButtonIntrinsicContentSizeObserver, PKPaletteEdgeLocating, PKPaletteViewSizeScaling>



@property (retain, nonatomic) PKPaletteButtonGroupView *bottomOrLeadingGroupView; // ivar: _bottomOrLeadingGroupView
@property (copy, nonatomic) NSArray *buttons; // ivar: _buttons
@property (retain, nonatomic) UIStackView *contentStackView; // ivar: _contentStackView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger edgeLocation; // ivar: _edgeLocation
@property (nonatomic) BOOL enableKeyboardButtons; // ivar: _enableKeyboardButtons
@property (readonly, nonatomic) BOOL hasInputAssistantItems;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKPaletteKeyboardButton *keyboardButton; // ivar: _keyboardButton
@property (retain, nonatomic) PKPaletteButton *returnKeyButton; // ivar: _returnKeyButton
@property (nonatomic) CGFloat scalingFactor; // ivar: _scalingFactor
@property (nonatomic) BOOL shouldShowKeyboardButton; // ivar: _shouldShowKeyboardButton
@property (nonatomic) BOOL shouldShowReturnKeyButton; // ivar: _shouldShowReturnKeyButton
@property (readonly) Class superclass;
@property (retain, nonatomic) PKPaletteButtonGroupView *topOrTrailingGroupView; // ivar: _topOrTrailingGroupView
@property (nonatomic) BOOL useCompactLayout; // ivar: _useCompactLayout
@property (retain, nonatomic) NSHashTable *viewStateObservers; // ivar: _viewStateObservers


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_notifyViewStateDidChange;
-(void)_updateContentOrientation;
-(void)_updateContentScalingFactor;
-(void)_updateContentViewSpacing;
-(void)_updateGroupViewContents;
-(void)_updateUI;
-(void)addViewStateObserver:(id)arg0 ;
-(void)buttonDidChangeIntrinsicContentSize:(id)arg0 ;
-(void)removeViewStateObserver:(id)arg0 ;


@end


#endif