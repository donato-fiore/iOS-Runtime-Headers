// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAINHERITANCECONTACTSVIEWMODEL_H
#define AAINHERITANCECONTACTSVIEWMODEL_H


#import <Foundation/Foundation.h>

#import "AAInheritanceController.h"
#import "AAContactsManager.h"

@interface AAInheritanceContactsViewModel : NSObject {
    AAInheritanceController *_inheritanceController;
    AAContactsManager *_contactsManager;
}




-(id)_localBenefactors:(id)arg0 ;
-(id)_localBeneficiaries:(id)arg0 invitationStatuses:(id)arg1 ;
-(id)_localContact:(id)arg0 ;
-(id)init;
-(void)_fetchInvitationStatuses:(id)arg0 ;
-(void)_fetchInvitations:(id)arg0 ;
-(void)fetchBenefactors:(id)arg0 ;
-(void)fetchBeneficiaries:(id)arg0 ;
-(void)fetchSuggestedBeneficiaries:(id)arg0 ;


@end


#endif