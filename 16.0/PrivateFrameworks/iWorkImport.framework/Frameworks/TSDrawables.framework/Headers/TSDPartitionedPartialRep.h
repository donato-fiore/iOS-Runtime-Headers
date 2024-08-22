// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDPARTITIONEDPARTIALREP_H
#define TSDPARTITIONEDPARTIALREP_H



#import "TSDRep.h"

@interface TSDPartitionedPartialRep : TSDRep

@property (readonly, nonatomic) CGRect p_clipRect;
@property (readonly, nonatomic) UIEdgeInsets p_edgeInsetsForClipping;


-(id)initWithLayout:(id)arg0 canvas:(id)arg1 ;
-(struct CGImage *)p_newImageForCachingBaseRep;
-(struct CGRect )clipRect;
-(struct CGRect )layerFrameInScaledCanvas;
-(struct CGRect )p_convertBaseToPartialNaturalRect:(struct CGRect )arg0 ;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)willBeRemoved;


@end


#endif