// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFUBIQUITYSTORESAVESNAPSHOT_H
#define PFUBIQUITYSTORESAVESNAPSHOT_H

@class NSMutableArray, NSMutableDictionary, NSNumber, NSString, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PFUbiquityKnowledgeVector.h"
#import "PFUbiquityGlobalObjectIDCache.h"

@interface PFUbiquityStoreSaveSnapshot : NSObject {
    NSMutableArray *_entityNames;
    NSMutableArray *_peerIDs;
    NSMutableArray *_globalObjectIDs;
    NSMutableArray *_primaryKeys;
    NSMutableDictionary *_managedObjectIDToGlobalObjectID;
    NSMutableDictionary *_globalObjectIDToPermanentManagedObjectID;
    NSMutableDictionary *_entityNameToIndex;
    NSMutableDictionary *_peerIDToIndex;
    NSMutableDictionary *_primaryKeyToIndex;
    NSMutableDictionary *_globalObjectIDToIndex;
    NSMutableDictionary *_insertedObjects;
    NSMutableDictionary *_updatedObjects;
    NSMutableDictionary *_deletedObjects;
    NSMutableDictionary *_peerStates;
    NSNumber *_transactionNumber;
    NSString *_exportingPeerID;
    NSString *_localPeerID;
    NSMutableArray *_filesInsertedInTransaction;
    NSArray *_filesDeletedInTransaction;
    PFUbiquityKnowledgeVector *_storeKV;
    PFUbiquityGlobalObjectIDCache *_gidCache;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)description;
-(id)init;
-(id)initForExport:(id)arg0 ;
-(id)initWithExportingPeerID:(id)arg0 ;
-(void)dealloc;


@end


#endif