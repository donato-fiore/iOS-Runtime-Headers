// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDMANUALDATAENTRYTABLEVIEWCELL_H
#define WDMANUALDATAENTRYTABLEVIEWCELL_H

@class UITableViewCell, UITextField, UIView, NSString, UILabel, NSArray, NSNumberFormatter, NSLayoutConstraint, UIFont, HKDisplayType;
@protocol UITextFieldDelegate, WDManualDataEntryTableViewCellDelegate;



@interface WDManualDataEntryTableViewCell : UITableViewCell <UITextFieldDelegate>

 {
    NSUInteger _dataEntryType;
    UITextField *_valueField;
    UIView *_inputView;
    NSString *_decimalSeparator;
    UILabel *_displayNameLabel;
    UILabel *_unitLabel;
    NSArray *_displayNameLabelConstraints;
    NSNumberFormatter *_integerNumberFormatter;
    NSString *_lastValidSanitizedText;
    NSArray *_regularLayoutConstraints;
    NSArray *_largeTextLayoutConstraints;
    NSLayoutConstraint *_largeTextValueFieldToUnitLabelSpacingConstraint;
}


@property (retain, nonatomic) UIFont *bodyFont; // ivar: _bodyFont
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WDManualDataEntryTableViewCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) HKDisplayType *displayType; // ivar: _displayType
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldHighlightWhenEditing; // ivar: _shouldHighlightWhenEditing
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *value;


-(BOOL)textFieldShouldBeginEditing:(id)arg0 ;
-(id)_removeDecimalSeparatorsFromText:(id)arg0 ;
-(id)_sanitizedTextFieldText:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDisplayName:(id)arg0 unitName:(id)arg1 dataEntryType:(NSUInteger)arg2 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)inputView;
-(void)_localeDidChange:(id)arg0 ;
-(void)_setupConstraints;
-(void)_setupIntegerNumberFormatterIfNeeded;
-(void)_setupUIWithDisplayName:(id)arg0 unitName:(id)arg1 ;
-(void)_updateDecimalSeparator;
-(void)_updateDisplayNameLabelConstraints;
-(void)_updateFont;
-(void)_updateForCurrentSizeCategory;
-(void)_valueFieldDidChange:(id)arg0 ;
-(void)beginEditing;
-(void)dealloc;
-(void)endEditing;
-(void)setInputView:(id)arg0 ;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif