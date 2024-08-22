// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRCHINESELOWCONFIDENCETEXTFEATUREFILTERV2_H
#define CRCHINESELOWCONFIDENCETEXTFEATUREFILTERV2_H

@protocol CRSingleTextFeatureFiltering;

#import <Foundation/Foundation.h>


@interface CRChineseLowConfidenceTextFeatureFilterV2 : NSObject <CRSingleTextFeatureFiltering>





-(BOOL)shouldFilterFeature:(id)arg0 ;
-(BOOL)shouldFilterFeatureBasedOnGeometry:(id)arg0 ;


@end


#endif