// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSMETRICSDATABASE_H
#define AMSMETRICSDATABASE_H

@class NSString;
@protocol AMSSQLiteConnectionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AMSSQLiteConnection.h"

@interface AMSMetricsDatabase : NSObject <AMSSQLiteConnectionDelegate>



@property (retain, nonatomic) AMSSQLiteConnection *connection; // ivar: _connection
@property (retain, nonatomic) NSString *containerId; // ivar: _containerId
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (readonly) Class superclass;


+(id)sharedDatabaseWithContainerId:(id)arg0 ;
-(BOOL)cleanupInvalidIdentifiersWithError:(*id)arg0 ;
-(BOOL)clearIdentifierSyncStateWithError:(*id)arg0 ;
-(BOOL)connectionNeedsResetForCorruption:(id)arg0 ;
-(BOOL)dropAllEventsWithLockKey:(id)arg0 error:(*id)arg1 ;
-(BOOL)dropEvents:(id)arg0 error:(*id)arg1 ;
// -(BOOL)enumerateUnsyncedIdentifierStoresUsingBlock:(id)arg0 error:(unk)arg1  ;
// -(BOOL)enumerateUnsyncedIdentifiersUsingBlock:(id)arg0 error:(unk)arg1  ;
-(BOOL)insertEvents:(id)arg0 error:(*id)arg1 ;
-(BOOL)permanentlyRemoveIdentifierForKey:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeCrossDeviceIdentifiersWithError:(*id)arg0 ;
-(BOOL)removeIdentifiersForAccount:(id)arg0 error:(*id)arg1 ;
-(BOOL)unlockAllEventsWithKey:(id)arg0 error:(*id)arg1 ;
-(BOOL)unlockEvents:(id)arg0 error:(*id)arg1 ;
-(NSInteger)countAllEventsWithLockKey:(id)arg0 error:(*id)arg1 ;
-(id)_cachePath;
-(id)_lockedById;
// -(id)identifierForKey:(id)arg0 updateMaybe:(id)arg1 error:(unk)arg2  ;
// -(id)identifierStoreForKey:(id)arg0 updateMaybe:(id)arg1 error:(unk)arg2  ;
-(id)initWithContainerId:(id)arg0 ;
-(id)lockAllEventsWithError:(*id)arg0 ;
-(void)_performTransaction:(id)arg0 ;
-(void)close;
-(void)dealloc;
-(void)enumerateEventsWithTopic:(id)arg0 lockKey:(id)arg1 objectBlock:(id)arg2 ;


@end


#endif