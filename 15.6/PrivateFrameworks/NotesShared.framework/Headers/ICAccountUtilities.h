// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICACCOUNTUTILITIES_H
#define ICACCOUNTUTILITIES_H

@class NSMutableDictionary, ACAccountStore, NSDictionary, NSString, ACAccount;
@protocol ICStateHandlerProvider;

#import <Foundation/Foundation.h>


@interface ICAccountUtilities : NSObject <ICStateHandlerProvider>



@property (retain, nonatomic) NSMutableDictionary *accountIsManagedByIdentifier; // ivar: _accountIsManagedByIdentifier
@property (retain, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (copy, nonatomic) NSDictionary *currentICloudAccountState; // ivar: _currentICloudAccountState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL didChooseToMigratePrimaryICloudAccount;
@property (readonly) NSUInteger hash;
@property (readonly) ACAccount *primaryICloudACAccount; // ivar: _primaryICloudACAccount
@property (nonatomic, getter=isPrimaryICloudACAccountValid) BOOL primaryICloudACAccountValid; // ivar: _primaryICloudACAccountValid
@property (readonly, nonatomic) BOOL primaryICloudAccountEnabled;
@property (readonly) Class superclass;


+(id)sharedInstance;
+(void)registerStateHandler;
-(BOOL)isManagedACAccountWithIdentifer:(id)arg0 ;
-(id)allICloudACAccounts;
-(id)applicationDataContainerURLForAccountIdentifier:(id)arg0 ;
-(id)applicationDocumentsURLForAccountIdentifier:(id)arg0 ;
-(id)iCloudACAccountWithIdentifier:(id)arg0 ;
-(id)init;
-(id)initForObservingAccountStoreChanges:(BOOL)arg0 ;
-(id)temporaryDirectoryURLForAccountIdentifier:(id)arg0 ;
-(void)accountStoreDidChange:(id)arg0 ;
-(void)createDirectoryIfNecessaryUsingURL:(id)arg0 ;
-(void)dealloc;
-(void)internalInvalidatePrimaryICloudACAccount;
-(void)invalidatePrimaryICloudACAccount;
// -(void)performBlockInPersonaContextIfNecessary:(id)arg0 forAccountIdentifier:(unk)arg1  ;
-(void)updateICloudACAccountFromStore;


@end


#endif