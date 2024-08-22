// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSRNNRECURRENTIMAGESTATE_H
#define MPSRNNRECURRENTIMAGESTATE_H

@class MPSState;



@interface MPSRNNRecurrentImageState : MPSState {
    *id recurrentImages;
    *id cellImages;
    int nLayers;
    BOOL _isTemporary;
}




-(BOOL)isTemporary;
-(id)getMemoryCellImageForLayerIndex:(NSUInteger)arg0 ;
-(id)getRecurrentOutputImageForLayerIndex:(NSUInteger)arg0 ;
-(id)initWithCommandBuffer:(id)arg0 recurrentImageDescriptors:(*id)arg1 cellImageDescriptors:(*id)arg2 isTemporary:(BOOL)arg3 layerCount:(int)arg4 ;
-(void)dealloc;
-(void)setReadCount:(NSUInteger)arg0 ;


@end


#endif