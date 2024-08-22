// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSPERSISTENTSTOREMAP_H
#define NSPERSISTENTSTOREMAP_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "NSMappedObjectStore.h"

@interface NSPersistentStoreMap : NSObject {
    NSMappedObjectStore *_store;
    NSString *_databaseUUID;
    NSDictionary *_storeMetadata;
    NSUInteger _nextPK64;
    NSDictionary *_mappings;
}




+(void)initialize;
-(NSUInteger)nextPK64;
-(id)configurationName;
-(id)dataForKey:(id)arg0 ;
-(id)handleFetchRequest:(id)arg0 ;
-(id)initWithStore:(id)arg0 ;
-(id)retainedObjectIDsForRelationship:(id)arg0 forObjectID:(id)arg1 ;
-(void)addObject:(id)arg0 objectIDMap:(id)arg1 ;
-(void)dealloc;
-(void)removeObject:(id)arg0 objectIDMap:(id)arg1 ;
-(void)updateObject:(id)arg0 objectIDMap:(id)arg1 ;


@end


#endif