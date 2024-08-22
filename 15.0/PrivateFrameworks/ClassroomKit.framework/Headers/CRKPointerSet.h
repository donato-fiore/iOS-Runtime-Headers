// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKPOINTERSET_H
#define CRKPOINTERSET_H

@class NSHashTable, NSArray;
@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface CRKPointerSet : NSObject <NSFastEnumeration>

 {
    NSHashTable *mBackingStore;
}


@property (readonly, copy, nonatomic) NSArray *allObjects;
@property (readonly, nonatomic) NSInteger count;


+(id)setWithArray:(id)arg0 ;
+(id)setWithSet:(id)arg0 ;
-(BOOL)containsObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSubsetOfSet:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)hash;
-(id)init;
-(id)setByIntersectingSet:(id)arg0 ;
-(id)setBySubtractingSet:(id)arg0 ;
-(void)addObject:(id)arg0 ;
-(void)addObjectsFromArray:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObject:(id)arg0 ;


@end


#endif