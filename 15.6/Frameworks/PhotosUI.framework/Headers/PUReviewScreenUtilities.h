// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUREVIEWSCREENUTILITIES_H
#define PUREVIEWSCREENUTILITIES_H


#import <Foundation/Foundation.h>


@interface PUReviewScreenUtilities : NSObject



+(BOOL)useCompactControlBarButtonsForReferenceBounds:(struct CGRect )arg0 ;
+(CGFloat)_cameraBottomBarHeightForSizeSpec:(struct ? )arg0 ;
+(CGFloat)_cameraBottomBarWidthForSizeSpec:(struct ? )arg0 ;
+(CGFloat)_cameraTopBarHeightForSizeSpec:(struct ? )arg0 ;
+(CGFloat)_reviewScreenControlBarHeightForSizeSpec:(struct ? )arg0 ;
+(CGFloat)_reviewScreenControlBarWidthForSizeSpec:(struct ? )arg0 ;
+(CGFloat)_reviewScreenScrubberBarHeightForSizeClass:(NSUInteger)arg0 ;
+(CGFloat)_reviewScreenTopBarHeightForSizeSpec:(struct ? )arg0 ;
+(NSUInteger)doneButtonStyleForReferenceBounds:(struct CGRect )arg0 ;
+(struct ? )_geometryForBarFrame:(struct CGRect )arg0 inReferenceBounds:(struct CGRect )arg1 orientation:(NSInteger)arg2 ;
+(struct ? )_geometryForCameraTopBarFrame:(struct CGRect )arg0 inReferenceBounds:(struct CGRect )arg1 forContentSize:(struct CGSize )arg2 orientation:(NSInteger)arg3 ;
+(struct ? )cameraBottomBarGeometryForReferenceBounds:(struct CGRect )arg0 withOrientation:(NSInteger)arg1 ;
+(struct ? )cameraContentGeometryForReferenceBounds:(struct CGRect )arg0 forContentSize:(struct CGSize )arg1 withOrientation:(NSInteger)arg2 ;
+(struct ? )cameraContentGeometryForReferenceBounds:(struct CGRect )arg0 forContentSize:(struct CGSize )arg1 withOrientation:(NSInteger)arg2 shouldShiftPreviewForUtilityBar:(BOOL)arg3 ;
+(struct ? )cameraTopBarGeometryForReferenceBounds:(struct CGRect )arg0 forContentSize:(struct CGSize )arg1 withOrientation:(NSInteger)arg2 ;
+(struct ? )orientedGeometryForFrame:(struct CGRect )arg0 inBounds:(struct CGRect )arg1 orientation:(NSInteger)arg2 ;
+(struct ? )reviewScreenContentGeometryForReferenceBounds:(struct CGRect )arg0 forContentSize:(struct CGSize )arg1 withOrientation:(NSInteger)arg2 ;
+(struct ? )reviewScreenControlBarGeometryForReferenceBounds:(struct CGRect )arg0 withOrientation:(NSInteger)arg1 ;
+(struct ? )reviewScreenScrubberBarGeometryForReferenceBounds:(struct CGRect )arg0 withOrientation:(NSInteger)arg1 ;
+(struct ? )reviewScreenScrubberBarGeometryForReferenceBounds:(struct CGRect )arg0 withOrientation:(NSInteger)arg1 safeAreaInsets:(struct UIEdgeInsets )arg2 ;
+(struct ? )reviewScreenTopBarGeometryForReferenceBounds:(struct CGRect )arg0 withOrientation:(NSInteger)arg1 ;
+(struct CGAffineTransform )_transformForRotationAboutCenterOfReferenceBounds:(struct CGRect )arg0 withOrientationTransform:(struct CGAffineTransform )arg1 ;
+(struct CGRect )_orientedBoundsForReferenceBounds:(struct CGRect )arg0 sizeClass:(NSUInteger)arg1 ;
+(struct CGRect )_portraitBoundsForReferenceBounds:(struct CGRect )arg0 ;
+(struct CGRect )cameraBottomBarFrameForReferenceBounds:(struct CGRect )arg0 ;
+(struct CGRect )cameraContentFrameForContentAspectRatio:(CGFloat)arg0 referenceBounds:(struct CGRect )arg1 ;
+(struct CGRect )cameraContentFrameForContentAspectRatio:(CGFloat)arg0 referenceBounds:(struct CGRect )arg1 shouldShiftPreviewForUtilityBar:(BOOL)arg2 ;
+(struct CGRect )cameraTopBarFrameForReferenceBounds:(struct CGRect )arg0 ;
+(struct CGRect )reviewScreenControlBarFrameForReferenceBounds:(struct CGRect )arg0 ;
+(struct CGRect )reviewScreenScrubberBarFrameForReferenceBounds:(struct CGRect )arg0 ;
+(struct CGRect )reviewScreenScrubberBarFrameForReferenceBounds:(struct CGRect )arg0 safeAreaInsets:(struct UIEdgeInsets )arg1 ;
+(struct CGRect )reviewScreenTopBarFrameForReferenceBounds:(struct CGRect )arg0 ;
+(struct UIEdgeInsets )_layoutMarginInsetsForSizeSpec:(struct ? )arg0 ;


@end


#endif