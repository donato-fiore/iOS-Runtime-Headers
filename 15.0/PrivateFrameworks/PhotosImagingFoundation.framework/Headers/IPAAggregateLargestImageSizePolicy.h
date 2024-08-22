// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IPAAGGREGATELARGESTIMAGESIZEPOLICY_H
#define IPAAGGREGATELARGESTIMAGESIZEPOLICY_H

@class NSArray;


#import "IPAImageSizePolicy.h"

@interface IPAAggregateLargestImageSizePolicy : IPAImageSizePolicy {
    NSArray *_policies;
}




-(BOOL)isBestFitPolicy;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)transformScaleForSize:(struct CGSize )arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPolicies:(id)arg0 ;
-(struct CGSize )transformSize:(struct CGSize )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif