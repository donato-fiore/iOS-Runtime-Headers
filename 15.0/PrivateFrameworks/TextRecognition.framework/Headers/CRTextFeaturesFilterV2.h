// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRTEXTFEATURESFILTERV2_H
#define CRTEXTFEATURESFILTERV2_H

@class NSString;
@protocol CRTextFeaturesFiltering, CRSingleTextFeatureFiltering;

#import <Foundation/Foundation.h>


@interface CRTextFeaturesFilterV2 : NSObject <CRTextFeaturesFiltering>



@property (retain) NSObject<CRSingleTextFeatureFiltering> *chineseLowConfidenceFilter; // ivar: _chineseLowConfidenceFilter
@property (retain) NSObject<CRSingleTextFeatureFiltering> *latinLowConfidenceFilter; // ivar: _latinLowConfidenceFilter
@property (retain) NSString *preferredLocale; // ivar: _preferredLocale


-(CGFloat)_distanceFromPoint1:(struct CGPoint )arg0 toPoint2:(struct CGPoint )arg1 ;
-(id)_filterForFeature:(id)arg0 ;
-(id)_imageSpaceGeometryForTextFeatures:(id)arg0 imageSize:(struct CGSize )arg1 ;
-(id)filterBlocks:(id)arg0 imageSize:(struct CGSize )arg1 ;
-(id)filterFeatures:(id)arg0 ;
-(id)initWithLocale:(id)arg0 ;
-(struct CGPoint )_pointInImageSpace:(struct CGPoint )arg0 imageSize:(struct CGSize )arg1 ;


@end


#endif