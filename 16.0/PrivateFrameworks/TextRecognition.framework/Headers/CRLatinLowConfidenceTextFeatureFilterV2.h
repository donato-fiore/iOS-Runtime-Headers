// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRLATINLOWCONFIDENCETEXTFEATUREFILTERV2_H
#define CRLATINLOWCONFIDENCETEXTFEATUREFILTERV2_H

@protocol CRSingleTextFeatureFiltering;

#import <Foundation/Foundation.h>


@interface CRLatinLowConfidenceTextFeatureFilterV2 : NSObject <CRSingleTextFeatureFiltering>





-(BOOL)shouldFilterFeature:(id)arg0 ;
-(BOOL)shouldFilterFeatureBasedOnGeometry:(id)arg0 ;


@end


#endif