// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLPROBABILITYINFO_H
#define NLPROBABILITYINFO_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NLProbabilityInfo : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BOOL isValid; // ivar: _isValid
@property (readonly, nonatomic) CGFloat log10Probability; // ivar: _log10Probability
@property (readonly, nonatomic) CGFloat probability; // ivar: _probability
@property (readonly, nonatomic) NSUInteger probabilityFlags; // ivar: _probabilityFlags


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInvalidProbability;
-(id)initWithLog10Probability:(CGFloat)arg0 flags:(NSUInteger)arg1 ;
-(id)initWithProbability:(CGFloat)arg0 flags:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif