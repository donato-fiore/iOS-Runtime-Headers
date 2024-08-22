// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AIAUDIOGRAMRESULTEARCELL_H
#define AIAUDIOGRAMRESULTEARCELL_H

@class UITableViewCell, NSString, NSNumber, UIStackView, UILabel, UITextField;
@protocol UITextFieldDelegate, AIAudiogramResultEarCellDelegate;



@interface AIAudiogramResultEarCell : UITableViewCell <UITextFieldDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AIAudiogramResultEarCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger ear; // ivar: _ear
@property (retain, nonatomic) NSNumber *frequency; // ivar: _frequency
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *hearingLevel; // ivar: _hearingLevel
@property (retain, nonatomic) UIStackView *labelStackView; // ivar: _labelStackView
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) UITextField *valueTextField; // ivar: _valueTextField
@property (retain, nonatomic) UILabel *valueUnitLabel; // ivar: _valueUnitLabel
@property (retain, nonatomic) UIStackView *verticalStackView; // ivar: _verticalStackView


+(id)reuseIdentifier;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(id)accessibilityLabel;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_textFieldEditingChanged:(id)arg0 ;
-(void)configureLayout;
-(void)setKeyboardToolbar:(id)arg0 ;
-(void)showActive:(BOOL)arg0 ;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;


@end


#endif