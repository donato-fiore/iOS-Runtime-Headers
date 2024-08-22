// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRTEXTFEATUREORDERV1_H
#define CRTEXTFEATUREORDERV1_H

@protocol CRTextFeatureOrdering;

#import <Foundation/Foundation.h>


@interface CRTextFeatureOrderV1 : NSObject <CRTextFeatureOrdering>



@property CGFloat angleThresholdForRotatedCrops; // ivar: _angleThresholdForRotatedCrops


-(id)initWithAngleThresholdForRotatedCrops:(CGFloat)arg0 ;
-(id)orderAndGroupFeatures:(id)arg0 imageSize:(struct CGSize )arg1 ;


@end


#endif