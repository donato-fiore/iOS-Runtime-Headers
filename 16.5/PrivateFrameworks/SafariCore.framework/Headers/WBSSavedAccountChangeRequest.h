// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSSAVEDACCOUNTCHANGEREQUEST_H
#define WBSSAVEDACCOUNTCHANGEREQUEST_H

@class NSString, NSMutableArray, NSArray;

#import <Foundation/Foundation.h>

#import "WBSSavedAccount.h"
#import "WBSTOTPGenerator.h"

@interface WBSSavedAccountChangeRequest : NSObject

@property (readonly, nonatomic) BOOL hasChanges;
@property (readonly, nonatomic) BOOL hasNotesEntryChange;
@property (readonly, nonatomic) BOOL hasPasswordChange;
@property (readonly, nonatomic) BOOL hasTOTPGeneratorChange;
@property (readonly, nonatomic) BOOL hasUserChange;
@property (readonly, nonatomic) BOOL isAddingPasswordToAccountWithPasskey;
@property (copy, nonatomic) NSString *notesEntry; // ivar: _notesEntry
@property (copy, nonatomic) NSString *password; // ivar: _password
@property (retain, nonatomic) WBSSavedAccount *savedAccount; // ivar: _savedAccount
@property (retain, nonatomic) NSMutableArray *sites; // ivar: _sites
@property (retain, nonatomic) WBSTOTPGenerator *totpGenerator; // ivar: _totpGenerator
@property (copy, nonatomic) NSString *user; // ivar: _user
@property (readonly, nonatomic) NSArray *userVisibleSites;


-(BOOL)hasSitesChange;


@end


#endif