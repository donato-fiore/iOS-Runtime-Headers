// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTIGNOREDONATEDINFORMATIONACTION_H
#define CNCONTACTIGNOREDONATEDINFORMATIONACTION_H

@class CNDonationStore;


#import "CNContactAction.h"
#import "CNUIExternalComponentsFactory.h"

@interface CNContactIgnoreDonatedInformationAction : CNContactAction

@property (readonly, nonatomic) CNUIExternalComponentsFactory *componentsFactory; // ivar: _componentsFactory
@property (readonly, nonatomic) CNDonationStore *donationStore; // ivar: _donationStore


-(BOOL)rejectAllDonations;
-(id)initWithContact:(id)arg0 ;
-(id)initWithContact:(id)arg0 donationStore:(id)arg1 componentsFactory:(id)arg2 ;
-(void)performActionWithSender:(id)arg0 ;
-(void)showRejectionFailureAlert;


@end


#endif