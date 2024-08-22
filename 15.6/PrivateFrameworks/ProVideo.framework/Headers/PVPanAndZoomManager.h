// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PVPANANDZOOMMANAGER_H
#define PVPANANDZOOMMANAGER_H

@class NSTimer;

#import <Foundation/Foundation.h>


@interface PVPanAndZoomManager : NSObject {
    PVTransformAnimationInfo _workingTransformTranslate;
    PVTransformAnimationInfo _workingTransformScale;
    PVTransformAnimationInfo _workingTransformRotate;
    BOOL _isEditingTranslate;
    BOOL _isEditingScale;
    BOOL _isEditingRotate;
    CGFloat _mediaAspectRatio;
    CGFloat _viewAspectRatio;
    CGFloat _minScale;
    CGFloat _adjustedMaxScale;
    BOOL _skipFirstSnap;
    CGFloat _scaleWhileSnapped;
    NSTimer *_snapTimer;
}


@property (nonatomic) BOOL disableRotation; // ivar: _disableRotation
@property (nonatomic) BOOL disableScale; // ivar: _disableScale
@property (nonatomic) BOOL disableTranslation; // ivar: _disableTranslation
@property (nonatomic) int fillMode; // ivar: _fillMode
@property (nonatomic) BOOL isTranslationDirectionLockEnabled; // ivar: _isTranslationDirectionLockEnabled
@property (nonatomic) BOOL isZoomSnapEnabled; // ivar: _isZoomSnapEnabled
@property (nonatomic) CGFloat maxScale; // ivar: _maxScale
@property (nonatomic) CGSize mediaSize; // ivar: _mediaSize
@property (nonatomic) CGFloat translationDirectionLockThreshold; // ivar: _translationDirectionLockThreshold
@property (nonatomic) CGSize viewSize; // ivar: _viewSize
@property (nonatomic) CGFloat zoomSnapScale; // ivar: _zoomSnapScale
@property (nonatomic) CGFloat zoomSnapThreshold; // ivar: _zoomSnapThreshold


+(CGFloat)calculateMaxScale:(CGFloat)arg0 forMediaAspectRatio:(CGFloat)arg1 viewAspectRatio:(CGFloat)arg2 fillMode:(int)arg3 ;
+(CGFloat)calculateMinScaleForMediaAspectRatio:(CGFloat)arg0 viewAspectRatio:(CGFloat)arg1 fillMode:(int)arg2 ;
+(CGFloat)maximumNormalizedPositionInAxisForScale:(CGFloat)arg0 minScale:(CGFloat)arg1 isMediaAxisNormal:(BOOL)arg2 isPositionBelowZero:(BOOL)arg3 ;
+(id)panAndZoomManagerWithMediaSize:(struct CGSize )arg0 viewSize:(struct CGSize )arg1 fillMode:(int)arg2 maxScale:(CGFloat)arg3 ;
+(struct CGPoint )adjustPositionToKeepMediaInViewBounds:(struct CGPoint )arg0 scale:(CGFloat)arg1 minScale:(CGFloat)arg2 mediaAspectRatio:(CGFloat)arg3 viewAspectRatio:(CGFloat)arg4 fillMode:(int)arg5 outNeedsUpdate:(*BOOL)arg6 ;
+(struct CGPoint )maximumNormalizedPositionForScale:(CGFloat)arg0 minScale:(CGFloat)arg1 position:(struct CGPoint )arg2 mediaAspectRatio:(CGFloat)arg3 viewAspectRatio:(CGFloat)arg4 fillMode:(int)arg5 ;
+(struct PVTransformAnimationInfo )transformAnimInfoForScale:(CGFloat)arg0 atNormalizedLocationInView:(struct CGPoint )arg1 minScale:(CGFloat)arg2 currentScale:(CGFloat)arg3 currentTranslation:(struct CGPoint )arg4 mediaAspectRatio:(CGFloat)arg5 viewAspectRatio:(CGFloat)arg6 fillMode:(int)arg7 outNeedsUpdate:(*BOOL)arg8 ;
-(BOOL)isEditing;
-(BOOL)isEditingTransformType:(int)arg0 ;
-(id)initWithMediaSize:(struct CGSize )arg0 viewSize:(struct CGSize )arg1 fillMode:(int)arg2 maxScale:(CGFloat)arg3 ;
-(struct PVTransformAnimationInfo )endEditingTransformForType:(int)arg0 ;
-(struct PVTransformAnimationInfo )updateRotation:(CGFloat)arg0 normalizedLocationInView:(struct CGPoint )arg1 outNeedsUpdate:(*BOOL)arg2 ;
-(struct PVTransformAnimationInfo )updateScale:(CGFloat)arg0 normalizedLocationInView:(struct CGPoint )arg1 outNeedsUpdate:(*BOOL)arg2 ;
-(struct PVTransformAnimationInfo )updateTranslation:(struct CGPoint )arg0 outNeedsUpdate:(*BOOL)arg1 ;
-(void)beginEditingTransform:(struct PVTransformAnimationInfo )arg0 transformType:(int)arg1 updateOtherWorkingTransforms:(BOOL)arg2 ;
-(void)cancelEditing;
-(void)cancelSnapTimer;
-(void)onSnapTimer:(id)arg0 ;
-(void)setIsEditingTransform:(BOOL)arg0 type:(int)arg1 ;
-(void)updateMaxScale;
-(void)updateMediaAspectRatio;
-(void)updateMinScale;
-(void)updateViewAspectRatio;


@end


#endif