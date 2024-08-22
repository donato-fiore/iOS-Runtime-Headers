// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYSMARTGRADIENTADJUSTMENT_H
#define PXSTORYSMARTGRADIENTADJUSTMENT_H

@class NSString;
@protocol PXGDisplayAssetAdjustment;

#import <Foundation/Foundation.h>


@interface PXStorySmartGradientAdjustment : NSObject <PXGDisplayAssetAdjustment>



@property (readonly, nonatomic) BOOL allowsUnadjustedOpportunisticDelivery;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGRect normalizedSourceRect; // ivar: _normalizedSourceRect
@property (nonatomic) CGFloat simpleBlurEdgeStretch; // ivar: _simpleBlurEdgeStretch
@property (nonatomic) CGFloat simpleBlurExposure; // ivar: _simpleBlurExposure
@property (nonatomic) CGFloat simpleBlurRadius; // ivar: _simpleBlurRadius
@property (nonatomic) BOOL simpleBlurRepeatEdges; // ivar: _simpleBlurRepeatEdges
@property (readonly) Class superclass;
@property (nonatomic) CGSize targetSize; // ivar: _targetSize
@property (nonatomic) BOOL useSimpleBlur; // ivar: _useSimpleBlur
@property (nonatomic) BOOL useSmartColor; // ivar: _useSmartColor
@property (readonly, nonatomic) BOOL wantsSingleHighQualityDelivery;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDisplayAssetAdjustment:(id)arg0 ;
-(id)applyToImage:(id)arg0 targetSize:(struct CGSize )arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(struct CGSize )requestSizeForProposedTargetSize:(struct CGSize )arg0 ;


@end


#endif