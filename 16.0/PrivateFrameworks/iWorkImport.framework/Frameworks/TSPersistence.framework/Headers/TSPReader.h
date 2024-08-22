// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPREADER_H
#define TSPREADER_H

@class NSError, NSMapTable, NSHashTable, NSString;
@protocol TSPObjectDelegate, TSPUnarchiverDelegate, OS_dispatch_queue, OS_dispatch_group, TSPReaderDelegate;

#import <Foundation/Foundation.h>

#import "TSPCancellationState.h"
#import "TSPComponentObjectUUIDMap.h"
#import "TSPMutableComponentDataReferenceMap.h"
#import "TSPFinalizeHandlerQueue.h"
#import "TSPComponent.h"
#import "TSPObjectContext.h"

@interface TSPReader : NSObject <TSPObjectDelegate, TSPUnarchiverDelegate>

 {
    BOOL _hasReadFailure;
    TSPCancellationState *_cancellationState;
    NSUInteger _fileFormatVersion;
    TSPComponentObjectUUIDMap *_componentObjectUUIDMap;
    TSPMutableComponentDataReferenceMap *_componentDataReferenceMap;
    TSPFinalizeHandlerQueue *_finalizeHandlerQueue;
    NSObject<OS_dispatch_queue> *_errorQueue;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_unarchiveQueue;
    NSObject<OS_dispatch_queue> *_objectsQueue;
    IdentifierMap<TSP::ObjectInfo> _objectInfoMap;
    vector<TSP::UnarchiverRepeatedReference, std::allocator<TSP::UnarchiverRepeatedReference>> _repeatedReferences;
    NSMapTable *_objects;
    NSObject<OS_dispatch_queue> *_objectsToModifyQueue;
    NSHashTable *_objectsToModify;
    ? _flags;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_group> *completionGroup; // ivar: _completionGroup
@property (readonly, nonatomic) TSPComponent *component; // ivar: _component
@property (readonly, nonatomic) NSInteger componentIdentifier;
@property (readonly, nonatomic) TSPObjectContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<TSPReaderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL didFinishResolvingReferences;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) NSUInteger fileFormatVersion;
@property (readonly, nonatomic) BOOL hasDocumentVersionUUID;
@property (readonly) BOOL hasReadFailure;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCrossAppPaste;
@property (readonly, nonatomic) BOOL isCrossDocumentPaste;
@property (readonly, nonatomic) unsigned char packageIdentifier;
@property (readonly, nonatomic) NSUInteger readVersion;
@property (readonly, nonatomic) unsigned int sourceType;
@property (readonly) Class superclass;


-(*void)objectInfoForIdentifier:(NSInteger)arg0 ;
-(BOOL)canSetObjectUUIDForObject:(id)arg0 ;
-(BOOL)finishUnarchiving;
-(BOOL)isObjectInDocument:(id)arg0 ;
-(BOOL)shouldValidateComponentsOfInMemoryObjects;
-(BOOL)validateObjectIdentifierForObject:(id)arg0 ;
-(NSInteger)modifyObjectTokenForNewObject;
-(NSInteger)newObjectIdentifier;
-(NSInteger)objectIdentifierForUUID:(id)arg0 ;
-(id)UUIDForObjectIdentifier:(NSInteger)arg0 ;
-(id)dataForIdentifier:(NSInteger)arg0 referencedByObjectIdentifier:(NSInteger)arg1 objectClass:(Class)arg2 ;
-(id)init;
-(id)initWithComponent:(id)arg0 finalizeHandlerQueue:(id)arg1 delegate:(id)arg2 ;
-(id)newObjectUUIDForObject:(id)arg0 uuidNamespace:(unsigned char)arg1 offset:(NSUInteger)arg2 ignoringBaseUUIDForObjectUUID:(BOOL)arg3 requireDeterministicUUID:(BOOL)arg4 ;
-(id)objectUUIDMap;
-(void)addUnarchivedObject:(id)arg0 unarchiver:(id)arg1 ;
-(void)attemptedToReadInMemoryObject:(id)arg0 objectIdentifier:(NSInteger)arg1 ;
-(void)beginIgnoringModificationsForObject:(id)arg0 ;
-(void)beginReadingWithCompletionQueue:(id)arg0 completion:(id)arg1 ;
-(void)didUnarchiveObject:(id)arg0 withUnarchiver:(id)arg1 ;
-(void)endIgnoringModificationsForObject:(id)arg0 ;
-(void)processObjectsToModifyWithRootObject:(id)arg0 ;
// -(void)readWithIOCompletionQueue:(id)arg0 ioCompletion:(id)arg1 completionQueue:(unk)arg2 completion:(id)arg3  ;
-(void)resolveReferences;
-(void)setObjectDelegatesToContextObjectDelegate;
-(void)unarchiveObjectWithUnarchiver:(id)arg0 ;
-(void)unarchiver:(id)arg0 didReadLazyReference:(id)arg1 isExternal:(*BOOL)arg2 ;
-(void)willModifyObject:(id)arg0 options:(NSUInteger)arg1 ;


@end


#endif