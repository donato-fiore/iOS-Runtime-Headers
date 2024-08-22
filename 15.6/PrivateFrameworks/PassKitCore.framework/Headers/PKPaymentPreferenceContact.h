// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTPREFERENCECONTACT_H
#define PKPAYMENTPREFERENCECONTACT_H

@class NSString, NSOrderedSet;


#import "PKPaymentPreference.h"
#import "PKPaymentOptionsRecents.h"

@interface PKPaymentPreferenceContact : PKPaymentPreference

@property (copy, nonatomic) NSString *addExistingTitle; // ivar: _addExistingTitle
@property (copy, nonatomic) NSString *addNewTitle; // ivar: _addNewTitle
@property (copy, nonatomic) NSString *contactKey;
@property (copy, nonatomic) NSOrderedSet *contactKeys; // ivar: _contactKeys
@property (copy, nonatomic) NSString *editExistingTitle; // ivar: _editExistingTitle
@property (retain, nonatomic) PKPaymentOptionsRecents *paymentOptionsRecents;
@property (nonatomic) BOOL showPhoneticName; // ivar: _showPhoneticName
@property (nonatomic) NSUInteger type; // ivar: _type


-(BOOL)preferenceObject:(id)arg0 representsContact:(id)arg1 ;
-(BOOL)supportsDeletion;
-(NSInteger)indexOfContact:(id)arg0 ;
-(id)_removeDuplicateContacts:(id)arg0 ;
-(id)errorsForPreference:(id)arg0 ;
-(id)initWithTitle:(id)arg0 preferences:(id)arg1 selectedIndex:(NSUInteger)arg2 readOnly:(BOOL)arg3 ;
-(void)_mergeContacts:(id)arg0 ;
-(void)_updateSelectedIndex;
-(void)mergeRecentsAndMeCard;
-(void)setErrors:(id)arg0 forPreference:(id)arg1 ;


@end


#endif