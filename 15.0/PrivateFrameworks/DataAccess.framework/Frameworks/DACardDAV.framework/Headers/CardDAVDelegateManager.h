// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CARDDAVDELEGATEMANAGER_H
#define CARDDAVDELEGATEMANAGER_H

@class NSString, ACAccountStore;
@protocol CardDAVDelegateInfoProvider;

#import <Foundation/Foundation.h>

#import "CardDAVLocalDBHelper.h"

@interface CardDAVDelegateManager : NSObject

@property (readonly, nonatomic) NSString *accountID; // ivar: _accountID
@property (readonly, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (readonly, nonatomic) CardDAVLocalDBHelper *databaseHelper; // ivar: _databaseHelper
@property (readonly, nonatomic) NSObject<CardDAVDelegateInfoProvider> *delegateProvider; // ivar: _delegateProvider


+(void)finishFutures:(id)arg0 ;
-(id)account;
-(id)addChildWithDelegateInfo:(id)arg0 ;
-(id)collectDelegateInfoReturningError:(*id)arg0 ;
-(id)existingChildAccountsWithProperty:(id)arg0 ;
-(id)initWithDelegateInfoProvider:(id)arg0 accountID:(id)arg1 databaseHelper:(id)arg2 ;
-(id)removeAccount:(id)arg0 ;
-(id)saveAccount:(id)arg0 ;
-(void)deleteOrphanDatabasesLackingRepresentationInDelegateInfos:(id)arg0 ;
-(void)updateDelegates;


@end


#endif