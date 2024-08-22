// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AACONTACTSPROVIDER_H
#define AACONTACTSPROVIDER_H


#import <Foundation/Foundation.h>

#import "AACustodianController.h"
#import "AAContactsManager.h"
#import "AAInheritanceContactsViewModel.h"

@interface AAContactsProvider : NSObject {
    AACustodianController *_custodianController;
    AAContactsManager *_contactsManager;
    AAInheritanceContactsViewModel *_inheritanceViewModelProvider;
}




-(id)_localContactForHandle:(id)arg0 ;
-(id)_localContactsForCustodians:(id)arg0 ;
-(id)_localContactsForCustodianshipOwners:(id)arg0 ;
-(id)init;
-(void)fetchCustodiansAndBeneficiaries:(id)arg0 ;
-(void)fetchCustodianshipsAndBenefactors:(id)arg0 ;
-(void)fetchMyBenefactors:(id)arg0 ;
-(void)fetchMyBeneficiaries:(id)arg0 ;
-(void)fetchMyCustodians:(id)arg0 ;
-(void)fetchMyCustodianshipOwners:(id)arg0 ;
-(void)fetchSuggestedBeneficiaries:(id)arg0 ;
-(void)fetchSuggestedCustodians:(id)arg0 ;


@end


#endif