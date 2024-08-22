// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REDEPENDENCYGRAPH_H
#define REDEPENDENCYGRAPH_H

@class NSMapTable, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface REDependencyGraph : NSObject <NSCopying>

 {
    NSMapTable *_nodes;
}


@property (readonly, nonatomic) NSArray *allItems;
@property (readonly, nonatomic) NSUInteger count;


-(BOOL)containsItem:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)item:(id)arg0 isDependencyOfItem:(id)arg1 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithPointerFunctions:(NSUInteger)arg0 ;
-(id)topologicalSortedItems;
-(id)topologicalSortedItemsWithComparator:(id)arg0 ;
// -(void)_enumerateSortedFirstLevelDependenciesOfItem:(id)arg0 usingComparator:(id)arg1 withBlock:(unk)arg2  ;
// -(void)_visitNode:(id)arg0 visited:(id)arg1 temporary:(id)arg2 result:(id)arg3 comparator:(id)arg4 warn:(unk)arg5  ;
-(void)addItem:(id)arg0 ;
-(void)enumerateDependenciesOfItem:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateObjectsUsingBlock:(id)arg0 ;
-(void)markItem:(id)arg0 dependentOnItem:(id)arg1 ;
-(void)removeItem:(id)arg0 ;


@end


#endif