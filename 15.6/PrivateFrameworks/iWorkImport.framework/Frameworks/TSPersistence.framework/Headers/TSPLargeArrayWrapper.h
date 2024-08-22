// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPLARGEARRAYWRAPPER_H
#define TSPLARGEARRAYWRAPPER_H

@class NSMutableArray;


#import "TSPAbstractMutableLargeArray.h"

@interface TSPLargeArrayWrapper : NSMutableArray {
    TSPAbstractMutableLargeArray *_backingStore;
}




-(NSUInteger)count;
-(id)initWithLargeArray:(id)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(void)addObject:(id)arg0 ;
-(void)insertObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)removeLastObject;
-(void)removeObjectAtIndex:(NSUInteger)arg0 ;
-(void)replaceObjectAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;


@end


#endif