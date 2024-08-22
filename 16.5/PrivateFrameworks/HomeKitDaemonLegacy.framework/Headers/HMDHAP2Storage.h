// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHAP2STORAGE_H
#define HMDHAP2STORAGE_H

@class HAPSystemKeychainStore, NSMutableSet, NSString;
@protocol HAP2Storage, OS_dispatch_queue, HAP2StorageDelegate;

#import <Foundation/Foundation.h>

#import "HMDAccessoryBrowser.h"

@interface HMDHAP2Storage : NSObject <HAP2Storage>

 {
    NSObject<OS_dispatch_queue> *_workQueue;
    HAPSystemKeychainStore *_storage;
    NSMutableSet *_registeredIdentifiers;
    HMDAccessoryBrowser *_accessoryBrowser;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HAP2StorageDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAccessoryBrowser:(id)arg0 ;
-(void)_removeKeysForIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)deregisterPairedAccessoryWithIdentifier:(id)arg0 ;
-(void)fetchCacheForIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)fetchControllerKeyForDeviceId:(id)arg0 completion:(id)arg1 ;
-(void)fetchKeysForIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)hasKeysForIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)registerPairedAccessoryWithIdentifier:(id)arg0 ;
-(void)removeCacheForIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)removeControllerKeyWithCompletion:(id)arg0 ;
-(void)removeKeysForIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)resetPairedAccessoryIdentifiers;
-(void)saveCacheForIdentifier:(id)arg0 data:(id)arg1 completion:(id)arg2 ;
-(void)saveControllerIdentity:(id)arg0 completion:(id)arg1 ;
-(void)saveKeysForIdentifiers:(id)arg0 completion:(id)arg1 ;


@end


#endif