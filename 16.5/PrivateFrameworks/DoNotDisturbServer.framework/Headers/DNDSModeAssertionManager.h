// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSMODEASSERTIONMANAGER_H
#define DNDSMODEASSERTIONMANAGER_H

@class NSString;
@protocol DNDSBackingStoreDelegate, DNDSSysdiagnoseDataProvider, DNDSModeAssertionQuerying, DNDSModeAssertionUpdating, DNDSBackingStore, OS_os_transaction;

#import <Foundation/Foundation.h>

#import "DNDSModeAssertionStore.h"
#import "DNDSClientDetailsProvider.h"

@interface DNDSModeAssertionManager : NSObject <DNDSBackingStoreDelegate, DNDSSysdiagnoseDataProvider, DNDSModeAssertionQuerying, DNDSModeAssertionUpdating>

 {
    id<DNDSBackingStore> *_backingStore;
    DNDSModeAssertionStore *_store;
    DNDSClientDetailsProvider *_clientDetailsProvider;
    os_unfair_lock_s _storeLock;
    NSObject<OS_os_transaction> *_nonPersistentAssertionTransaction;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;


-(BOOL)_saveDataToBackingStoreWithError:(*id)arg0 ;
-(id)backingStore:(id)arg0 migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(NSUInteger)arg2 toVersionNumber:(NSUInteger)arg3 ;
-(id)clientDetailsForClientIdentifier:(id)arg0 ;
-(id)initWithBackingStore:(id)arg0 clientDetailsProvider:(id)arg1 ;
-(id)initWithBackingStoreURL:(id)arg0 clientDetailsProvider:(id)arg1 ;
-(id)modeAssertionInvalidationsMatchingPredicate:(id)arg0 ;
-(id)modeAssertionsMatchingPredicate:(id)arg0 ;
-(id)sysdiagnoseDataForDate:(id)arg0 redacted:(BOOL)arg1 ;
// -(id)updateModeAssertionsWithContextHandler:(id)arg0 error:(unk)arg1  ;
-(void)_loadDataFromBackingStore;
-(void)_resolveTransactionForModeAssertionStore;
-(void)dealloc;


@end


#endif