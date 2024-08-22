// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPDATAREFERENCEMAP_H
#define TSPDATAREFERENCEMAP_H

@class NSMutableIndexSet, NSIndexSet, NSString;
@protocol TSPDataInDocumentProviding, TSPDataReferenceMapDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_TtC13TSPersistence22TSPMutableReferenceMap.h"
#import "TSPPersistedDataReferenceMap.h"
#import "_TtC13TSPersistence15TSPReferenceMap.h"

@interface TSPDataReferenceMap : NSObject <TSPDataInDocumentProviding>

 {
    id<TSPDataReferenceMapDelegate> *_delegate;
    uint8_t _isReady;
    uint8_t _isTornDown;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    _TtC13TSPersistence22TSPMutableReferenceMap *_dataToObjectReferenceMap;
    _TtC13TSPersistence22TSPMutableReferenceMap *_objectToDataReferenceMap;
    NSMutableIndexSet *_dataInDocument;
    NSIndexSet *_initialDataInDocument;
    BOOL _hasInitialDataInDocument;
    TSPPersistedDataReferenceMap *_persistedDataReferenceMap;
    _TtC13TSPersistence15TSPReferenceMap *_dataToObjectReferenceMapSnapshot;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDataInDocument:(id)arg0 ;
-(BOOL)p_isDataInDocument:(NSInteger)arg0 ;
-(BOOL)p_isObjectIdentifierInDocument:(NSInteger)arg0 ;
-(BOOL)p_objectIdentifier:(NSInteger)arg0 didAddReferenceToDataIdentifier:(NSInteger)arg1 increment:(NSInteger)arg2 isObjectPersisted:(BOOL)arg3 ;
-(BOOL)p_objectIdentifier:(NSInteger)arg0 willRemoveReferenceToDataIdentifier:(NSInteger)arg1 isObjectPersisted:(BOOL)arg2 ;
-(id)allObjectsReferencingData:(id)arg0 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(id)p_allReferencesFromDataIdentifier:(NSInteger)arg0 ;
-(id)p_allReferencesFromObjectIdentifier:(NSInteger)arg0 ;
-(id)p_consolidatedIdentifiersWithPersistedIdentifiers:(id)arg0 identifierOverrides:(id)arg1 ;
-(void)appendComponentDataReferenceMap:(id)arg0 forUnarchivedObjects:(id)arg1 ;
-(void)didCloseDocument;
-(void)enumerateDataInDocumentUsingBlock:(id)arg0 ;
-(void)markAsReady;
-(void)objectIdentifier:(NSInteger)arg0 didAddReferenceToDataIdentifier:(NSInteger)arg1 isObjectPersisted:(BOOL)arg2 ;
-(void)objectIdentifier:(NSInteger)arg0 willRemoveReferenceToDataIdentifier:(NSInteger)arg1 isObjectPersisted:(BOOL)arg2 ;
-(void)p_notifyDataInDocumentUpdated;
-(void)p_recalculateDataInDocumentWithAllDataIdentifiers:(id)arg0 ;
-(void)setInitialDataIdentifiersInDocumentIndexSet:(id)arg0 ;
-(void)setPersistedDataReferenceMap:(id)arg0 allDataIdentifiers:(id)arg1 persistedObjectProvider:(id)arg2 ;
-(void)snapshotDataReferenceCountsForAutosave;
-(void)updateWithObjectIdentifierAddedToDocument:(NSInteger)arg0 objectIdentifierRemovedFromDocument:(NSInteger)arg1 ;


@end


#endif