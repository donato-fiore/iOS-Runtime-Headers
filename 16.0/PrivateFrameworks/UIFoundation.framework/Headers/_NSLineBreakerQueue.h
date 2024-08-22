// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSLINEBREAKERQUEUE_H
#define _NSLINEBREAKERQUEUE_H


#import <Foundation/Foundation.h>


@interface _NSLineBreakerQueue : NSObject {
    **void _buf;
    NSUInteger _capacity;
    NSUInteger _start;
    NSUInteger _end;
    NSUInteger _count;
}




-(*void)valueAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)count;
-(id)description;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(void)_ensureCapacity:(NSUInteger)arg0 ;
-(void)appendValue:(*void)arg0 ;
-(void)dealloc;
-(void)enumerateValuesWithBlock:(id)arg0 ;
-(void)removeAllValues;
-(void)removeValuesBeforeIndex:(NSUInteger)arg0 ;


@end


#endif