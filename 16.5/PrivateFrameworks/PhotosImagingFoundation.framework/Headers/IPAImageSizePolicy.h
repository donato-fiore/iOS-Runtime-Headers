// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IPAIMAGESIZEPOLICY_H
#define IPAIMAGESIZEPOLICY_H

@protocol NSCoding;

#import <Foundation/Foundation.h>


@interface IPAImageSizePolicy : NSObject <NSCoding>





+(id)bestFitPolicyInSize:(struct CGSize )arg0 ;
+(id)bestFitPolicyInSquare:(CGFloat)arg0 ;
+(id)bestFitPolicyShortestEdge:(CGFloat)arg0 ;
+(id)bestFitPolicyThumbnail;
+(id)bestFitPolicyWithEvenTotalPixelCount:(NSInteger)arg0 ;
+(id)bestFitPolicyWithEvenWidthTotalPixelCount:(NSInteger)arg0 ;
+(id)bestFitPolicyWithHeight:(CGFloat)arg0 ;
+(id)bestFitPolicyWithNominalShortSide:(NSInteger)arg0 minLongSide:(NSInteger)arg1 maxLongSide:(NSInteger)arg2 ;
+(id)bestFitPolicyWithTotalPixelCount:(NSInteger)arg0 ;
+(id)bestFitPolicyWithWidth:(CGFloat)arg0 ;
+(id)largestPolicyWithPolicies:(id)arg0 ;
+(id)originalSizePolicy;
+(id)scalePolicyWithScale:(CGFloat)arg0 ;
-(BOOL)isBestFitPolicy;
-(BOOL)isOriginalSizePolicy;
-(CGFloat)transformScaleForSize:(struct CGSize )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(struct CGSize )transformSize:(struct CGSize )arg0 ;
-(struct PFIntSize_st )integralTransformSize:(struct CGSize )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif