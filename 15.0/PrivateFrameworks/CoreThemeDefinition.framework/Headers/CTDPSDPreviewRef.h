// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTDPSDPREVIEWREF_H
#define CTDPSDPREVIEWREF_H

@class CUIPSDImageRef, NSArray;



@interface CTDPSDPreviewRef : CUIPSDImageRef {
    _PSDImageInfo _imageInfo;
    NSInteger _layerCount;
    NSInteger _sliceCount;
    NSInteger _columnWidth;
    NSInteger _rowHeight;
    NSArray *_layerIndexLayout;
    NSInteger _sliceRowCount;
    NSInteger _sliceColumnCount;
    NSArray *_sliceRects;
}




-(BOOL)hasGradient;
-(BOOL)hasRegularSliceGrid;
-(NSInteger)indexOfDrawingLayerType:(NSInteger)arg0 ;
-(NSInteger)numberOfAlphaChannels;
-(NSInteger)numberOfGradientLayers;
-(NSInteger)sliceColumnCount;
-(NSInteger)sliceRowCount;
-(id)initWithPath:(id)arg0 ;
-(void)dealloc;
-(void)evaluateSliceGrid;


@end


#endif