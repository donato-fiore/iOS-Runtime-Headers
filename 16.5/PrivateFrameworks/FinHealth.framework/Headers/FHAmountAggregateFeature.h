// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FHAMOUNTAGGREGATEFEATURE_H
#define FHAMOUNTAGGREGATEFEATURE_H

@class NSString;


#import "FHAggregateFeature.h"

@interface FHAmountAggregateFeature : FHAggregateFeature

@property (nonatomic) NSUInteger amount; // ivar: _amount
@property (copy, nonatomic) NSString *comparator; // ivar: _comparator


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithAmount:(NSUInteger)arg0 comparator:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif