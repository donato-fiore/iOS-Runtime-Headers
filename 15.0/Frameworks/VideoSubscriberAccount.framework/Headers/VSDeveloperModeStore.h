// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSDEVELOPERMODESTORE_H
#define VSDEVELOPERMODESTORE_H

@class NSString;
@protocol VSRemoteNotifierDelegate, VSDeveloperServiceProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VSRemoteNotifier.h"
#import "VSPersistentContainer.h"

@interface VSDeveloperModeStore : NSObject <VSRemoteNotifierDelegate, VSDeveloperServiceProtocol>



@property (retain, nonatomic) VSRemoteNotifier *accountStoreChangeRemoteNotifier; // ivar: _accountStoreChangeRemoteNotifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VSPersistentContainer *persistentContainer; // ivar: _persistentContainer
@property (retain, nonatomic) VSRemoteNotifier *providersChangeRemoteNotifier; // ivar: _providersChangeRemoteNotifier
@property (retain, nonatomic) VSRemoteNotifier *serviceChangeRemoteNotifier; // ivar: _serviceChangeRemoteNotifier
@property (retain, nonatomic) VSRemoteNotifier *settingsChangeRemoteNotifier; // ivar: _settingsChangeRemoteNotifier
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *settingsQueue; // ivar: _settingsQueue
@property (readonly) Class superclass;


-(id)_developerIdentityProviderInContext:(id)arg0 ;
-(id)_identityProviderFetchRequest;
-(id)_nullableObjectOrNSNull:(id)arg0 ;
-(id)init;
-(id)legacySettingsPropertiesPath;
-(id)settingsPropertiesURL;
-(void)_noteProvidersDidChange;
-(void)_noteServiceDidChange;
-(void)_noteSettingsDidChange;
-(void)_performIdentityProviderBlock:(id)arg0 ;
-(void)addDeveloperIdentityProvider:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchDeveloperIdentityProvidersWithCompletionHandler:(id)arg0 ;
-(void)fetchDeveloperSettingsWithCompletionHandler:(id)arg0 ;
-(void)migrateSettingsPropertyFileIfNecessary;
-(void)removeDeveloperIdentityProviderWithUniqueID:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateDeveloperSettings:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateExistingDeveloperIdentityProvider:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif