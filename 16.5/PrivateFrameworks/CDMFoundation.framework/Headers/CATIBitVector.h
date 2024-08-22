// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CATIBITVECTOR_H
#define CATIBITVECTOR_H


#import <Foundation/Foundation.h>


@interface CATIBitVector : NSObject {
    NSUInteger _bitsPerBlock;
    NSUInteger _bitShift;
    char * _data;
}


@property (readonly) NSUInteger numberOfBits; // ivar: _numberOfBits
@property (readonly) NSUInteger numberOfBytes; // ivar: _numberOfBytes


-(BOOL)testAtIndex:(NSUInteger)arg0 ;
-(id)data;
-(id)initWithNumberOfBits:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)setAtIndex:(NSUInteger)arg0 ;


@end


#endif