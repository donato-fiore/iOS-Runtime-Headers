// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDPROFILETABLEVIEWCELL_H
#define WDPROFILETABLEVIEWCELL_H

@class UITableViewCell, UIButton, UIColor, NSLayoutConstraint, NSArray, NSString, UILabel, UITextField, UIView;
@protocol UITextFieldDelegate;



@interface WDProfileTableViewCell : UITableViewCell <UITextFieldDelegate>

 {
    UIButton *_clearButton;
    UIColor *_normalDisplayValueColor;
    UIColor *_selectedDisplayValueColor;
    NSLayoutConstraint *_displayValueTrailingConstraint;
    NSLayoutConstraint *_clearButtonWidthAnchor;
    NSLayoutConstraint *_displayValueLeadingAnchor;
    NSArray *_normalSizeConstraints;
    NSArray *_accessibilitySizeConstraints;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) UILabel *displayNameLabel; // ivar: _displayNameLabel
@property (copy, nonatomic) NSString *displayValue; // ivar: _displayValue
@property (retain, nonatomic) UITextField *displayValueTextField; // ivar: _displayValueTextField
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *inputAccessoryView; // ivar: _inputAccessoryView
@property (retain, nonatomic) UIView *inputView; // ivar: _inputView
@property (copy, nonatomic) NSString *placeholderValue; // ivar: _placeholderValue
@property (nonatomic) BOOL shouldDisplayClearButtonDuringEditing; // ivar: _shouldDisplayClearButtonDuringEditing
@property (nonatomic) BOOL shouldUseSelectedColorForDisplayValue; // ivar: _shouldUseSelectedColorForDisplayValue
@property (readonly) Class superclass;


+(CGFloat)editingTrailingEdgeMargin;
+(CGFloat)notEditingTrailingEdgeMargin;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)textFieldShouldBeginEditing:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setupAccessibilitySizeConstraintsWithTrailingConstant:(CGFloat)arg0 ;
-(void)_setupConstraints;
-(void)_setupConstraintsForContentSize;
-(void)_setupNonAccessibilitySizeConstraints;
-(void)_setupUI;
-(void)_updateClearButtonState;
-(void)_updateForCurrentSizeCategory;
-(void)addClearButtonTarget:(id)arg0 action:(SEL)arg1 ;
-(void)removeClearButtonTarget:(id)arg0 action:(SEL)arg1 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif