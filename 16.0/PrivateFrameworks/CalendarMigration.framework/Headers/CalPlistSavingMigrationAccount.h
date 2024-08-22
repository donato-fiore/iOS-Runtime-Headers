// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALPLISTSAVINGMIGRATIONACCOUNT_H
#define CALPLISTSAVINGMIGRATIONACCOUNT_H

@class NSString, NSMutableDictionary;
@protocol CalMigrationAccount, CalMigrationReadOnlyAccount;

#import <Foundation/Foundation.h>


@interface CalPlistSavingMigrationAccount : NSObject <CalMigrationAccount>

 {
    NSString *_accountTypeIdentifier;
}


@property (retain, nonatomic) NSString *accountDescription;
@property (nonatomic) BOOL authenticated;
@property (readonly, nonatomic) NSObject<CalMigrationReadOnlyAccount> *backingAccount; // ivar: _backingAccount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL dirty;
@property (nonatomic) BOOL enabledForCalendarsDataClass;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSMutableDictionary *modifiedProperties; // ivar: _modifiedProperties
@property (retain, nonatomic) NSString *parentAccountIdentifier; // ivar: _parentAccountIdentifier
@property (nonatomic) BOOL provisionedForCalendarsDataClass;
@property (readonly, nonatomic) NSMutableDictionary *savedProperties; // ivar: _savedProperties
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) BOOL visible;


-(id)accountPropertyForKey:(id)arg0 ;
-(id)accountTypeIdentifier;
-(id)initWithIdentifier:(id)arg0 accountTypeIdentifier:(id)arg1 backingAccount:(id)arg2 initialProperties:(id)arg3 ;
-(void)save;
-(void)setAccountProperty:(id)arg0 forKey:(id)arg1 ;
-(void)setAuthenticationTypeNone;
-(void)setAuthenticationTypeParent;
-(void)setPassword:(id)arg0 ;


@end


#endif