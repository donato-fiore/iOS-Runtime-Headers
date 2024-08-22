// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BBMASKEDSET_H
#define BBMASKEDSET_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface BBMaskedSet : NSObject {
    NSUInteger _maskBits;
}


@property (retain, nonatomic) NSMutableArray *maskObjectSets; // ivar: _maskObjectSets


-(id)allObjects;
-(id)initWithMaskBits:(NSUInteger)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectsForMask:(NSUInteger)arg0 ;
-(void)_executeUsingMask:(NSUInteger)arg0 block:(id)arg1 ;
-(void)addObject:(id)arg0 withMask:(NSUInteger)arg1 ;
-(void)removeObject:(id)arg0 ;


@end


#endif