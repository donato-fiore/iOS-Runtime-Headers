// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STMANAGECONTACTSGROUPSPECIFIERPROVIDER_H
#define STMANAGECONTACTSGROUPSPECIFIERPROVIDER_H

@class PSSpecifier;


#import "STRootGroupSpecifierProvider.h"

@interface STManageContactsGroupSpecifierProvider : STRootGroupSpecifierProvider

@property (retain) PSSpecifier *manageContactsRequestSpecifier; // ivar: _manageContactsRequestSpecifier


-(id)init;
-(void)_communicationLimitsDidChange:(id)arg0 ;
-(void)_showManageContactsRequestAlert:(id)arg0 ;
-(void)_updateContactManagementState:(NSInteger)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setCoordinator:(id)arg0 ;


@end


#endif