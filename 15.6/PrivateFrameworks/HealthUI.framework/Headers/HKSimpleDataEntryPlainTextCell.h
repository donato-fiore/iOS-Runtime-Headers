// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSIMPLEDATAENTRYPLAINTEXTCELL_H
#define HKSIMPLEDATAENTRYPLAINTEXTCELL_H

@class UIView, NSNumber, NSArray, NSString, UILabel;
@protocol UITextFieldDelegate, HKSimpleDataEntryCellDelegate;


#import "HKSimpleDataEntryCell.h"
#import "HKCaretOptionalTextField.h"

@interface HKSimpleDataEntryPlainTextCell : HKSimpleDataEntryCell <UITextFieldDelegate>

 {
    UIView *_horizontalSeparator;
    NSNumber *_characterCountLimit;
    BOOL _editDisabled;
    NSArray *_regularConstraints;
    NSArray *_largeTextConstraints;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HKSimpleDataEntryCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKCaretOptionalTextField *inputTextField; // ivar: _inputTextField
@property (retain, nonatomic) NSString *lastChangedText; // ivar: _lastChangedText
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(BOOL)editDisabled;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg0 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)initWithIntention:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_informDelegateForContentChange;
-(void)_setupInputTextFieldWithIntention:(NSInteger)arg0 ;
-(void)_setupLabels;
-(void)_setupLayoutConstraints;
-(void)_updateForCurrentSizeCategory;
-(void)beginEditing;
-(void)layoutMarginsDidChange;
-(void)setEditDisabled:(BOOL)arg0 ;
-(void)textFieldDidChangeValue:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif