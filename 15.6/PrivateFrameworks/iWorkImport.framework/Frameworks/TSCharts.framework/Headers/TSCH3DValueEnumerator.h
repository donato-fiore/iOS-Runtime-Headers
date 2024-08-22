// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DVALUEENUMERATOR_H
#define TSCH3DVALUEENUMERATOR_H


#import <Foundation/Foundation.h>


@interface TSCH3DValueEnumerator : NSObject {
    ValueEnumerator _imp;
}


@property (readonly, nonatomic) CGFloat value;


-(BOOL)isValid;
-(BOOL)isValidNonZero;
-(NSUInteger)index;
-(id)enumerator;
-(id)nextObject;


@end


#endif