// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSSTORAGE_H
#define NSSTORAGE_H


#import <Foundation/Foundation.h>


@interface NSStorage : NSObject {
    id *_storage;
    NSInteger _hintCapacity;
    NSUInteger _reserved;
}




+(void)initialize;
-(*void)elementAtIndex:(NSUInteger)arg0 ;
-(*void)pointerToElement:(NSUInteger)arg0 directlyAccessibleElements:(struct _NSRange *)arg1 ;
-(NSUInteger)capacity;
-(NSUInteger)count;
-(NSUInteger)elementSize;
-(NSUInteger)hintCapacity;
-(id)description;
-(id)init;
-(id)initWithElementSize:(NSUInteger)arg0 capacity:(NSUInteger)arg1 ;
-(void)addElement:(*void)arg0 ;
-(void)dealloc;
-(void)enumerateElementsUsingBlock:(id)arg0 ;
-(void)insertElement:(*void)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertElements:(*void)arg0 count:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)removeElementAtIndex:(NSUInteger)arg0 ;
-(void)removeElementsInRange:(struct _NSRange )arg0 ;
-(void)replaceElementAtIndex:(NSUInteger)arg0 withElement:(*void)arg1 ;
-(void)setHintCapacity:(NSUInteger)arg0 ;


@end


#endif