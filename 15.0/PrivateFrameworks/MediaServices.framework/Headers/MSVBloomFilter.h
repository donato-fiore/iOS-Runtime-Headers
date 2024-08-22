// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSVBLOOMFILTER_H
#define MSVBLOOMFILTER_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MSVBloomFilter : NSObject <NSSecureCoding>

 {
    *__CFBitVector _vector;
    NSInteger _vectorCapacity;
    NSUInteger _murmurSeed;
    NSInteger _hashCount;
}


@property (readonly, nonatomic) NSInteger capacity; // ivar: _capacity
@property (readonly, nonatomic) NSInteger estimatedCount;
@property (readonly, nonatomic) float falsePositiveProbability;
@property (readonly, nonatomic) float falsePositiveTolerance; // ivar: _falsePositiveTolerance


+(BOOL)supportsSecureCoding;
-(BOOL)containsObject:(id)arg0 ;
-(NSUInteger)_fnvHashObject:(id)arg0 ;
-(NSUInteger)_murmur2HashObject:(id)arg0 ;
-(id)_vectorIndexSetForObject:(id)arg0 ;
-(id)description;
-(id)initWithCapacity:(NSInteger)arg0 falsePositiveTolerance:(float)arg1 ;
-(id)initWithCapacity:(NSInteger)arg0 falsePositiveTolerance:(float)arg1 murmurSeed:(NSUInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)addObject:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif