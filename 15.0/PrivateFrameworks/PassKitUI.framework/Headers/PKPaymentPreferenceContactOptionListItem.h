// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTPREFERENCECONTACTOPTIONLISTITEM_H
#define PKPAYMENTPREFERENCECONTACTOPTIONLISTITEM_H

@class CNContact, PKPaymentPreferenceContact;


#import "PKPaymentPreferenceOptionListItem.h"

@interface PKPaymentPreferenceContactOptionListItem : PKPaymentPreferenceOptionListItem

@property (readonly, nonatomic) CNContact *contactPreference;
@property (readonly, nonatomic) PKPaymentPreferenceContact *contactSectionPreference;


-(BOOL)_isEmail;
-(BOOL)_isPhoneNumber;
-(BOOL)_isPostalAddress;
-(BOOL)_supportsDeleteAction;
-(BOOL)_supportsEditAction;
-(BOOL)supportsInlineEditing;
-(id)_inlineEditingConfiguration;
-(id)_placeholderText;
-(id)_secondaryText;
-(id)_text;
-(id)defaultAccessories;


@end


#endif