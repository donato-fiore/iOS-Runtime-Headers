// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTCOREDATASTOREBACKEND_H
#define AVTCOREDATASTOREBACKEND_H

@class NSString;
@protocol AVTStoreBackend, AVTStoreBackendDelegate, AVTCoreDataPersistentStoreConfiguration, AVTUILogger, AVTAvatarRecordChangeTracker, AVTAvatarManagedRecordTransformer, AVTCoreDataRemoteChangesObserver;

#import <Foundation/Foundation.h>


@interface AVTCoreDataStoreBackend : NSObject <AVTStoreBackend>



@property (weak, nonatomic) NSObject<AVTStoreBackendDelegate> *backendDelegate; // ivar: backendDelegate
@property (readonly, nonatomic) NSObject<AVTCoreDataPersistentStoreConfiguration> *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *localProcessName; // ivar: _localProcessName
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (readonly, nonatomic) NSObject<AVTAvatarRecordChangeTracker> *recordChangeTracker; // ivar: _recordChangeTracker
@property (readonly, nonatomic) NSObject<AVTAvatarManagedRecordTransformer> *recordTransformer; // ivar: _recordTransformer
@property (readonly, nonatomic) NSObject<AVTCoreDataRemoteChangesObserver> *remoteChangesObserver; // ivar: _remoteChangesObserver
@property (readonly) Class superclass;


+(BOOL)fetchRequestCriteriaSupported:(NSInteger)arg0 ;
+(id)cdFetchRequestForAvatarFetchRequest:(id)arg0 recordTransformer:(id)arg1 ;
+(id)cdFetchRequestWithPredicate:(id)arg0 fetchLimit:(NSInteger)arg1 ;
-(BOOL)canCreateAvatarWithError:(*id)arg0 ;
-(BOOL)deleteAvatarWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)nts_saveManagedObjectContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveAvatar:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveAvatars:(id)arg0 error:(*id)arg1 ;
-(BOOL)setupStoreIfNeeded:(*id)arg0 ;
-(NSUInteger)nts_avatarCountWithManagedObjectContext:(id)arg0 error:(*id)arg1 ;
-(id)avatarsForFetchRequest:(id)arg0 error:(*id)arg1 ;
-(id)duplicateAvatarRecord:(id)arg0 error:(*id)arg1 ;
-(id)initWithConfiguration:(id)arg0 environment:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 recordTransformer:(id)arg1 remoteChangesObserver:(id)arg2 localProcessName:(id)arg3 recordChangeTracker:(id)arg4 environment:(id)arg5 ;
-(id)newManagedObjectContext;
-(id)recordIdentifiersForManagedObjectIDs:(id)arg0 managedObjectContext:(id)arg1 error:(*id)arg2 ;
-(void)contentDidChangeWithIdentifiers:(id)arg0 ;
-(void)getChangedObjectIDsOfInterest:(*id)arg0 deletedIdentifiers:(*id)arg1 forTransactions:(id)arg2 ;
-(void)performWorkWithManagedObjectContext:(id)arg0 ;
-(void)startObservingChangesIfNeeded;


@end


#endif