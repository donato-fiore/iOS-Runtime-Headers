// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDPARTITIONEDPARTIALREP_H
#define TSDPARTITIONEDPARTIALREP_H



#import "TSDRep.h"

@interface TSDPartitionedPartialRep : TSDRep



-(BOOL)directlyManagesLayerContent;
-(id)i_queueForTileProvider;
-(id)initWithLayout:(id)arg0 canvas:(id)arg1 ;
-(struct CGImage *)p_newImageForCachingBaseRep;
-(struct CGRect )clipRect;
-(struct CGRect )layerFrameInScaledCanvas;
-(struct CGRect )p_clipRect;
-(struct CGRect )p_convertBaseToNaturalRect:(struct CGRect )arg0 ;
-(struct UIEdgeInsets )p_edgeInsetsForClipping;
-(void)addBitmapsToRenderingQualityInfo:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)didUpdateLayer:(id)arg0 ;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)resetCachedPartitionedRendering;
-(void)willBeRemoved;


@end


#endif