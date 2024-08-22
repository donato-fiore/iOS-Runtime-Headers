// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACDLAZYARRAY_H
#define ACDLAZYARRAY_H

@class NSArray;



@interface ACDLazyArray : NSArray {
    os_unfair_lock_s _initializationLock;
    id *_initializationBlock;
    NSArray *_underlyingArray;
}




-(NSUInteger)count;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInitializer:(id)arg0 ;
-(id)initWithObjects:(*id)arg0 count:(NSUInteger)arg1 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;


@end


#endif