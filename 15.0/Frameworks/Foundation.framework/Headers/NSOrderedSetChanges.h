// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSORDEREDSETCHANGES_H
#define NSORDEREDSETCHANGES_H

@class NSMutableOrderedSet;
@protocol NSCopying;



@interface NSOrderedSetChanges : NSMutableOrderedSet <NSCopying>



@property (readonly) NSUInteger changeCount;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)_isToManyChangeInformation;
-(NSInteger)_toManyPropertyType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)addChange:(id)arg0 ;
-(void)addChanges:(id)arg0 ;
-(void)applyChangesToOrderedSet:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateChanges:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateChangesUsingBlock:(id)arg0 ;
-(void)exchangeObjectAtIndex:(NSUInteger)arg0 withObjectAtIndex:(NSUInteger)arg1 ;
-(void)insertObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)moveObjectAtIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 ;
-(void)moveObjectsAtIndexes:(id)arg0 toIndex:(NSUInteger)arg1 ;
-(void)removeObjectAtIndex:(NSUInteger)arg0 ;
-(void)replaceObjectAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;
-(void)updateObject:(id)arg0 atIndex:(NSUInteger)arg1 ;


@end


#endif