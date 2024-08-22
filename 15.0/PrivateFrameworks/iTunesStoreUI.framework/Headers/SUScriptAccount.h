// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSCRIPTACCOUNT_H
#define SUSCRIPTACCOUNT_H

@class SSAccount, NSString, NSNumber;


#import "SUScriptObject.h"

@interface SUScriptAccount : SUScriptObject {
    SSAccount *_account;
}


@property (readonly) NSString *ITunesPassSerialNumber;
@property (retain) SSAccount *account;
@property (copy) NSString *credits;
@property (retain) NSNumber *dsID;
@property (copy) NSString *identifier;
@property (copy) NSString *kind;
@property (retain) id *lockerEnabled;
@property (readonly, getter=isPrimaryLockerAccount) id *primaryLockerAccount;
@property (retain) id *purchaseHistoryEnabled;
@property (retain) id *socialEnabled;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(BOOL)isManagedAppleID;
-(BOOL)isPrimaryAccount;
-(BOOL)isSecureTokenValid;
-(id)_className;
-(id)attributeKeys;
-(id)init;
-(id)scriptAttributeKeys;
-(void)_commitChanges;
-(void)_setServiceType:(NSInteger)arg0 enabled:(id)arg1 ;
-(void)dealloc;
-(void)setSecureToken:(id)arg0 ;


@end


#endif