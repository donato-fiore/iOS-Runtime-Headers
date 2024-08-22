// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MEDIACONTROLSEXPANDABLEBUTTON_H
#define MEDIACONTROLSEXPANDABLEBUTTON_H

@class UIControl, UIView, NSMutableArray, NSString, UILabel, NSTimer, NSArray, MTVisualStylingProvider;
@protocol MRUVisualStylingProviderObserver, UIPointerInteractionDelegate;


#import "MediaControlsHapticPlayer.h"
#import "MediaControlsExpandableButtonOption.h"
#import "MRUVisualStylingProvider.h"

@interface MediaControlsExpandableButton : UIControl <MRUVisualStylingProviderObserver, UIPointerInteractionDelegate>



@property (nonatomic) NSInteger axis; // ivar: _axis
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (nonatomic) CGSize buttonImageSize; // ivar: _buttonImageSize
@property (retain, nonatomic) NSMutableArray *buttons; // ivar: _buttons
@property (retain, nonatomic) UIView *clippingView; // ivar: _clippingView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *disabledSubtitle; // ivar: _disabledSubtitle
@property (nonatomic) BOOL displayMessage; // ivar: _displayMessage
@property (nonatomic, getter=isExpanded) BOOL expanded; // ivar: _expanded
@property (retain, nonatomic) MediaControlsHapticPlayer *hapticPlayer; // ivar: _hapticPlayer
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isControlCenter; // ivar: _isControlCenter
@property (nonatomic) CGSize maximumExpandedSize; // ivar: _maximumExpandedSize
@property (retain, nonatomic) UILabel *messageLabel; // ivar: _messageLabel
@property (retain, nonatomic) NSTimer *messageTimer; // ivar: _messageTimer
@property (retain, nonatomic) NSArray *options; // ivar: _options
@property (retain, nonatomic) UIView *overlaySelectionView; // ivar: _overlaySelectionView
@property (readonly, nonatomic) MediaControlsExpandableButtonOption *selectedOption;
@property (nonatomic) NSInteger selectedOptionIndex; // ivar: _selectedOptionIndex
@property (retain, nonatomic) UIView *selectionView; // ivar: _selectionView
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (nonatomic) BOOL toggleEnabled; // ivar: _toggleEnabled
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider; // ivar: _visualStylingProvider


+(CGFloat)collapsedHeightWithImageHeight:(CGFloat)arg0 maximumHeight:(CGFloat)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(NSInteger)_buttonLayoutAxis;
-(id)initForControlCenter;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_layoutLabels;
-(void)_layoutSelectionView;
-(void)_updateButtonsVisiblity;
-(void)_updateSelectionVisiblity;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)didTapButton:(id)arg0 ;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)playFailedValueChangedEventHaptic;
-(void)playFailedValueChangedEventHapticWithMessage:(id)arg0 ;
-(void)playValueChangedEventHaptic;
-(void)pointerInteraction:(id)arg0 willEnterRegion:(id)arg1 animator:(id)arg2 ;
-(void)pointerInteraction:(id)arg0 willExitRegion:(id)arg1 animator:(id)arg2 ;
-(void)setContentVerticalAlignment:(NSInteger)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)showMessage:(id)arg0 ;
-(void)updateContentSizeCategory;
-(void)updateGlyphSelectionState;
-(void)updateVisualStyling;
-(void)visualStylingProviderDidChange:(id)arg0 ;


@end


#endif