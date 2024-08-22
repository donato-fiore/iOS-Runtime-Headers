// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXCONTAINERLAYOUT_H
#define SXCONTAINERLAYOUT_H

@class TSDContainerLayout, TSDWrapPolygon, TSDBezierPath, NSString, NSMutableArray;
@protocol TSDWrappable;



@interface SXContainerLayout : TSDContainerLayout <TSDWrappable>

 {
    TSDWrapPolygon *mCachedWrapPolygon;
    TSDBezierPath *mCachedWrapPath;
    TSDBezierPath *mCachedExternalWrapPath;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAlpha;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *oldchildLayouts; // ivar: _oldchildLayouts
@property (readonly) Class superclass;


-(BOOL)allowsConnections;
-(BOOL)isHTMLWrap;
-(BOOL)supportsInspectorPositioning;
-(id)additionalLayouts;
-(id)childrenForLayout;
-(id)i_computeWrapPath;
-(id)i_computeWrapPathClosed:(BOOL)arg0 ;
-(id)i_exteriorTextWrap;
-(id)i_externalWrapPath;
-(id)i_wrapPath;
-(id)wrapPolygon;
-(int)wrapDirection;
-(int)wrapFitType;
-(int)wrapType;
-(struct CGRect )boundsInRoot;
-(struct CGRect )boundsInfluencingExteriorWrap;
-(void)childLayoutCreated:(id)arg0 ;
-(void)dealloc;
-(void)dragBy:(struct CGPoint )arg0 ;
-(void)i_invalidateWrap;
-(void)invalidate;
-(void)invalidateExteriorWrap;
-(void)invalidateParentForWrap;
-(void)parentDidChange;
-(void)processChangedProperty:(int)arg0 ;
-(void)setGeometry:(id)arg0 ;
-(void)updateChildrenFromInfo;


@end


#endif