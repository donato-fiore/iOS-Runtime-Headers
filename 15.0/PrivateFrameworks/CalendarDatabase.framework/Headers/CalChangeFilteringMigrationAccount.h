// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALCHANGEFILTERINGMIGRATIONACCOUNT_H
#define CALCHANGEFILTERINGMIGRATIONACCOUNT_H

@class NSString, NSMutableDictionary;
@protocol CalMigrationAccount;

#import <Foundation/Foundation.h>


@interface CalChangeFilteringMigrationAccount : NSObject <CalMigrationAccount>

 {
    NSString *_accountTypeIdentifier;
    NSString *_accountIdentifier;
}


@property (retain, nonatomic) NSString *accountDescription;
@property (readonly, nonatomic) NSObject<CalMigrationAccount> *backingAccount; // ivar: _backingAccount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL dirty;
@property (nonatomic) BOOL enabledForCalendarsDataClass;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *modifiedPropertyValues; // ivar: _modifiedPropertyValues
@property (retain, nonatomic) NSString *parentAccountIdentifier; // ivar: _parentAccountIdentifier
@property (readonly) Class superclass;
@property (nonatomic) BOOL visible;


-(id)accountPropertyForKey:(id)arg0 ;
-(id)accountTypeIdentifier;
-(id)identifier;
-(id)initWithAccountIdentifier:(id)arg0 accountTypeIdentifier:(id)arg1 ;
-(id)initWithBackingAccount:(id)arg0 ;
-(void)setAccountProperty:(id)arg0 forKey:(id)arg1 ;
-(void)setAuthenticationTypeNone;
-(void)setAuthenticationTypeParent;


@end


#endif