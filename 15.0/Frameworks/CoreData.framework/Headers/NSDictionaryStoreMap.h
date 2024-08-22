// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSDICTIONARYSTOREMAP_H
#define NSDICTIONARYSTOREMAP_H

@class NSMutableDictionary;


#import "NSPersistentStoreMap.h"

@interface NSDictionaryStoreMap : NSPersistentStoreMap {
    NSMutableDictionary *_theMap;
}




+(void)initialize;
-(id)dataForKey:(id)arg0 ;
-(id)handleFetchRequest:(id)arg0 ;
-(id)initWithStore:(id)arg0 ;
-(id)initWithStore:(id)arg0 fromArchivedData:(id)arg1 ;
-(id)initWithStore:(id)arg0 fromPath:(id)arg1 ;
-(id)retainedObjectIDsForRelationship:(id)arg0 forObjectID:(id)arg1 ;
-(void)addObject:(id)arg0 objectIDMap:(id)arg1 ;
-(void)dealloc;
-(void)removeObject:(id)arg0 objectIDMap:(id)arg1 ;
-(void)updateObject:(id)arg0 objectIDMap:(id)arg1 ;


@end


#endif