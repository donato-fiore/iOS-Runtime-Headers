// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VIBITVECTOR_H
#define VIBITVECTOR_H


#import <Foundation/Foundation.h>


@interface VIBitVector : NSObject {
    char * _data;
    NSUInteger _numberOfBytes;
    NSUInteger _bitShift;
}


@property (readonly) NSUInteger numberOfBits; // ivar: _numberOfBits


-(BOOL)checkAtIndex:(NSUInteger)arg0 ;
-(id)data;
-(id)initWithData:(id)arg0 ;
-(id)initWithNumberOfBits:(NSUInteger)arg0 ;
-(void)clearAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)setAtIndex:(NSUInteger)arg0 ;


@end


#endif