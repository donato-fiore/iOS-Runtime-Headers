// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLTCIRCULARBITBUFFER_H
#define BLTCIRCULARBITBUFFER_H

@class NSMutableData;

#import <Foundation/Foundation.h>


@interface BLTCircularBitBuffer : NSObject {
    NSMutableData *_bitVector;
}


@property (readonly, nonatomic) NSUInteger beginIndex; // ivar: _beginIndex
@property (readonly, nonatomic) NSUInteger capacity; // ivar: _capacity


+(NSUInteger)actualCapacity:(NSUInteger)arg0 ;
-(id)bitVector;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithData:(id)arg0 andIndex:(NSUInteger)arg1 ;
-(unsigned char)bitAtIndex:(NSUInteger)arg0 ;
-(void)_setBit:(BOOL)arg0 atIndex:(NSUInteger)arg1 ;
-(void)clear;
-(void)setBit:(BOOL)arg0 atIndex:(NSUInteger)arg1 ;


@end


#endif