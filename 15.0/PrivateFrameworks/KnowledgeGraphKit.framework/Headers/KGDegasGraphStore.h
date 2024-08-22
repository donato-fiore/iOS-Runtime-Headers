// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KGDEGASGRAPHSTORE_H
#define KGDEGASGRAPHSTORE_H

@class NSString, NSUUID, NSURL;
@protocol KGGraphStore, KGEntityFactory;

#import <Foundation/Foundation.h>

#import "KGDatabase.h"

@interface KGDegasGraphStore : NSObject <KGGraphStore>



@property (readonly, nonatomic) KGDatabase *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<KGEntityFactory> *entityFactory; // ivar: _entityFactory
@property (readonly, nonatomic) NSUUID *graphIdentifier;
@property (nonatomic) NSUInteger graphVersion;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isReadOnly; // ivar: _isReadOnly
@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (readonly) Class superclass;
@property (nonatomic) NSInteger transactionCounter; // ivar: _transactionCounter
@property (retain, nonatomic) NSURL *url; // ivar: _url


+(BOOL)copyFromURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
+(BOOL)destroyAtURL:(id)arg0 error:(*id)arg1 ;
+(BOOL)migrateFromURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
+(id)persistentStoreFileExtension;
-(BOOL)_lock_enumerateEdgesWithIdentifiers:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
-(BOOL)_lock_filterEdgesWithOptionalLabels:(id)arg0 edgeIdentifiers:(*id)arg1 error:(*id)arg2 ;
-(BOOL)_lock_filterEdgesWithProperties:(id)arg0 edgeIdentifiers:(*id)arg1 error:(*id)arg2 ;
-(BOOL)_lock_filterEdgesWithRequiredLabels:(id)arg0 edgeIdentifiers:(*id)arg1 error:(*id)arg2 ;
-(BOOL)_lock_filterNodesWithOptionalLabels:(id)arg0 nodeIdentifiers:(*id)arg1 error:(*id)arg2 ;
-(BOOL)_lock_filterNodesWithProperties:(id)arg0 nodeIdentifiers:(*id)arg1 error:(*id)arg2 ;
-(BOOL)_lock_filterNodesWithRequiredLabels:(id)arg0 nodeIdentifiers:(*id)arg1 error:(*id)arg2 ;
-(BOOL)addEdges:(id)arg0 error:(*id)arg1 ;
-(BOOL)addNodes:(id)arg0 error:(*id)arg1 ;
-(BOOL)copyToURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)openWithMode:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)openWithMode:(NSUInteger)arg0 nameCache:(id)arg1 error:(*id)arg2 ;
-(BOOL)removeEdgeForIdentifier:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)removeEdgesForIdentifiers:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeNodeForIdentifier:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)removeNodesForIdentifiers:(id)arg0 error:(*id)arg1 ;
-(BOOL)updateEdgeForIdentifier:(NSUInteger)arg0 withProperties:(id)arg1 error:(*id)arg2 ;
-(BOOL)updateEdgeForIdentifier:(NSUInteger)arg0 withWeight:(float)arg1 error:(*id)arg2 ;
-(BOOL)updateNodeForIdentifier:(NSUInteger)arg0 withProperties:(id)arg1 error:(*id)arg2 ;
-(BOOL)updateNodeForIdentifier:(NSUInteger)arg0 withWeight:(float)arg1 error:(*id)arg2 ;
-(id)_lock_edgeIdentifiersMatchingFilter:(id)arg0 intersectingIdentifiers:(id)arg1 error:(*id)arg2 ;
-(id)_lock_edgeIdentifiersWithStartNodeIdentifiers:(id)arg0 edgeDirection:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)_lock_neighborNodeIdentifiersWithStartNodeIdentifiers:(id)arg0 edgeDirection:(NSUInteger)arg1 edgeFilter:(id)arg2 error:(*id)arg3 ;
-(id)_lock_nodeForIdentifier:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)_lock_nodeIdentifiersMatchingFilter:(id)arg0 intersectingIdentifiers:(id)arg1 error:(*id)arg2 ;
-(id)_lock_nodeIdentifiersOfEdgesWithIdentifiers:(id)arg0 edgeDirection:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)_lock_sourcesByTargetWithEdgeIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)_lock_targetsBySourceWithEdgeIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)_resolvedPropertyValue:(id)arg0 isScalar:(*BOOL)arg1 ;
-(id)arrayOfDoublePropertiesForEdgesWithIdentifiers:(id)arg0 propertyName:(id)arg1 error:(*id)arg2 ;
-(id)arrayOfDoublePropertiesForNodesWithIdentifiers:(id)arg0 propertyName:(id)arg1 error:(*id)arg2 ;
-(id)arrayOfEdgesWithIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)arrayOfIntegerPropertiesForEdgesWithIdentifiers:(id)arg0 propertyName:(id)arg1 error:(*id)arg2 ;
-(id)arrayOfIntegerPropertiesForNodesWithIdentifiers:(id)arg0 propertyName:(id)arg1 error:(*id)arg2 ;
-(id)arrayOfNodesWithIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)arrayOfStringPropertiesForEdgesWithIdentifiers:(id)arg0 propertyName:(id)arg1 error:(*id)arg2 ;
-(id)arrayOfStringPropertiesForNodesWithIdentifiers:(id)arg0 propertyName:(id)arg1 error:(*id)arg2 ;
-(id)arrayOfUnsignedIntegerPropertiesForEdgesWithIdentifiers:(id)arg0 propertyName:(id)arg1 error:(*id)arg2 ;
-(id)arrayOfUnsignedIntegerPropertiesForNodesWithIdentifiers:(id)arg0 propertyName:(id)arg1 error:(*id)arg2 ;
-(id)edgeForIdentifier:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)edgeIdentifiersForNodeIdentifier:(NSUInteger)arg0 withLabels:(id)arg1 edgeDirection:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)edgeIdentifiersMatchingFilter:(id)arg0 intersectingIdentifiers:(id)arg1 error:(*id)arg2 ;
-(id)edgeIdentifiersWithStartNodeIdentifiers:(id)arg0 edgeDirection:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)edgeLabels;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 entityFactory:(id)arg1 ;
-(id)neighborNodeIdentifiersWithStartNodeIdentifiers:(id)arg0 edgeDirection:(NSUInteger)arg1 edgeFilter:(id)arg2 error:(*id)arg3 ;
-(id)nodeForIdentifier:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)nodeIdentifiersMatchingFilter:(id)arg0 intersectingIdentifiers:(id)arg1 error:(*id)arg2 ;
-(id)nodeIdentifiersOfEdgesWithIdentifiers:(id)arg0 edgeDirection:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)nodeLabels;
-(id)sourcesByTargetWithEdgeIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)targetsBySourceWithEdgeIdentifiers:(id)arg0 error:(*id)arg1 ;
-(void)_lock_enumerateNodesWithIdentifiers:(id)arg0 block:(id)arg1 ;
-(void)beginTransaction;
-(void)close;
-(void)commitTransaction;
-(void)rollbackTransaction;


@end


#endif