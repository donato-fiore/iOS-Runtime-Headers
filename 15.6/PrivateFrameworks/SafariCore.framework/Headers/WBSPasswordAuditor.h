// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSPASSWORDAUDITOR_H
#define WBSPASSWORDAUDITOR_H


#import <Foundation/Foundation.h>

#import "WBSAutoFillQuirksManager.h"
#import "WBSSavedAccountStore.h"

@interface WBSPasswordAuditor : NSObject

@property (readonly, nonatomic) BOOL accountStoreHasDuplicatedPasswords;
@property (readonly, nonatomic) WBSAutoFillQuirksManager *autoFillQuirksManager; // ivar: _autoFillQuirksManager
@property (readonly, nonatomic) WBSSavedAccountStore *savedAccountStore; // ivar: _savedAccountStore


-(BOOL)_passwordIsReused:(id)arg0 byOtherSavedAccount:(id)arg1 ;
-(BOOL)_savedAccountQualifiesForReuseAuditing:(id)arg0 ;
-(BOOL)savedAccountIsReused:(id)arg0 ;
-(id)duplicatePasswordsInPasswords:(id)arg0 ;
-(id)init;
-(id)initWithSavedAccountStore:(id)arg0 autoFillQuirksManager:(id)arg1 ;
-(id)savedAccountsWithDuplicatedPassword:(id)arg0 ;


@end


#endif