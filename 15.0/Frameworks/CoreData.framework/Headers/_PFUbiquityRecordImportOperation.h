// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PFUBIQUITYRECORDIMPORTOPERATION_H
#define _PFUBIQUITYRECORDIMPORTOPERATION_H

@class NSMutableSet, NSMutableDictionary, NSError, NSString;
@protocol NSCopying, NSManagedObjectContextFaultingDelegate, _PFUbiquityRecordImportOperationDelegate;


#import "PFUbiquityImportOperation.h"
#import "NSManagedObjectContext.h"
#import "NSPersistentStoreCoordinator.h"
#import "PFUbiquityTransactionLog.h"
#import "PFUbiquitySwitchboardEntry.h"
#import "PFUbiquityKnowledgeVector.h"
#import "PFUbiquityImportContext.h"

@interface _PFUbiquityRecordImportOperation : PFUbiquityImportOperation <NSCopying, NSManagedObjectContextFaultingDelegate>

 {
    NSManagedObjectContext *_moc;
    NSPersistentStoreCoordinator *_psc;
    PFUbiquityTransactionLog *_transactionLog;
    PFUbiquitySwitchboardEntry *_entry;
    NSMutableSet *_insertedObjectIDs;
    NSMutableSet *_updatedObjectIDs;
    NSMutableSet *_deletedObjectIDs;
    PFUbiquityKnowledgeVector *_logScore;
    NSMutableDictionary *_resolvedConflicts;
    BOOL _lockedExistingCoord;
    PFUbiquityKnowledgeVector *_initialStoreKnowledgeVector;
    PFUbiquityKnowledgeVector *_updatedStoreKnowledgeVector;
    PFUbiquityImportContext *_importContext;
    BOOL _success;
    BOOL _transactionDidRollback;
    BOOL _wroteKV;
    NSError *_operationError;
    NSMutableDictionary *_relationshipsToObjectIDsToCheck;
}


@property (readonly, copy) NSString *debugDescription;
@property NSObject<_PFUbiquityRecordImportOperationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)context:(id)arg0 shouldHandleInaccessibleFault:(id)arg1 forObjectID:(id)arg2 andTrigger:(id)arg3 ;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)retainedDelegate;
-(void)cancel;
-(void)dealloc;
-(void)main;
-(void)respondToStoreTransactionStateChangeNotification:(id)arg0 ;


@end


#endif