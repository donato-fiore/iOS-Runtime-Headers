// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALAYER_H
#define CALAYER_H

@class NSDictionary, NSArray, NSString;
@protocol CAPropertyInfo, NSSecureCoding, CAMediaTiming, CALayerDelegate;

#import <Foundation/Foundation.h>

#import "CALayer.h"
#import "CAMeshTransform.h"

@interface CALayer : NSObject <CAPropertyInfo, NSSecureCoding, CAMediaTiming>

 {
    _CALayerIvars _attr;
}


@property BOOL acceleratesDrawing;
@property (copy) NSDictionary *actions;
@property BOOL allowsDisplayCompositing;
@property BOOL allowsEdgeAntialiasing;
@property BOOL allowsGroupBlending;
@property BOOL allowsGroupOpacity;
@property BOOL allowsHitTesting;
@property CGPoint anchorPoint;
@property CGFloat anchorPointZ;
@property BOOL autoreverses;
@property *CGColor backgroundColor;
@property CGSize backgroundColorPhase;
@property (copy) NSArray *backgroundFilters;
@property CGFloat beginTime;
@property *CGColor borderColor;
@property CGFloat borderWidth;
@property CGRect bounds;
@property BOOL canDrawConcurrently;
@property BOOL clearsContext;
@property (retain) id *compositingFilter;
@property (retain) id *contents;
@property BOOL contentsAlignsToPixels;
@property CGRect contentsCenter;
@property BOOL contentsContainsSubtitles;
@property BOOL contentsDither;
@property (copy) NSString *contentsFormat;
@property (copy) NSString *contentsGravity;
@property (readonly) NSInteger contentsGravityEnum;
@property *CGColor contentsMultiplyColor;
@property BOOL contentsOpaque;
@property CGRect contentsRect;
@property CGFloat contentsScale;
@property (copy) NSString *contentsScaling;
@property (copy) NSString *contentsSwizzle;
@property CGAffineTransform contentsTransform;
@property BOOL continuousCorners;
@property (retain) id *cornerContents;
@property CGRect cornerContentsCenter;
@property BOOL cornerContentsMasksEdges;
@property (copy) NSString *cornerCurve;
@property CGFloat cornerRadius;
@property BOOL createsCompositingGroup;
@property BOOL definesDisplayRegionOfInterest;
@property (weak) NSObject<CALayerDelegate> *delegate;
@property unsigned int disableUpdateMask;
@property (getter=isDoubleSided) BOOL doubleSided;
@property BOOL drawsAsynchronously;
@property CGFloat duration;
@property unsigned int edgeAntialiasingMask;
@property (copy) NSString *fillMode;
@property (copy) NSArray *filters;
@property BOOL flipsHorizontalAxis;
@property CGRect frame;
@property (getter=isFrozen) BOOL frozen;
@property float gain;
@property (getter=isGeometryFlipped) BOOL geometryFlipped;
@property (getter=isHidden) BOOL hidden;
@property BOOL hitTestsAsOpaque;
@property BOOL hitTestsContentsAlphaChannel;
@property BOOL inheritsTiming;
@property BOOL invertsShadow;
@property BOOL literalContentsCenter;
@property (copy) NSString *magnificationFilter;
@property (retain) CALayer *mask;
@property NSUInteger maskedCorners;
@property BOOL masksToBounds;
@property (copy) CAMeshTransform *meshTransform;
@property (copy) NSString *minificationFilter;
@property float minificationFilterBias;
@property CGFloat motionBlurAmount;
@property (copy) NSString *name;
@property BOOL needsDisplayOnBoundsChange;
@property BOOL needsLayoutOnGeometryChange;
@property float opacity;
@property (getter=isOpaque) BOOL opaque;
@property CGPoint position;
@property BOOL preloadsCache;
@property (copy) NSArray *presentationModifiers;
@property BOOL rasterizationPrefersDisplayCompositing;
@property CGFloat rasterizationScale;
@property float repeatCount;
@property CGFloat repeatDuration;
@property (copy) NSString *securityMode;
@property (getter=isSeparated) BOOL separated;
@property (readonly) NSDictionary *separatedOptions;
@property unsigned char separatedState;
@property *CGColor shadowColor;
@property CGSize shadowOffset;
@property float shadowOpacity;
@property *CGPath shadowPath;
@property BOOL shadowPathIsBounds;
@property CGFloat shadowRadius;
@property BOOL shouldRasterize;
@property CGSize sizeRequisition;
@property BOOL sortsSublayers;
@property float speed;
@property (copy) NSArray *stateTransitions;
@property (copy) NSArray *states;
@property (copy) NSDictionary *style;
@property CATransform3D sublayerTransform;
@property (copy) NSArray *sublayers;
@property (readonly) CALayer *superlayer;
@property CGFloat timeOffset;
@property BOOL toneMapToStandardDynamicRange;
@property CATransform3D transform;
@property BOOL treatRec709AsSRGB;
@property NSObject<CALayerDelegate> *unsafeUnretainedDelegate;
@property (readonly) CGRect visibleRect;
@property BOOL wantsExtendedDynamicRangeContent;
@property CGFloat zPosition;


+(*unk)CA_getterForProperty:(struct _CAPropertyInfo *)arg0 ;
+(*unk)CA_setterForProperty:(struct _CAPropertyInfo *)arg0 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg0 ;
+(BOOL)_hasRenderLayerSubclass;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(BOOL)needsDisplayForKey:(id)arg0 ;
+(BOOL)needsLayoutForKey:(id)arg0 ;
+(BOOL)resolveInstanceMethod:(SEL)arg0 ;
+(BOOL)supportsSecureCoding;
+(CGFloat)cornerCurveExpansionFactor:(id)arg0 ;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)defaultActionForKey:(id)arg0 ;
+(id)defaultValueForKey:(id)arg0 ;
+(id)layer;
+(id)properties;
+(void)CAMLParserEndElement:(id)arg0 ;
+(void)CAMLParserStartElement:(id)arg0 ;
+(void)initialize;
-(*void)_copyRenderLayer:(*void)arg0 layerFlags:(unsigned int)arg1 commitFlags:(*unsigned int)arg2 ;
-(*void)observationInfo;
-(*void)regionBeingDrawn;
-(BOOL)CAMLTypeSupportedForKey:(id)arg0 ;
-(BOOL)CA_validateValue:(id)arg0 forKey:(id)arg1 ;
-(BOOL)_canDisplayConcurrently;
-(BOOL)_defersDidBecomeVisiblePostCommit;
-(BOOL)_renderLayerDefinesProperty:(unsigned int)arg0 ;
-(BOOL)_scheduleAnimationTimer;
-(BOOL)allowsWeakReference;
-(BOOL)containsPoint:(struct CGPoint )arg0 ;
-(BOOL)doubleSided;
-(BOOL)drawsMipmapLevels;
-(BOOL)getRendererInfo:(struct _CARenderRendererInfo *)arg0 size:(NSUInteger)arg1 ;
-(BOOL)hasBeenCommitted;
-(BOOL)hidden;
-(BOOL)ignoresHitTesting;
-(BOOL)isDescendantOf:(id)arg0 ;
-(BOOL)isFlipped;
-(BOOL)layoutIsActive;
-(BOOL)needsDisplay;
-(BOOL)needsLayout;
-(BOOL)opaque;
-(BOOL)retainWeakReference;
-(BOOL)shouldArchiveValueForKey:(id)arg0 ;
-(CGFloat)convertTime:(CGFloat)arg0 fromLayer:(id)arg1 ;
-(CGFloat)convertTime:(CGFloat)arg0 toLayer:(id)arg1 ;
-(NSUInteger)retainCount;
-(id)CAMLTypeForKey:(id)arg0 ;
-(id)CA_archivingValueForKey:(id)arg0 ;
-(id)_initWithReference:(id)arg0 ;
-(id)_layoutHash;
-(id)_previousLayoutHash;
-(id)actionForKey:(id)arg0 ;
-(id)ancestorSharedWithLayer:(id)arg0 ;
-(id)animationForKey:(id)arg0 ;
-(id)animationKeys;
-(id)context;
-(id)debugDescription;
-(id)dependentStatesOfState:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 ;
-(id)implicitAnimationForKeyPath:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLayer:(id)arg0 ;
-(id)layerAtTime:(CGFloat)arg0 ;
-(id)layerBeingDrawn;
-(id)modelLayer;
-(id)optimizationOpportunities:(BOOL)arg0 ;
-(id)presentationLayer;
-(id)recursiveDescription;
-(id)retain;
-(id)stateTransitionFrom:(id)arg0 to:(id)arg1 ;
-(id)stateWithName:(id)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(id)valueForKeyPath:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(int)_overrideImageFormat;
-(struct CGAffineTransform )affineTransform;
-(struct CGColorSpace *)_retainColorSpace;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromLayer:(id)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 toLayer:(id)arg1 ;
-(struct CGRect )_visibleRectOfLayer:(id)arg0 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 fromLayer:(id)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 toLayer:(id)arg1 ;
-(struct CGSize )_preferredSize;
-(struct CGSize )preferredFrameSize;
-(struct CGSize )size;
-(unsigned int)_renderImageCopyFlags;
-(unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg0 ;
-(void)CAMLParser:(id)arg0 setValue:(id)arg1 forKey:(id)arg2 ;
-(void)_cancelAnimationTimer;
-(void)_colorSpaceDidChange;
-(void)_contentsFormatDidChange:(id)arg0 ;
-(void)_dealloc;
-(void)_didCommitLayer:(*void)arg0 ;
-(void)_display;
-(void)_prepareContext:(struct CGContext *)arg0 ;
-(void)_renderBackgroundInContext:(struct CGContext *)arg0 ;
-(void)_renderBorderInContext:(struct CGContext *)arg0 ;
-(void)_renderForegroundInContext:(struct CGContext *)arg0 ;
-(void)_renderSublayersInContext:(struct CGContext *)arg0 ;
-(void)_saveCurrentLayoutHash;
-(void)_scrollPoint:(struct CGPoint )arg0 fromLayer:(id)arg1 ;
-(void)_scrollRect:(struct CGRect )arg0 fromLayer:(id)arg1 ;
-(void)_setPreviousLayoutHash:(id)arg0 ;
-(void)_validateLayoutHashHasChangedWithLayoutTime:(CGFloat)arg0 ;
-(void)addAnimation:(id)arg0 forKey:(id)arg1 ;
-(void)addPresentationModifier:(id)arg0 ;
-(void)addState:(id)arg0 ;
-(void)addSublayer:(id)arg0 ;
-(void)clearHasBeenCommitted;
-(void)dealloc;
-(void)display;
-(void)displayIfNeeded;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)encodeWithCAMLWriter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)insertState:(id)arg0 atIndex:(unsigned int)arg1 ;
-(void)insertSublayer:(id)arg0 above:(id)arg1 ;
-(void)insertSublayer:(id)arg0 atIndex:(unsigned int)arg1 ;
-(void)insertSublayer:(id)arg0 below:(id)arg1 ;
-(void)invalidateContents;
-(void)layerDidBecomeVisible:(BOOL)arg0 ;
-(void)layoutBelowIfNeeded;
-(void)layoutIfNeeded;
-(void)layoutSublayers;
-(void)release;
-(void)reloadValueForKeyPath:(id)arg0 ;
-(void)removeAllAnimations;
-(void)removeAnimationForKey:(id)arg0 ;
-(void)removeFromSuperlayer;
-(void)removePresentationModifier:(id)arg0 ;
-(void)removeState:(id)arg0 ;
-(void)renderInContext:(struct CGContext *)arg0 ;
-(void)replaceSublayer:(id)arg0 with:(id)arg1 ;
-(void)scrollPoint:(struct CGPoint )arg0 ;
-(void)scrollRectToVisible:(struct CGRect )arg0 ;
-(void)setAffineTransform:(struct CGAffineTransform )arg0 ;
-(void)setFlipped:(BOOL)arg0 ;
-(void)setNeedsDisplay;
-(void)setNeedsDisplayInRect:(struct CGRect )arg0 ;
-(void)setNeedsLayout;
-(void)setObservationInfo:(*void)arg0 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;
-(void)setValue:(id)arg0 forKeyPath:(id)arg1 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif