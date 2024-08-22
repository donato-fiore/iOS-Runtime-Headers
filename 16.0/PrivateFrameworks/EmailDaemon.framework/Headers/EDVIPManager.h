// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDVIPMANAGER_H
#define EDVIPMANAGER_H

@class NSMutableDictionary, EAEmailAddressSet, NSSet, CNContactStore, NSString, NSUbiquitousKeyValueStore, NSURL;
@protocol EFLoggable, EMVIPManager, EDAccountsProvider, EDVIPManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface EDVIPManager : NSObject <EFLoggable, EMVIPManager>

 {
    NSMutableDictionary *_vipsByIdentifier;
    EAEmailAddressSet *_cachedEmailAddresses;
    os_unfair_lock_s _initializeLock;
    BOOL _initialized;
}


@property (readonly, nonatomic) NSObject<EDAccountsProvider> *accountsProvider; // ivar: _accountsProvider
@property (readonly, copy, nonatomic) EAEmailAddressSet *allVIPEmailAddresses;
@property (readonly, copy, nonatomic) NSSet *allVIPs;
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<EDVIPManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasVIPs;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSUbiquitousKeyValueStore *keyValueStore; // ivar: _keyValueStore
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // ivar: _notificationQueue
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *operationQueue; // ivar: _operationQueue
@property (readonly, nonatomic) NSURL *plistURL; // ivar: _plistURL
@property (readonly) Class superclass;


+(id)_contactDescriptors;
+(id)log;
-(BOOL)_isVIPForContact:(id)arg0 orAddresses:(id)arg1 ;
-(BOOL)isVIPAddress:(id)arg0 ;
-(id)_cloudKeyForIdentifier:(id)arg0 ;
-(id)_contactForName:(id)arg0 emailAddresses:(id)arg1 ;
-(id)_contactFromContacts:(id)arg0 matchingMostAddresses:(id)arg1 ;
-(id)_serializedData;
-(id)_validatedCloudVIPFromStore:(id)arg0 withCloudKey:(id)arg1 ;
-(id)_vipsDictionary;
-(id)allVIPWaitForResult;
-(id)initWithDirectoryURL:(id)arg0 accountsProvider:(id)arg1 delegate:(id)arg2 ;
-(id)initWithDirectoryURL:(id)arg0 keyValueStore:(id)arg1 accountsProvider:(id)arg2 contactStore:(id)arg3 delegate:(id)arg4 ;
-(id)vipWithIdentifier:(id)arg0 ;
-(void)_accountsChanged:(id)arg0 ;
-(void)_initializeKVSStore;
-(void)_keyValueStoreChanged:(id)arg0 ;
-(void)_loadVIPs;
-(void)_mergeVIPs;
-(void)_removeVIPsWithIdentifiers:(id)arg0 ;
-(void)_saveVIPs;
-(void)_saveVIPsLocally;
-(void)_synchronizeKVStore;
-(void)_updateCloudWithLocal;
-(void)_updateLocalWithCloud:(id)arg0 refresh:(BOOL)arg1 ;
-(void)dealloc;
-(void)gatherStatisticsWithVIPCount:(NSUInteger)arg0 ;
-(void)getAllVIPsWithCompletion:(id)arg0 ;
-(void)removeVIPsWithEmailAddresses:(id)arg0 ;
-(void)removeVIPsWithIdentifiers:(id)arg0 ;
-(void)saveVIPs:(id)arg0 ;


@end


#endif