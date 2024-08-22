// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSSAVEDPASSWORDAUDITOR_H
#define WBSSAVEDPASSWORDAUDITOR_H


#import <Foundation/Foundation.h>

#import "WBSAutoFillQuirksManager.h"
#import "WBSSavedPasswordStore.h"

@interface WBSSavedPasswordAuditor : NSObject

@property (readonly, nonatomic) WBSAutoFillQuirksManager *autoFillQuirksManager; // ivar: _autoFillQuirksManager
@property (readonly, nonatomic) BOOL passwordStoreHasDuplicatedPasswords;
@property (readonly, nonatomic) WBSSavedPasswordStore *savedPasswordStore; // ivar: _savedPasswordStore


-(BOOL)_passwordIsReused:(id)arg0 byOtherSavedPassword:(id)arg1 ;
-(BOOL)_savedPasswordQualifiesForReuseAuditing:(id)arg0 ;
-(BOOL)savedPasswordIsReused:(id)arg0 ;
-(id)duplicatePasswordsInPasswords:(id)arg0 ;
-(id)init;
-(id)initWithSavedPasswordStore:(id)arg0 autoFillQuirksManager:(id)arg1 ;
-(id)savedPasswordsWithDuplicatedPassword:(id)arg0 ;


@end


#endif