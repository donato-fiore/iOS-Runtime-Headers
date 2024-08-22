// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDFREEHANDDRAWINGLAYOUT_H
#define TSDFREEHANDDRAWINGLAYOUT_H



#import "TSDGroupLayout.h"
#import "TSDFreehandDrawingInfo.h"

@interface TSDFreehandDrawingLayout : TSDGroupLayout

@property (readonly, nonatomic) CGRect frameForMovieExport;
@property (readonly, nonatomic) TSDFreehandDrawingInfo *freehandInfo;
@property (readonly, nonatomic) CGFloat i_scaleForInlineClampingChildLayouts; // ivar: _scaleForInlineClampingChildLayouts
@property (readonly, nonatomic) CGFloat opacity;
@property (nonatomic) CGFloat p_dynamicOpacity; // ivar: _dynamicOpacity
@property (nonatomic, getter=p_isUpdatingOpacity) BOOL p_updatingOpacity; // ivar: _updatingOpacity
@property (readonly, nonatomic) BOOL shouldSpacerShapeProvideSpace;


-(BOOL)descendentWrappablesContainsWrappable:(id)arg0 ;
-(BOOL)shouldSnapWhileResizing;
-(id)additionalDependenciesForChildLayout:(id)arg0 ;
-(id)childInfosForChildLayouts;
-(id)childrenForPencilAnnotations;
-(id)computeLayoutGeometry;
-(id)descendentWrappables;
-(id)initWithInfo:(id)arg0 ;
-(id)layoutGeometryFromInfo;
-(id)p_sizeEnforcingChild;
-(struct CGRect )alignmentFrameForCaptionEdgeInsetsCalculation;
-(struct CGRect )computeBoundsForStandardKnobs;
-(struct CGSize )minimumSize;
-(void)processChangedProperty:(int)arg0 ;
-(void)transferLayoutGeometryToInfo:(id)arg0 withAdditionalTransform:(struct CGAffineTransform )arg1 assertIfInDocument:(BOOL)arg2 ;


@end


#endif