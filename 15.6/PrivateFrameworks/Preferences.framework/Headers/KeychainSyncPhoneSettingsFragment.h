// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KEYCHAINSYNCPHONESETTINGSFRAGMENT_H
#define KEYCHAINSYNCPHONESETTINGSFRAGMENT_H

@class NSArray, NSString;
@protocol KeychainSyncPhoneSettingsFragmentDelegate;

#import <Foundation/Foundation.h>

#import "PSPhoneNumberSpecifier.h"
#import "PSSpecifier.h"
#import "PSListController.h"
#import "KeychainSyncCountryInfo.h"
#import "PSEditableTableCell.h"

@interface KeychainSyncPhoneSettingsFragment : NSObject {
    NSArray *_specifiers;
    PSPhoneNumberSpecifier *_phoneNumberSpecifier;
    PSSpecifier *_countrySpecifier;
    PSListController *_listController;
}


@property (retain, nonatomic) KeychainSyncCountryInfo *countryInfo; // ivar: _countryInfo
@property (weak, nonatomic) NSObject<KeychainSyncPhoneSettingsFragmentDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (readonly, nonatomic) PSEditableTableCell *phoneNumberCell;
@property (readonly, nonatomic) NSArray *specifiers;
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)dialingCountryInfoForSpecifier:(id)arg0 ;
-(id)initWithListController:(id)arg0 ;
-(id)phoneNumberForSpecifier:(id)arg0 ;
-(id)unformattedPhoneNumber;
-(void)dealloc;
-(void)reloadSpecifiers;
-(void)resignFirstResponder;
-(void)setDialingCountryInfo:(id)arg0 forSpecifier:(id)arg1 ;
-(void)textFieldChanged:(id)arg0 ;


@end


#endif