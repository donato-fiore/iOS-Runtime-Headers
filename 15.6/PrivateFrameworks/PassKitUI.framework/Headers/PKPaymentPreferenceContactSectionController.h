// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTPREFERENCECONTACTSECTIONCONTROLLER_H
#define PKPAYMENTPREFERENCECONTACTSECTIONCONTROLLER_H

@class PKContactFormatValidator, NSArray, PKPaymentPreferenceContact;
@protocol PKPaymentPreferenceContactSectionControllerDelegate;


#import "PKPaymentPreferenceSectionController.h"

@interface PKPaymentPreferenceContactSectionController : PKPaymentPreferenceSectionController {
    PKContactFormatValidator *_contactFormatValidator;
}


@property (weak, nonatomic) NSObject<PKPaymentPreferenceContactSectionControllerDelegate> *contactDelegate; // ivar: _contactDelegate
@property (readonly, nonatomic) NSArray *contactItems;
@property (readonly, nonatomic) PKPaymentPreferenceContact *contactPreference;


-(BOOL)_saveUpdatedContact:(id)arg0 contactKey:(id)arg1 preference:(id)arg2 atIndex:(NSInteger)arg3 ;
-(BOOL)editedTextFieldHasError:(id)arg0 ;
-(id)addPreferenceItems;
-(id)appendNewSubPreference;
-(id)initWithContactPreference:(id)arg0 contactFormatValidator:(id)arg1 style:(NSInteger)arg2 preferencesChangedHandler:(id)arg3 ;
-(id)newOptionItemForSubPreference:(id)arg0 hasErrorHandler:(id)arg1 ;
-(void)deleteItem:(id)arg0 forRow:(NSUInteger)arg1 ;
-(void)editItem:(id)arg0 forRow:(NSUInteger)arg1 ;
-(void)saveContact:(id)arg0 forItem:(id)arg1 withContactKey:(id)arg2 completion:(id)arg3 ;


@end


#endif