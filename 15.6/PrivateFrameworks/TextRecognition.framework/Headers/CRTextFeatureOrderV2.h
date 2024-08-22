// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRTEXTFEATUREORDERV2_H
#define CRTEXTFEATUREORDERV2_H

@protocol CRTextFeatureOrdering;

#import <Foundation/Foundation.h>


@interface CRTextFeatureOrderV2 : NSObject <CRTextFeatureOrdering>



@property CGFloat angleThresholdForRotatedCrops; // ivar: _angleThresholdForRotatedCrops
@property NSInteger textFeatureOrderMode; // ivar: _textFeatureOrderMode


+(struct CGPoint )_normalizePoint:(struct CGPoint )arg0 imageSize:(struct CGSize )arg1 ;
-(float)getFeaturesGlobalAngle:(id)arg0 ;
-(float)getQuadrantOrientation:(id)arg0 ;
-(id)initWithAngleThresholdForRotatedCrops:(CGFloat)arg0 ;
-(id)orderAndGroupFeatures:(id)arg0 imageSize:(struct CGSize )arg1 ;
-(id)singleCTLDGroupingPass:(struct CRConstrainedTextLineDetectionImpl *)arg0 textFeatures:(id)arg1 imageSize:(struct CGSize )arg2 ;
-(struct CRConstrainedTextLineDetectionImpl )createCoarseCTLD;
-(struct CRConstrainedTextLineDetectionImpl )createFineCTLD;
-(struct CTLDRegion )CTLDRegionFromCRTextFeature:(id)arg0 index:(int)arg1 imageSize:(struct CGSize )arg2 rotationAngle:(float)arg3 ;
-(void)enforceQuadrilateralOrder:(struct CGPoint *)arg0 ;


@end


#endif