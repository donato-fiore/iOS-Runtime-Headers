// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGCIRCULARBUFFERARRAY_H
#define SGCIRCULARBUFFERARRAY_H

@class NSMutableArray;
@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface SGCircularBufferArray : NSObject <NSFastEnumeration>

 {
    NSMutableArray *_backingStore;
    NSUInteger _currentIndex;
    NSUInteger _capacity;
    NSUInteger _mutationDetector;
}




-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)allObjects;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(void)addObject:(id)arg0 ;


@end


#endif