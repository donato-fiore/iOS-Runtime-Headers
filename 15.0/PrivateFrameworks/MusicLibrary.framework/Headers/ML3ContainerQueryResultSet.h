// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ML3CONTAINERQUERYRESULTSET_H
#define ML3CONTAINERQUERYRESULTSET_H



#import "ML3QueryResultSet.h"
#import "ML3QueryResultSet_BackingStore.h"

@interface ML3ContainerQueryResultSet : ML3QueryResultSet {
    BOOL _needsSorting;
    BOOL _needsReversing;
    ML3QueryResultSet_BackingStore *_sortedBackingStore;
    NSInteger _containerPID;
    NSUInteger _entityLimit;
}




-(BOOL)_updateToLibraryCurrentRevision;
-(NSInteger)persistentIDAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)entityLimit;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithQuery:(id)arg0 ;
-(id)sortedBackingStoreForDisplayOrdering;
-(void)_loadCurrentFullResults;
-(void)enumeratePersistentIDsUsingBlock:(id)arg0 ;
-(void)enumerateSectionsUsingBlock:(id)arg0 ;


@end


#endif