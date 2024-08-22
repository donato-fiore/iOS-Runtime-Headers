// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIMUTABLEPSDIMAGEREF_H
#define CUIMUTABLEPSDIMAGEREF_H



#import "CUIPSDImageRef.h"

@interface CUIMutablePSDImageRef : CUIPSDImageRef



-(*void)newPSDGradientFromCUIPSDGradient:(id)arg0 ;
-(?)newSliceRectsArray:(?)arg0 withXCutPositionsyCutPositions;
-(BOOL)saveToURL:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)saveWithCompletionHandler:(id)arg0 ;
-(id)initWithPixelWidth:(NSUInteger)arg0 pixelHeight:(NSUInteger)arg1 ;
-(struct __CFData *)copyDefaultICCProfileData;
-(unsigned int)newSliceRectsArray:(struct PSDRect **)arg0 withSliceRects:(id)arg1 ;
-(unsigned int)newUInt32CArray:(**unsigned int)arg0 withNSArray:(id)arg1 prependNumber:(id)arg2 appendNumber:(id)arg3 ;
-(unsigned int)psdLayerBlendModeForCGBlendMode:(int)arg0 ;
-(void)addLayer:(id)arg0 ;
-(void)addLayoutMetricsChannel:(id)arg0 ;
-(void)addOrUpdateSlicesWithSliceRects:(id)arg0 ;
-(void)addOrUpdateSlicesWithXCutPositions:(id)arg0 yCutPositions:(id)arg1 ;
-(void)deleteLayerAtIndex:(unsigned int)arg0 ;
-(void)deleteLayoutMetricsChannelAtIndex:(unsigned int)arg0 ;
-(void)insertLayer:(id)arg0 atIndex:(unsigned int)arg1 ;
-(void)insertLayoutMetricsChannel:(id)arg0 atIndex:(unsigned int)arg1 ;
-(void)setFileURL:(id)arg0 ;
-(void)updateSliceName:(id)arg0 atIndex:(unsigned int)arg1 ;


@end


#endif