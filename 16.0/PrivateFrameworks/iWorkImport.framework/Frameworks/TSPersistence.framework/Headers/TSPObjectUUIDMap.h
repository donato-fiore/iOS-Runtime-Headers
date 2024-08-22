// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPOBJECTUUIDMAP_H
#define TSPOBJECTUUIDMAP_H

@class NSMutableDictionary, NSMutableSet, NSString;
@protocol TSPObjectInDocumentContaining, TSPObjectUUIDMapDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_TtC13TSPersistence23TSPMutableIdentifierSet.h"
#import "TSPPersistedObjectUUIDMap.h"

@interface TSPObjectUUIDMap : NSObject <TSPObjectInDocumentContaining>

 {
    uint8_t _assertOnReadCount;
    id<TSPObjectUUIDMapDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_inMemoryUUIDDictionary;
    _TtC13TSPersistence23TSPMutableIdentifierSet *_inMemoryObjectIdentifiers;
    NSMutableSet *_UUIDsWithSuppressedAssertions;
    TSPPersistedObjectUUIDMap *_persistedUUIDMap;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasObjectUUID:(id)arg0 ;
-(BOOL)isAnyObjectIdentifierInDocument:(id)arg0 ;
-(BOOL)isObjectIdentifierInDocument:(NSInteger)arg0 ;
-(BOOL)shouldSuppressAssertionForObjectUUID:(id)arg0 ;
-(NSInteger)objectIdentifierForUUID:(id)arg0 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(id)objectWithUUID:(id)arg0 onlyIfLoaded:(BOOL)arg1 validateNewObjects:(BOOL)arg2 identifier:(*NSInteger)arg3 ;
-(void)beginAssertOnRead;
-(void)endAssertOnRead;
-(void)object:(id)arg0 didChangeUUIDToValue:(id)arg1 fromValue:(id)arg2 ;
-(void)objectWasAddedToDocument:(id)arg0 options:(NSUInteger)arg1 ;
-(void)objectWillBeRemovedFromDocument:(id)arg0 ;
-(void)setPersistedUUIDMap:(id)arg0 ;


@end


#endif