// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPRANDOMDISTRIBUTION_H
#define MPRANDOMDISTRIBUTION_H

@protocol MPRandom, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MPRandomDistribution : NSObject <MPRandom, NSSecureCoding>

 {
    id<MPRandom> *_source;
}


@property (readonly, nonatomic) NSInteger highestValue; // ivar: _highestValue
@property (readonly, nonatomic) NSInteger lowestValue; // ivar: _lowestValue
@property (readonly, nonatomic) NSUInteger numberOfPossibleOutcomes; // ivar: _numberOfPossibleOutcomes


+(BOOL)supportsSecureCoding;
-(NSUInteger)nextIntWithUpperBound:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRandomSource:(id)arg0 lowestValue:(NSInteger)arg1 highestValue:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif