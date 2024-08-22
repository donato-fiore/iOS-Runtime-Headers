// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFCAPSULEURLFIELD_H
#define SFCAPSULEURLFIELD_H

@class UIView, NSLayoutConstraint, NSArray, NSString, NSNumber, UITextField;
@protocol SFCapsuleContentView, SFCapsuleContentViewSizeUpdating;


#import "_SFDimmingButton.h"
#import "_SFBarTheme.h"

@interface SFCapsuleURLField : UIView <SFCapsuleContentView>

 {
    NSLayoutConstraint *_textFieldTrailingConstraint;
    CGFloat _lastPlaceholderWidth;
    _SFDimmingButton *_clearTextButton;
    NSLayoutConstraint *_voiceSearchToClearButtonConstraint;
    NSLayoutConstraint *_voiceSearchToCapsuleConstraint;
    _SFDimmingButton *_voiceSearchButton;
    NSArray *_voiceSearchButtonConstraints;
}


@property (copy, nonatomic) id *buttonPointerStyleProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *highlightObserver;
@property (nonatomic, setter=setHighlighted:) BOOL isHighlighted;
@property (nonatomic, setter=setMinimized:) BOOL isMinimized;
@property (nonatomic, setter=setSelected:) BOOL isSelected;
@property (readonly, nonatomic) CGFloat keyContentBaselineBottomInset;
@property (readonly, nonatomic) CGFloat keyContentCapHeightTopInset;
@property (readonly, nonatomic) CGRect keyContentRect;
@property (nonatomic) CGAffineTransform keyContentTransform; // ivar: _keyContentTransform
@property (nonatomic) NSInteger layoutStyle;
@property (readonly, nonatomic) NSNumber *microphoneContentOriginX;
@property (nonatomic) CGAffineTransform microphoneContentTransform; // ivar: _microphoneContentTransform
@property (nonatomic) CGFloat minimizationPercent;
@property (nonatomic) CGFloat minimizedContentHorizontalInset;
@property (nonatomic) CGFloat nonKeyContentAlpha; // ivar: _nonKeyContentAlpha
@property (nonatomic) _NSRange rangeOfKeyText; // ivar: _rangeOfKeyText
@property (nonatomic) BOOL showsVoiceSearchButton;
@property (weak, nonatomic) NSObject<SFCapsuleContentViewSizeUpdating> *sizeUpdater;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITextField *textField; // ivar: _textField
@property (retain, nonatomic) _SFBarTheme *theme;
@property (weak, nonatomic) UIView *unclippedContainer;
@property (copy, nonatomic) id *voiceSearchTappedAction; // ivar: _voiceSearchTappedAction


-(id)_newDimmingButtonWithSystemImageNamed:(id)arg0 action:(SEL)arg1 accessibilityIdentifier:(id)arg2 ;
-(id)initWithTextField:(id)arg0 ;
-(void)_clearTextButtonTapped:(id)arg0 ;
-(void)_tap:(id)arg0 ;
-(void)_updateClearButtonVisibility;
-(void)_updatePlaceholderText;
-(void)_voiceSearchAvailabilityDidChange:(id)arg0 ;
-(void)_voiceSearchButtonTapped:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)textFieldDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif