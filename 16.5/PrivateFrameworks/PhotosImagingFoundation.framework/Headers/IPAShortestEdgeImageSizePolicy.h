// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IPASHORTESTEDGEIMAGESIZEPOLICY_H
#define IPASHORTESTEDGEIMAGESIZEPOLICY_H



#import "IPAImageSizePolicy.h"

@interface IPAShortestEdgeImageSizePolicy : IPAImageSizePolicy {
    CGFloat _shortestEdge;
}




-(BOOL)isBestFitPolicy;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithShortestEdge:(CGFloat)arg0 ;
-(struct CGSize )transformSize:(struct CGSize )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif