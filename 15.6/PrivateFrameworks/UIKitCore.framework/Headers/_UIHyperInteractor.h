// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIHYPERINTERACTOR_H
#define _UIHYPERINTERACTOR_H

@protocol _UIHyperAnimator, _UIHyperInteractorDelegate, _UIHyperExtender, _UIHyperregion;

#import <Foundation/Foundation.h>


@interface _UIHyperInteractor : NSObject {
    *CGFloat __unconstrainedPoint;
    *CGFloat __translatedUnconstrainedPoint;
    *CGFloat __velocity;
    *CGFloat __effectiveVelocity;
    *CGFloat __projectedPoint;
    *CGFloat __closestPoint;
    BOOL __rubberBanding;
    *CGFloat __unconstrainedVector;
    *CGFloat __extentVector;
    CGFloat __extent;
    *CGFloat __unconstrainedExtentVector;
    CGFloat __unconstrainedExtent;
    CGFloat __constrainedFraction;
    *CGFloat __constrainedPoint;
    *CGFloat __constrainedVelocity;
    *CGFloat __overridePresentationPoint;
    *CGFloat __presentationPoint;
    ? _clean;
}


@property (retain, nonatomic, setter=_setAnimator:) NSObject<_UIHyperAnimator> *_animator; // ivar: __animator
@property (readonly, nonatomic) *CGFloat _closestPoint;
@property (readonly, nonatomic) CGFloat _constrainedFraction;
@property (readonly, nonatomic) *CGFloat _constrainedPoint;
@property (readonly, nonatomic) *CGFloat _constrainedVelocity;
@property (nonatomic, setter=_setDecelerationRate:) CGFloat _decelerationRate; // ivar: __decelerationRate
@property (weak, nonatomic, setter=_setDelegate:) NSObject<_UIHyperInteractorDelegate> *_delegate; // ivar: __delegate
@property (readonly, nonatomic) NSUInteger _dimensions; // ivar: __dimensions
@property (readonly, nonatomic) *CGFloat _effectiveVelocity;
@property (retain, nonatomic, setter=_setExtender:) NSObject<_UIHyperExtender> *_extender; // ivar: __extender
@property (copy, nonatomic, setter=_setExtenderGetter:) id *_extenderGetter; // ivar: __extenderGetter
@property (readonly, nonatomic) CGFloat _extent;
@property (readonly, nonatomic) *CGFloat _extentVector;
@property (readonly, nonatomic) *CGFloat _initialTranslation; // ivar: __initialTranslation
@property (readonly, nonatomic, getter=_isInteractive) BOOL _interactive; // ivar: __interactive
@property (readonly, nonatomic) *CGFloat _lastConstrainedPoint; // ivar: __lastConstrainedPoint
@property (nonatomic, setter=_setMinimumSpeed:) CGFloat _minimumSpeed; // ivar: __minimumSpeed
@property (readonly, nonatomic) *CGFloat _overridePresentationPoint;
@property (nonatomic, getter=_isOverridingPresentationPoint, setter=_setOverridingPresentationPoint:) BOOL _overridingPresentationPoint; // ivar: __overridingPresentationPoint
@property (readonly, nonatomic) *CGFloat _presentationPoint;
@property (copy, nonatomic, setter=_setPresentationPointWasInvalidated:) id *_presentationPointWasInvalidated; // ivar: __presentationPointWasInvalidated
@property (readonly, nonatomic) *CGFloat _projectedPoint;
@property (retain, nonatomic, setter=_setRegion:) NSObject<_UIHyperregion> *_region; // ivar: __region
@property (copy, nonatomic, setter=_setRegionGetter:) id *_regionGetter; // ivar: __regionGetter
@property (nonatomic, setter=_setRubberBandCoefficient:) CGFloat _rubberBandCoefficient; // ivar: __rubberBandCoefficient
@property (readonly, nonatomic, getter=_isRubberBanding) BOOL _rubberBanding;
@property (readonly, nonatomic) *CGFloat _translatedUnconstrainedPoint;
@property (readonly, nonatomic) *CGFloat _translation; // ivar: __translation
@property (readonly, nonatomic) CGFloat _unconstrainedExtent;
@property (readonly, nonatomic) *CGFloat _unconstrainedExtentVector;
@property (readonly, nonatomic) *CGFloat _unconstrainedPoint;
@property (copy, nonatomic, setter=_setUnconstrainedPointGetter:) id *_unconstrainedPointGetter; // ivar: __unconstrainedPointGetter
@property (readonly, nonatomic) *CGFloat _unconstrainedVector;
@property (readonly, nonatomic) *CGFloat _velocity;


-(id)description;
-(id)initWithDimensions:(NSUInteger)arg0 ;
-(void)_commitTranslation;
-(void)_copyInitialTranslation:(*CGFloat)arg0 ;
-(void)_copyOverridePresentationPoint:(*CGFloat)arg0 ;
-(void)_copyTranslation:(*CGFloat)arg0 ;
-(void)_copyUnconstrainedPoint:(*CGFloat)arg0 ;
-(void)_copyVelocity:(*CGFloat)arg0 ;
-(void)_getUnconstrainedPoint:(*CGFloat)arg0 forConstrainedPoint:(*CGFloat)arg1 ;
-(void)_interactionBegan;
-(void)_interactionChangedCopyingTranslation:(*CGFloat)arg0 velocity:(*CGFloat)arg1 ;
-(void)_interactionChangedCopyingTranslation:(*CGFloat)arg0 velocity:(*CGFloat)arg1 mutatingState:(id)arg2 ;
// -(void)_interactionChangedMutatingTranslation:(id)arg0 velocity:(unk)arg1  ;
// -(void)_interactionChangedMutatingTranslation:(id)arg0 velocity:(unk)arg1 mutatingState:(id)arg2  ;
-(void)_interactionEnded;
-(void)_interactionEndedMutatingState:(id)arg0 ;
-(void)_invalidateExtender;
-(void)_invalidateRegion;
-(void)_invalidateUnconstrainedPoint;
-(void)_mutateInitialTranslation:(id)arg0 ;
-(void)_mutateOverridePresentationPoint:(id)arg0 ;
-(void)_mutateTranslation:(id)arg0 ;
-(void)_mutateUnconstrainedPoint:(id)arg0 ;
-(void)_mutateVelocity:(id)arg0 ;
-(void)_setInteractive:(BOOL)arg0 ;
-(void)_setInternalExtender:(id)arg0 ;
-(void)_setInternalRegion:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif