// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUQUICKCONTROLWHEELPICKERVIEW_H
#define HUQUICKCONTROLWHEELPICKERVIEW_H

@class UIView, NSString, UIImpactFeedbackGenerator, NSArray, UIPickerView, NSNumber, UISelectionFeedbackGenerator;
@protocol UIPickerViewDelegate, UIPickerViewDataSource, HUQuickControlInteractiveView, HUQuickControlViewInteractionDelegate;


#import "HUQuickControlWheelPickerViewProfile.h"

@interface HUQuickControlWheelPickerView : UIView <UIPickerViewDelegate, UIPickerViewDataSource, HUQuickControlInteractiveView>



@property (retain, nonatomic) UIView *bottomGradientView; // ivar: _bottomGradientView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator; // ivar: _impactFeedbackGenerator
@property (weak, nonatomic) NSObject<HUQuickControlViewInteractionDelegate> *interactionDelegate; // ivar: _interactionDelegate
@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (nonatomic) CGFloat maxTextWidth; // ivar: _maxTextWidth
@property (retain, nonatomic) UIPickerView *pickerView; // ivar: _pickerView
@property (copy, nonatomic) HUQuickControlWheelPickerViewProfile *profile; // ivar: _profile
@property (nonatomic) NSUInteger reachabilityState; // ivar: _reachabilityState
@property (retain, nonatomic) id *secondaryValue;
@property (retain, nonatomic) NSNumber *selectedRow; // ivar: _selectedRow
@property (retain, nonatomic) UIView *selectedRowSurroundingView; // ivar: _selectedRowSurroundingView
@property (retain, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator; // ivar: _selectionFeedbackGenerator
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *topGradientView; // ivar: _topGradientView
@property (nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive; // ivar: _userInteractionActive
@property (retain, nonatomic) id *value;


+(BOOL)requiresConstraintBasedLayout;
-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(id)initWithProfile:(id)arg0 ;
-(id)intrinsicSizeDescriptorForControlSize:(NSUInteger)arg0 ;
-(id)pickerView:(id)arg0 viewForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 reusingView:(id)arg3 ;
-(struct CGSize )intrinsicContentSize;
-(void)_actuateSelectionTapticFeedback;
-(void)_prepareForTapticFeedback;
-(void)_updateSelectedRowBorderView:(id)arg0 ;
-(void)_updateUI;
-(void)_updateUIForReachabilityState:(NSUInteger)arg0 ;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg0 ;
-(void)layoutSubviews;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;
-(void)setUserInteractionEnabled:(BOOL)arg0 ;
-(void)tintColorDidChange;


@end


#endif