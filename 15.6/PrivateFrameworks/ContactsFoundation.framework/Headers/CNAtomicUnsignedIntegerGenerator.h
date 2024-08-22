// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNATOMICUNSIGNEDINTEGERGENERATOR_H
#define CNATOMICUNSIGNEDINTEGERGENERATOR_H


#import <Foundation/Foundation.h>


@interface CNAtomicUnsignedIntegerGenerator : NSObject {
    uint8_t _n;
}




-(NSUInteger)nextUnsignedInteger;
-(id)description;
-(id)init;


@end


#endif