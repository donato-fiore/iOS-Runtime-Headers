// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKORGANDONATIONADDRESSCELL_H
#define HKORGANDONATIONADDRESSCELL_H

@class UILabel, UIView, UIButton, UITextField, NSString;
@protocol UITextFieldDelegate, HKSimpleDataEntryCellDelegate;


#import "HKSimpleDataEntryCell.h"

@interface HKOrganDonationAddressCell : HKSimpleDataEntryCell <UITextFieldDelegate>

 {
    UILabel *_titleLabel;
    UIView *_addressContainerView;
    UIView *_verticalSeparator;
    UIView *_horizontalSeparator;
    UIView *_stateZipSeparator;
    UIView *_addressSeparator;
    UIView *_citySeparator;
    UIView *_stateSeparator;
    UIButton *_stateShadowButton;
    BOOL _editDisabled;
}


@property (retain, nonatomic) UITextField *cityTextField; // ivar: _cityTextField
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HKSimpleDataEntryCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UITextField *stateTextField; // ivar: _stateTextField
@property (retain, nonatomic) UITextField *streetOneTextField; // ivar: _streetOneTextField
@property (retain, nonatomic) UITextField *streetTwoTextField; // ivar: _streetTwoTextField
@property (readonly) Class superclass;
@property (retain, nonatomic) UITextField *zipCodeTextField; // ivar: _zipCodeTextField


-(BOOL)editDisabled;
-(BOOL)textFieldShouldBeginEditing:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setupFonts;
-(void)_setupLayoutConstraints;
-(void)_stateShadowButtonTapped:(id)arg0 ;
-(void)beginEditing;
-(void)setEditDisabled:(BOOL)arg0 ;
-(void)textFieldDidChangeValue:(id)arg0 ;


@end


#endif