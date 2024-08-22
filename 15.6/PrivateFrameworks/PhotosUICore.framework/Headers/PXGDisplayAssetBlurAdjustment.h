// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGDISPLAYASSETBLURADJUSTMENT_H
#define PXGDISPLAYASSETBLURADJUSTMENT_H

@class NSString;
@protocol PXGDisplayAssetAdjustment;

#import <Foundation/Foundation.h>


@interface PXGDisplayAssetBlurAdjustment : NSObject <PXGDisplayAssetAdjustment>



@property (readonly, nonatomic) BOOL allowsUnadjustedOpportunisticDelivery;
@property (readonly, nonatomic) CGFloat blurRadius; // ivar: _blurRadius
@property (readonly, nonatomic) CGFloat darkeningOverlayOpacity; // ivar: _darkeningOverlayOpacity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wantsSingleHighQualityDelivery;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDisplayAssetAdjustment:(id)arg0 ;
-(NSInteger)contentModeForProposedContentMode:(NSInteger)arg0 ;
-(id)applyToImage:(id)arg0 targetSize:(struct CGSize )arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBlurRadius:(CGFloat)arg0 darkeningOverlayOpacity:(CGFloat)arg1 ;
-(struct CGSize )requestSizeForProposedTargetSize:(struct CGSize )arg0 ;


@end


#endif