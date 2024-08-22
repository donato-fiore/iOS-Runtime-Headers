// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNSTARKACTIONVIEW_H
#define CNSTARKACTIONVIEW_H

@class UIView, NSString, UIButton, UIColor, UIImage, UILabel;
@protocol CNContactQuickActionPresentation, CNStarkActionViewDelegate;



@interface CNStarkActionView : UIView <CNContactQuickActionPresentation>



@property (nonatomic) CGFloat actionBorderWidth; // ivar: _actionBorderWidth
@property (nonatomic) CGFloat actionLabelOffset; // ivar: _actionLabelOffset
@property (nonatomic) CGFloat actionPlatterSize; // ivar: _actionPlatterSize
@property (retain, nonatomic) NSString *actionType; // ivar: _actionType
@property (readonly, nonatomic) UIButton *button; // ivar: _button
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<CNStarkActionViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disabledButtonFocused; // ivar: _disabledButtonFocused
@property (retain, nonatomic) UIColor *disabledFillColor; // ivar: _disabledFillColor
@property (retain, nonatomic) UIColor *disabledGlyphColor; // ivar: _disabledGlyphColor
@property (retain, nonatomic) UIColor *disabledStrokeColor; // ivar: _disabledStrokeColor
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) UIColor *enabledFillColor; // ivar: _enabledFillColor
@property (retain, nonatomic) UIColor *enabledGlyphColor; // ivar: _enabledGlyphColor
@property (retain, nonatomic) UIColor *enabledStrokeColor; // ivar: _enabledStrokeColor
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) UILabel *label; // ivar: _label
@property (nonatomic) BOOL selected; // ivar: _selected
@property (retain, nonatomic) UIColor *selectedFillColor; // ivar: _selectedFillColor
@property (retain, nonatomic) UIColor *selectedGlyphColor; // ivar: _selectedGlyphColor
@property (retain, nonatomic) UIColor *selectedStrokeColor; // ivar: _selectedStrokeColor
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title; // ivar: _title


+(id)propertyTransportButtonWithDelegate:(id)arg0 ;
+(id)quickActionButtonWithDelegate:(id)arg0 ;
-(BOOL)canBecomeFocused;
-(id)initWithDelegate:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)actionViewTapped:(id)arg0 ;
-(void)actionViewTouchDown:(id)arg0 ;
-(void)actionViewTouchUp:(id)arg0 ;
-(void)choose;
-(void)clickGestureDidUpdate:(id)arg0 ;
-(void)deselect;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)notifyDelegateAboutUserChoice;
-(void)select;
-(void)setupButton;
-(void)setupClickGestureRecognizer;
-(void)setupConstraints;
-(void)setupLabel;
-(void)stateUpdated;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateForFocusedState:(BOOL)arg0 ;


@end


#endif