// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPREADCOORDINATORBASE_H
#define TSPREADCOORDINATORBASE_H

@class NSError, NSHashTable, NSMutableArray, NSUUID, NSString;
@protocol TSPReaderDelegate, TSPLazyReferenceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TSPCancellationState.h"

@interface TSPReadCoordinatorBase : NSObject <TSPReaderDelegate, TSPLazyReferenceDelegate>

 {
    NSObject<OS_dispatch_queue> *_errorQueue;
    NSError *_error;
    uint8_t _success;
    NSObject<OS_dispatch_queue> *_lazyReferenceQueue;
    NSHashTable *_lazyReferences;
    NSHashTable *_lazyReferenceCopies;
    NSMutableArray *_lazyReferenceObserverBlocks;
    uint8_t _didSetLazyReferenceDelegate;
    NSObject<OS_dispatch_queue> *_externalReferenceQueue;
    IdentifierMap<TSP::ExternalReferenceInfo> _externalReferences;
    vector<TSP::RepeatedExternalReferenceCompletionInfo, std::allocator<TSP::RepeatedExternalReferenceCompletionInfo>> _repeatedExternalReferences;
    uint8_t _didResolveExternalReferences;
}


@property (readonly, nonatomic) NSUUID *baseObjectUUID;
@property (readonly, nonatomic) BOOL canRetainObjectReferencedByWeakLazyReference;
@property (retain, nonatomic) TSPCancellationState *cancellationState; // ivar: _cancellationState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSError *error;
@property (readonly, nonatomic) NSUInteger fileFormatVersion;
@property (readonly, nonatomic) BOOL hasDocumentVersionUUID;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL ignoreReferencesToUnknownObjects;
@property (readonly, nonatomic) BOOL isCrossAppPaste;
@property (readonly, nonatomic) BOOL isCrossDocumentPaste;
@property (readonly, nonatomic) BOOL isReadingFromDocument;
@property (readonly, nonatomic) unsigned char packageIdentifier;
@property (readonly, nonatomic) NSUInteger readVersion;
@property (readonly, nonatomic) NSInteger sourceType;
@property (readonly) BOOL success;
@property (readonly) Class superclass;


-(*void)externalReferenceInfoForObjectIdentifier:(NSInteger)arg0 componentIdentifier:(NSInteger)arg1 ;
-(BOOL)readLazyReference:(id)arg0 object:(*id)arg1 error:(*id)arg2 ;
-(BOOL)resolveExternalReferences;
-(NSInteger)reader:(id)arg0 wantsObjectIdentifierForUUID:(id)arg1 ;
-(id)cancellationStateForReader:(id)arg0 ;
-(id)context;
-(id)contextForReader:(id)arg0 ;
-(id)externalObjectForIdentifier:(NSInteger)arg0 componentIdentifier:(NSInteger)arg1 isReadFinished:(BOOL)arg2 ;
-(id)init;
-(id)lazyReferenceDelegateForReader:(id)arg0 ;
-(id)objectDelegateForReader:(id)arg0 ;
-(id)objectForIdentifier:(NSInteger)arg0 ;
-(id)reader:(id)arg0 wantsDataForIdentifier:(NSInteger)arg1 ;
-(id)unarchivedObjectForIdentifier:(NSInteger)arg0 isReadFinished:(BOOL)arg1 ;
-(void)addLoadObserver:(id)arg0 action:(SEL)arg1 forLazyReference:(id)arg2 ;
-(void)didReferenceExternalObject:(id)arg0 withIdentifier:(NSInteger)arg1 ;
-(void)didUpdateLazyReferenceDelegate:(id)arg0 ;
-(void)lazyReference:(id)arg0 didCreateCopy:(id)arg1 ;
-(void)reader:(id)arg0 didFindExternalReferenceToObjectIdentifier:(NSInteger)arg1 componentIdentifier:(NSInteger)arg2 isWeak:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 fromParentObject:(id)arg5 completion:(id)arg6 ;
-(void)reader:(id)arg0 didFindExternalRepeatedReference:(id)arg1 isWeak:(BOOL)arg2 allowUnknownObject:(BOOL)arg3 fromParentObject:(id)arg4 completion:(id)arg5 ;
-(void)reader:(id)arg0 didReadLazyReference:(id)arg1 ;
-(void)setLazyReferencesDelegate:(id)arg0 forLazyReference:(id)arg1 ;
-(void)setLazyReferencesDelegate:(id)arg0 forLazyReferenceCopy:(id)arg1 ;
-(void)setLazyReferencesDelegateToObjectContext;
-(void)updatePersistedDataReferenceMap;


@end


#endif