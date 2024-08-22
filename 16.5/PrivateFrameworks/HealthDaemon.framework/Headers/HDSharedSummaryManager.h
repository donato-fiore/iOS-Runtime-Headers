// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSHAREDSUMMARYMANAGER_H
#define HDSHAREDSUMMARYMANAGER_H

@class NSString, HKSynchronousObserverSet;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDSharedSummaryManager : NSObject {
    HDProfile *_profile;
    NSString *_deviceIdentifier;
    HKSynchronousObserverSet *_observers;
}




-(BOOL)addMetadata:(id)arg0 transactionEntity:(id)arg1 error:(*id)arg2 ;
-(BOOL)addOrReuseReceivedSharedSummaries:(id)arg0 transactionEntity:(id)arg1 error:(*id)arg2 ;
-(BOOL)addSharedSummaries:(id)arg0 transactionEntity:(id)arg1 error:(*id)arg2 ;
-(BOOL)deleteAllTransactionsWithError:(*id)arg0 ;
-(BOOL)discardTransactionEntity:(id)arg0 error:(*id)arg1 ;
-(BOOL)enumerateCommittedTransactionsWithError:(*id)arg0 handler:(id)arg1 ;
-(BOOL)enumerateNonCommittedTransactionsWithError:(*id)arg0 handler:(id)arg1 ;
-(BOOL)enumerateSummariesInTransaction:(id)arg0 package:(id)arg1 error:(*id)arg2 handler:(id)arg3 ;
-(BOOL)enumerateSummariesInTransactionEntity:(id)arg0 package:(id)arg1 names:(id)arg2 error:(*id)arg3 handler:(id)arg4 ;
-(BOOL)removeSummariesWithPackage:(id)arg0 names:(id)arg1 transactionEntity:(id)arg2 error:(*id)arg3 ;
-(BOOL)removeSummariesWithUUIDs:(id)arg0 transactionEntity:(id)arg1 error:(*id)arg2 ;
-(BOOL)reuseSharedSummariesWithPackage:(id)arg0 names:(id)arg1 transactionEntity:(id)arg2 error:(*id)arg3 ;
-(BOOL)reuseSharedSummariesWithUUIDs:(id)arg0 transactionEntity:(id)arg1 error:(*id)arg2 ;
-(id)commitTransactionEntity:(id)arg0 error:(*id)arg1 ;
-(id)createNewTransactionWithUUID:(id)arg0 error:(*id)arg1 ;
-(id)createReceivedTransactionWithUUID:(id)arg0 sourceDeviceIdentifier:(id)arg1 metadata:(id)arg2 error:(*id)arg3 ;
-(id)deviceIdentifierWithError:(*id)arg0 ;
-(id)initWithProfile:(id)arg0 ;
-(id)mostRecentTransactionCreationDateWithError:(*id)arg0 ;
-(id)uncommittedTransactionWithUUID:(id)arg0 error:(*id)arg1 ;
-(id)unitTest_transactionForEntity:(id)arg0 databaseTransaction:(id)arg1 error:(*id)arg2 ;
-(void)registerObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif