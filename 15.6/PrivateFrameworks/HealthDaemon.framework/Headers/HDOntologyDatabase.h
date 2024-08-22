// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDONTOLOGYDATABASE_H
#define HDONTOLOGYDATABASE_H

@class HKObserverSet, NSString;
@protocol HDOntologyBackingStoreObserver;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDOntologyBackingStore.h"

@interface HDOntologyDatabase : NSObject <HDOntologyBackingStoreObserver>

 {
    os_unfair_lock_s _lock;
    HKObserverSet *_databaseAvailableObservers;
    HKObserverSet *_importObservers;
}


@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly) Class superclass;
@property (retain, nonatomic) HDOntologyBackingStore *unitTesting_ontologyBackingStore; // ivar: _unitTesting_ontologyBackingStore


+(id)ontologyContentVersionWithGraphDatabase:(id)arg0 error:(*id)arg1 ;
+(id)ontologyContentVersionWithTransaction:(id)arg0 error:(*id)arg1 ;
-(BOOL)performTransactionWithDatabaseTransaction:(id)arg0 error:(*id)arg1 transactionHandler:(id)arg2 ;
-(BOOL)performTransactionWithError:(*id)arg0 transactionHandler:(id)arg1 ;
-(BOOL)unitTesting_performWriteTransactionWithError:(*id)arg0 transactionHandler:(id)arg1 ;
-(BOOL)unitTesting_setContentVersion:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithProfile:(id)arg0 ;
-(id)ontologyContentVersionWithError:(*id)arg0 ;
-(id)unitTesting_schemaVersionWithError:(*id)arg0 ;
-(void)addOntologyDatabaseAvailabilityObserver:(id)arg0 ;
-(void)addOntologyImportStatusObserver:(id)arg0 ;
-(void)invalidateAndWait;
-(void)ontologyBackingStore:(id)arg0 didBecomeAvailable:(BOOL)arg1 ;
-(void)ontologyBackingStore:(id)arg0 didFinishImportWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)ontologyBackingStoreWillImport:(id)arg0 ;
-(void)removeOntologyDatabaseAvailabilityObserver:(id)arg0 ;
-(void)removeOntologyImportStatusObserver:(id)arg0 ;
-(void)unitTesting_close;


@end


#endif