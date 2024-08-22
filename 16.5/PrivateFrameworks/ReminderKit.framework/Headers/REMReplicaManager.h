// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMREPLICAMANAGER_H
#define REMREPLICAMANAGER_H

@class NSMutableDictionary, NSMutableOrderedSet;

#import <Foundation/Foundation.h>


@interface REMReplicaManager : NSObject

@property (nonatomic) NSUInteger currentVersion; // ivar: _currentVersion
@property (nonatomic) BOOL exceededMaxSerializedSize; // ivar: _exceededMaxSerializedSize
@property (nonatomic) BOOL isPersistable; // ivar: _isPersistable
@property (nonatomic) os_unfair_lock_s ivarLock; // ivar: _ivarLock
@property (nonatomic) NSUInteger maxLastSavedVersion; // ivar: _maxLastSavedVersion
@property (retain, nonatomic) NSMutableDictionary *replicaEntries; // ivar: _replicaEntries
@property (retain, nonatomic) NSMutableOrderedSet *replicaUUIDs; // ivar: _replicaUUIDs


+(BOOL)disablesInMemoryOnlyCheck;
+(BOOL)shouldUseNewInMemoryOnlyReplicaManager;
+(BOOL)supportsSecureCoding;
+(id)replicaManagerForAccountID:(id)arg0 store:(id)arg1 ;
+(id)replicaManagerIfLoadedForAccountID:(id)arg0 ;
+(id)replicaManagerWithSerializedData:(id)arg0 error:(*id)arg1 ;
+(id)unsavedReplicaManagersForAccountIDs:(id)arg0 ;
+(void)setDisablesInMemoryOnlyCheck:(BOOL)arg0 ;
+(void)setReplicaManager:(id)arg0 forAccountID:(id)arg1 ;
-(BOOL)hasEqualPersistedEntriesAs:(id)arg0 ;
-(BOOL)hasUnsavedChanges;
-(BOOL)l_updateVersionOfEntry:(id)arg0 forClient:(id)arg1 ;
-(NSUInteger)replicaEntryCount;
-(id)availabilityOfFirstReplicaForCRDTID:(id)arg0 ;
-(id)checkoutReplicaUUIDForClient:(id)arg0 ;
-(id)clockOfFirstReplicaForCRDTID:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithArchive:(*void)arg0 error:(*id)arg1 ;
-(id)l_checkoutReplicaUUIDForClient:(id)arg0 ;
-(id)l_replicaEntriesDescriptionForPersistence:(BOOL)arg0 ;
-(id)l_serializedDataWithError:(*id)arg0 ;
-(id)persistenceDescription;
-(id)serializedDataCappedAtMaxSize:(BOOL)arg0 error:(*id)arg1 ;
-(void)addRandomReplicaEntriesWithCount:(NSInteger)arg0 ;
-(void)commonInit;
-(void)didSaveVersion:(NSUInteger)arg0 ;
-(void)encodeIntoArchive:(*void)arg0 ;
-(void)modifyReplicaEntryForClient:(id)arg0 block:(id)arg1 ;
-(void)performLocked:(id)arg0 ;
-(void)returnReplicaForClient:(id)arg0 ;
-(void)updateVersionForClient:(id)arg0 ;


@end


#endif