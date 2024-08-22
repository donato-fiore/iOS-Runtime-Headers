// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PASRNG_H
#define _PASRNG_H


#import <Foundation/Foundation.h>


@interface _PASRng : NSObject {
    ? _state;
}




-(CGFloat)nextDouble;
-(NSUInteger)next;
-(float)nextFloat;
-(id)init;
-(id)initWithSeed:(NSUInteger)arg0 ;


@end


#endif