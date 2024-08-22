// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKMUTABLEARRAY_H
#define IKMUTABLEARRAY_H



#import "IKArray.h"

@interface IKMutableArray : IKArray

@property (readonly, nonatomic) NSInteger expectedCapacity; // ivar: _expectedCapacity


-(id)initWithCapacity:(NSInteger)arg0 ;
-(void)_convertToArrayStore;
-(void)addObject:(id)arg0 ;
-(void)addObjectsFromArray:(id)arg0 ;
-(void)insertObject:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)insertObjects:(id)arg0 atIndexes:(id)arg1 ;
-(void)removeObject:(id)arg0 ;
-(void)removeObjectAtIndex:(NSInteger)arg0 ;
-(void)removeObjectsAtIndexes:(id)arg0 ;
-(void)setObject:(id)arg0 atIndexedSubscript:(NSInteger)arg1 ;


@end


#endif