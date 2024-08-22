// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BIASESTIMATOROUTPUTS_H
#define BIASESTIMATOROUTPUTS_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BiasEstimatorOutputs : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) CGFloat correctedRange; // ivar: _correctedRange
@property (copy, nonatomic) NSArray *outProbabilities; // ivar: _outProbabilities
@property (nonatomic) CGFloat rawRange; // ivar: _rawRange


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBiasEstimatorOutputs:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOuputProbabilities:(id)arg0 rawRange:(CGFloat)arg1 correctedRange:(CGFloat)arg2 ;
-(id)populateOrderedBiasEstimatorOutputs;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif