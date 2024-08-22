// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KGDEGASALLINMEMORYGRAPHSTORE_H
#define KGDEGASALLINMEMORYGRAPHSTORE_H

@class NSURL;


#import "KGMemoryGraphStore.h"
#import "KGDatabase.h"

@interface KGDegasAllInMemoryGraphStore : KGMemoryGraphStore {
    KGDatabase *_database;
    NSUInteger _transactionCounter;
    NSURL *_url;
}




+(BOOL)copyFromURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
+(BOOL)destroyAtURL:(id)arg0 error:(*id)arg1 ;
+(BOOL)migrateFromURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
+(id)persistentStoreFileExtension;
-(BOOL)addEdges:(id)arg0 error:(*id)arg1 ;
-(BOOL)addNodes:(id)arg0 error:(*id)arg1 ;
-(BOOL)copyToURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)openWithMode:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)updateEdgeForIdentifier:(NSUInteger)arg0 withProperties:(id)arg1 error:(*id)arg2 ;
-(BOOL)updateEdgeForIdentifier:(NSUInteger)arg0 withWeight:(float)arg1 error:(*id)arg2 ;
-(BOOL)updateNodeForIdentifier:(NSUInteger)arg0 withProperties:(id)arg1 error:(*id)arg2 ;
-(BOOL)updateNodeForIdentifier:(NSUInteger)arg0 withWeight:(float)arg1 error:(*id)arg2 ;
-(NSUInteger)graphVersion;
-(id)graphIdentifier;
-(id)initWithURL:(id)arg0 ;
-(id)url;
-(void)beginTransaction;
-(void)close;
-(void)commitTransaction;
-(void)enumerateModelEdgesWithBlock:(id)arg0 ;
-(void)enumerateModelNodesWithBlock:(id)arg0 ;
-(void)rollbackTransaction;
-(void)setGraphVersion:(NSUInteger)arg0 ;


@end


#endif