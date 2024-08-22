// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMCSPECIFIERPROVIDER_H
#define DMCSPECIFIERPROVIDER_H

@class AIDAAccountManager, NSString, ACAccount, NSArray;
@protocol AAUISpecifierProvider, AAUISpecifierProviderDelegate;

#import <Foundation/Foundation.h>


@interface DMCSpecifierProvider : NSObject <AAUISpecifierProvider>



@property (readonly, nonatomic) AIDAAccountManager *accountManager; // ivar: _accountManager
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUISpecifierProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isReloading; // ivar: _isReloading
@property (readonly, nonatomic) ACAccount *rmAccount; // ivar: _rmAccount
@property (copy, nonatomic) NSArray *specifiers; // ivar: _specifiers
@property (readonly) Class superclass;


-(id)_cellForSpecifier:(id)arg0 inTableView:(id)arg1 ;
-(id)cachedSpecifiers:(id)arg0 ;
-(id)initWithAccount:(id)arg0 reloadNotification:(id)arg1 reloadIfMissingRMAccount:(BOOL)arg2 ;
-(id)initWithAccountManager:(id)arg0 ;
-(id)initWithAccountManager:(id)arg0 reloadNotification:(id)arg1 reloadIfMissingRMAccount:(BOOL)arg2 ;
-(id)tableCellsForSpecifiersInTableView:(id)arg0 ;
-(void)_listenForNotification:(id)arg0 ;
-(void)dealloc;
-(void)registerSpecifierBridgeForTableView:(id)arg0 ;
-(void)reloadNotificationPosted:(id)arg0 ;
-(void)reloadSpecifiers;


@end


#endif