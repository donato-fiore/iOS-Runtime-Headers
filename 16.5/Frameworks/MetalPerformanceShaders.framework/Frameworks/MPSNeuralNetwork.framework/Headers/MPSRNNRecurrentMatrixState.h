// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSRNNRECURRENTMATRIXSTATE_H
#define MPSRNNRECURRENTMATRIXSTATE_H

@class MPSState;



@interface MPSRNNRecurrentMatrixState : MPSState {
    *id recurrentMatrices;
    *id cellMatrices;
    int nLayers;
    BOOL _isTemporary;
}




-(BOOL)isTemporary;
-(id)getMemoryCellMatrixForLayerIndex:(NSUInteger)arg0 ;
-(id)getRecurrentOutputMatrixForLayerIndex:(NSUInteger)arg0 ;
-(id)initWithCommandBuffer:(id)arg0 recurrentMatrixDescriptors:(*id)arg1 cellMatrixDescriptors:(*id)arg2 isTemporary:(BOOL)arg3 layerCount:(int)arg4 ;
-(id)initWithDevice:(id)arg0 commandBuffer:(id)arg1 recurrentMatrixDescriptors:(*id)arg2 cellMatrixDescriptors:(*id)arg3 isTemporary:(BOOL)arg4 layerCount:(int)arg5 ;
-(void)dealloc;
-(void)setReadCount:(NSUInteger)arg0 ;


@end


#endif