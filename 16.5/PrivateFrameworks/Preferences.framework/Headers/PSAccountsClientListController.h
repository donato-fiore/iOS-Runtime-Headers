// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSACCOUNTSCLIENTLISTCONTROLLER_H
#define PSACCOUNTSCLIENTLISTCONTROLLER_H



#import "PSListController.h"
#import "PSSpecifier.h"

@interface PSAccountsClientListController : PSListController {
    BOOL _noAccountsSetUp;
    BOOL _showExtraVC;
    PSSpecifier *_accountSpecifier;
    id *_acObserver;
    int accountUpdateThrottle;
}




-(BOOL)_isAccountModificationDisabledByRestrictions;
-(id)_visibleAccountTypeIDs;
-(id)init;
-(id)requestedAccountDataclass;
-(id)specifierForID:(id)arg0 ;
-(void)dealloc;
-(void)setSpecifiers:(id)arg0 ;
-(void)updateAccountSpecifier;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif