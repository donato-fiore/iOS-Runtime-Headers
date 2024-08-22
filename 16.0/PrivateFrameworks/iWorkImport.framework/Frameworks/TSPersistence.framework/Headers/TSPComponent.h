// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPCOMPONENT_H
#define TSPCOMPONENT_H

@class NSString, NSMapTable, NSIndexSet, NSArray, NSDate;
@protocol NSDiscardableContent, TSPComponentDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TSPObject.h"
#import "TSPComponentExternalReferenceMap.h"
#import "TSPComponentObjectUUIDMap.h"
#import "TSPObjectReferenceMap.h"
#import "TSPComponentDataReferenceMap.h"

@interface TSPComponent : NSObject <NSDiscardableContent>

 {
    uint8_t _accessCount;
    id<TSPComponentDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_concurrentAccessQueue;
    NSString *_locator;
    NSUInteger _documentReadVersion;
    NSUInteger _documentWriteVersion;
    NSUInteger _componentReadVersion;
    NSUInteger _componentRequiredVersion;
    NSUInteger _saveToken;
    TSPObject *_strongRootObject;
    TSPObject *_weakRootObject;
    NSMapTable *_writtenObjects;
    TSPComponentExternalReferenceMap *_externalReferenceMap;
    NSIndexSet *_ambiguousReferences;
    ? _flags;
}


@property (readonly, nonatomic) NSIndexSet *ambiguousReferences;
@property (readonly, nonatomic) BOOL canBeDropped;
@property (readonly, nonatomic) TSPComponentObjectUUIDMap *componentObjectUUIDMap; // ivar: _componentObjectUUIDMap
@property (readonly, nonatomic) NSUInteger componentReadVersion;
@property (readonly, nonatomic) NSUInteger componentRequiredVersion;
@property (readonly, nonatomic) NSInteger compressionAlgorithm;
@property (readonly, nonatomic) NSUInteger documentReadVersion;
@property (readonly, nonatomic) NSUInteger documentWriteVersion;
@property (readonly, nonatomic) NSUInteger encodedLength; // ivar: _encodedLength
@property (readonly, nonatomic) NSArray *featureInfos; // ivar: _featureInfos
@property (readonly, nonatomic) NSInteger identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL incompatibleVersion;
@property (readonly, nonatomic) BOOL isStoredOutsideObjectArchive;
@property (readonly, nonatomic) BOOL isTransientComponent;
@property (readonly, nonatomic) BOOL isWasteful;
@property (readonly, nonatomic) NSDate *lastModificationDate; // ivar: _lastModificationDate
@property (readonly, nonatomic) NSString *locator;
@property (readonly) BOOL modified;
@property (readonly) BOOL needsArchiving;
@property (readonly, nonatomic) TSPObjectReferenceMap *objectReferenceMap; // ivar: _objectReferenceMap
@property (readonly) unsigned char packageIdentifier;
@property (readonly) BOOL persisted;
@property (readonly, nonatomic) TSPComponentDataReferenceMap *persistedComponentDataReferenceMap; // ivar: _persistedComponentDataReferenceMap
@property (readonly, nonatomic) NSString *preferredLocator; // ivar: _preferredLocator
@property (readonly, nonatomic) unsigned char requiredPackageIdentifier;
@property (retain) TSPObject *rootObject;
@property (readonly, nonatomic) NSUInteger saveToken;
@property (readonly, nonatomic) TSPComponentDataReferenceMap *upgradedComponentDataReferenceMap; // ivar: _upgradedComponentDataReferenceMap


+(id)componentsDiscardingContentOnCurrentThread;
-(BOOL)addExternalReferenceToObjectOrLazyReference:(id)arg0 isWeak:(BOOL)arg1 externalReferenceMap:(id)arg2 delegate:(id)arg3 ;
-(BOOL)beginContentAccess;
-(BOOL)isCachingEnabled;
-(BOOL)isContentDiscarded;
-(BOOL)isDiscardingContent;
-(BOOL)shouldForceCaching;
-(BOOL)shouldKeepStrongObjectImpl;
-(id)additionalDescription;
-(id)description;
-(id)init;
-(id)initWithDelegate:(id)arg0 identifier:(NSInteger)arg1 preferredLocator:(id)arg2 packageIdentifier:(unsigned char)arg3 ;
-(id)initWithDelegate:(id)arg0 message:(*void)arg1 packageIdentifier:(unsigned char)arg2 encodedLength:(NSUInteger)arg3 lastModificationDate:(id)arg4 ;
-(id)initWithDelegate:(id)arg0 rootObject:(id)arg1 ;
-(id)newExternalReferenceMapWithStrongReferences:(id)arg0 weakReferences:(id)arg1 delegate:(id)arg2 ;
-(id)newUpdatedExternalReferenceMapUsingDelegate:(id)arg0 ;
-(struct ComponentExternalReferenceInfo )externalReferenceInfoForObjectIdentifier:(NSInteger)arg0 ;
-(void)continueDiscardingContentIfPossibleUsingBlock:(id)arg0 ;
-(void)didReadObjects:(id)arg0 ;
-(void)discardContentIfPossible;
-(void)discardContentIfPossibleFromNSCache:(BOOL)arg0 ;
-(void)endContentAccess;
-(void)enumerateExternalReferences:(id)arg0 ;
-(void)markAsDiscarded;
-(void)performSynchronousDiscardContentIfPossibleUsingBlock:(id)arg0 ;
-(void)saveToMessage:(*void)arg0 saveToken:(NSUInteger)arg1 writtenComponentInfo:(struct WrittenComponentInfo *)arg2 ;
-(void)setArchivedObjectsImpl:(id)arg0 ;
-(void)willDiscardComponent;


@end


#endif