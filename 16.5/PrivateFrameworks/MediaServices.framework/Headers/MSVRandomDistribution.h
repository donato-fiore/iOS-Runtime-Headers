// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSVRANDOMDISTRIBUTION_H
#define MSVRANDOMDISTRIBUTION_H

@protocol MSVRandom, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MSVRandomDistribution : NSObject <MSVRandom, NSSecureCoding>

 {
    id<MSVRandom> *_source;
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