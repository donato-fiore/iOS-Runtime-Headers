// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUMUTABLEINDEXPATHSET_H
#define PUMUTABLEINDEXPATHSET_H

@class NSMutableSet;


#import "PUIndexPathSet.h"

@interface PUMutableIndexPathSet : PUIndexPathSet {
    NSMutableSet *_indexPaths;
}




-(BOOL)containsIndexPath:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)count;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)addIndexPath:(id)arg0 ;
-(void)enumerateIndexPathsUsingBlock:(id)arg0 ;
-(void)removeAllIndexPaths;
-(void)removeIndexPath:(id)arg0 ;
-(void)setIndexPathSet:(id)arg0 ;


@end


#endif