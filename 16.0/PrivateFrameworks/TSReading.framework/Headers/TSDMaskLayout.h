// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDMASKLAYOUT_H
#define TSDMASKLAYOUT_H



#import "TSDLayout.h"
#import "TSDInfoGeometry.h"
#import "TSDPathSource.h"
#import "TSDImageLayout.h"

@interface TSDMaskLayout : TSDLayout {
    ? mMaskInvalidFlags;
    *CGPath mCachedPath;
    *CGPath mCachedPathNoScale;
    CGRect mCachedTightPathBounds;
    CGRect mCachedTightPathBoundsNoScale;
    TSDInfoGeometry *mDynamicInfoGeometry;
    TSDPathSource *mDynamicPathSource;
    TSDPathSource *mPathSourceWithProvidedSize;
    BOOL mScalingInMaskMode;
}


@property (readonly, nonatomic) BOOL hasSmartPath;
@property (readonly, nonatomic) TSDImageLayout *imageLayout;
@property (nonatomic) CGFloat pathScale; // ivar: mPathScale


-(BOOL)shouldDisplayGuides;
-(BOOL)shouldSnapWhileResizing;
-(NSUInteger)numberOfControlKnobs;
-(id)computeLayoutGeometry;
-(id)dependentLayouts;
-(id)infoGeometry;
-(id)initWithInfo:(id)arg0 ;
-(id)maskInfo;
-(id)pathSource;
-(struct CGAffineTransform )affineTransformForTightPathBounds;
-(struct CGAffineTransform )layoutTransformInInfoSpace:(struct CGAffineTransform )arg0 ;
-(struct CGAffineTransform )originalTransformForProvidingGuides;
-(struct CGPath *)p_cachedPath;
-(struct CGPath *)p_cachedPathNoScale;
-(struct CGPath *)path;
-(struct CGPoint )getControlKnobPosition:(NSUInteger)arg0 ;
-(struct CGRect )alignmentFrame;
-(struct CGRect )alignmentFrameForProvidingGuidesInRoot;
-(struct CGRect )p_cachedTightPathBounds;
-(struct CGRect )p_cachedTightPathBoundsNoScale;
-(struct CGRect )pathBounds;
-(void)beginDynamicOperation;
-(void)dealloc;
-(void)dragBy:(struct CGPoint )arg0 ;
-(void)dynamicMovePathKnobDidBegin;
-(void)dynamicallyMovedSmartShapeKnobTo:(struct CGPoint )arg0 withTracker:(id)arg1 ;
-(void)endDynamicOperation;
-(void)invalidate;
-(void)invalidatePath;
-(void)maskModeScaleDidBegin;
-(void)maskModeScaleDidEnd;
-(void)p_calculateCachedPathIfNecessary;
-(void)p_calculateTightPathBoundsIfNecessary;
-(void)p_createDynamicCopies;
-(void)p_destroyDynamicCopies;
-(void)p_setDynamicInfoGeometry:(id)arg0 ;
-(void)processChangedProperty:(int)arg0 ;
-(void)resizeWithTransform:(struct CGAffineTransform )arg0 asChild:(BOOL)arg1 ;
-(void)setControlKnobPosition:(NSUInteger)arg0 toPoint:(struct CGPoint )arg1 ;
-(void)takeScaledMaskGeometry:(id)arg0 ;


@end


#endif