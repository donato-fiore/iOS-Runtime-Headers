// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTPREFERENCECARDOPTIONLISTITEM_H
#define PKPAYMENTPREFERENCECARDOPTIONLISTITEM_H

@class PKPaymentPreferenceCard, PKPaymentPass;


#import "PKPaymentPreferenceOptionListItem.h"

@interface PKPaymentPreferenceCardOptionListItem : PKPaymentPreferenceOptionListItem

@property (readonly, nonatomic) PKPaymentPreferenceCard *cardSectionPreference;
@property (readonly, nonatomic) PKPaymentPass *pass;


-(id)_censoredPANTextForPass:(id)arg0 ;
-(id)_image;
-(id)_secondaryText;
-(id)_text;


@end


#endif