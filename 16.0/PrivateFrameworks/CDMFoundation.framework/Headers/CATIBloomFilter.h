// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CATIBLOOMFILTER_H
#define CATIBLOOMFILTER_H


#import <Foundation/Foundation.h>

#import "CATIBitVector.h"

@interface CATIBloomFilter : NSObject {
    CATIBitVector *bitVector;
    NSUInteger _numberOfBits;
    NSUInteger _numberHashes;
}


@property (readonly) NSUInteger expectedNumberOfItems; // ivar: _expectedNumberOfItems
@property (readonly) CGFloat falsePositiveRate; // ivar: _falsePositiveRate
@property (readonly) unsigned int seed; // ivar: _seed


-(BOOL)contains:(id)arg0 ;
-(id)initWithExceptedNumberOfItems:(NSUInteger)arg0 falsePositiveRate:(CGFloat)arg1 seed:(unsigned int)arg2 ;
-(void)add:(id)arg0 ;


@end


#endif