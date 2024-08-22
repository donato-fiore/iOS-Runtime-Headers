// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDDRAWABLELAYOUT_H
#define TSDDRAWABLELAYOUT_H

@class TSUBezierPath, NSString;
@protocol TSDWrappable;


#import "TSDLayout.h"
#import "TSDWrapSegments.h"
#import "TSDLayoutGeometry.h"

@interface TSDDrawableLayout : TSDLayout <TSDWrappable>

 {
    TSUBezierPath *mCachedWrapPath;
    TSDWrapSegments *mCachedWrapSegments;
    TSUBezierPath *mCachedPathForClippingConnectionLines;
    TSUBezierPath *mCachedExteriorWrapPath;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) TSDLayoutGeometry *geometry;
@property (readonly, nonatomic) BOOL hasAlpha;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)allowsConnections;
-(BOOL)isHTMLWrap;
-(id)i_computeWrapPath;
-(id)i_computeWrapPathClosed:(BOOL)arg0 ;
-(id)i_wrapPath;
-(id)i_wrapPathIncludingTitleAndCaption;
-(id)p_exteriorTextWrapPath;
-(id)pathForClippingConnectionLines;
-(id)visibleGeometries;
-(id)wrapPath;
-(id)wrapSegments;
-(int)wrapDirection;
-(int)wrapFitType;
-(int)wrapType;
-(struct CGRect )boundsInRoot;
-(struct CGRect )boundsInfluencingExteriorWrap;
-(void)dragBy:(struct CGPoint )arg0 ;
-(void)i_invalidateWrap;
-(void)inRootGeometryChangedBy:(struct CGAffineTransform )arg0 ;
-(void)invalidate;
-(void)invalidateExteriorWrap;
-(void)invalidateInRootGeometry;
-(void)invalidateParentForWrap;
-(void)p_addVisibleGeometriesFromInfo:(id)arg0 intoArray:(id)arg1 withTransform:(struct CGAffineTransform )arg2 ;
-(void)parentDidChange;
-(void)processChangedProperty:(int)arg0 ;


@end


#endif