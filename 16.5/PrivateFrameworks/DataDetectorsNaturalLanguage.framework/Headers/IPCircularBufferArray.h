// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IPCIRCULARBUFFERARRAY_H
#define IPCIRCULARBUFFERARRAY_H

@class NSMutableArray, NSArray;
@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface IPCircularBufferArray : NSObject <NSFastEnumeration>

 {
    NSMutableArray *_backingStore;
    NSUInteger _currentIndex;
    NSUInteger _capacity;
    NSUInteger _mutationDetector;
    id *_lastObject;
}


@property (readonly, nonatomic) NSArray *allObjects;
@property (readonly) NSUInteger count;
@property (readonly, nonatomic) id *lastObject;


-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(void)addObject:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeAllObjects;


@end


#endif