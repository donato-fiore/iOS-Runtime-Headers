// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIPBAUTOCREATEDARRAY_H
#define TRIPBAUTOCREATEDARRAY_H

@class NSMutableArray;


#import "TRIPBMessage.h"

@interface TRIPBAutocreatedArray : NSMutableArray {
    TRIPBMessage *_autocreator;
    NSMutableArray *_array;
}




-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(void)addObject:(id)arg0 ;
-(void)dealloc;
-(void)enumerateObjectsUsingBlock:(id)arg0 ;
-(void)enumerateObjectsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)insertObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)removeLastObject;
-(void)removeObject:(id)arg0 ;
-(void)removeObjectAtIndex:(NSUInteger)arg0 ;
-(void)replaceObjectAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;


@end


#endif