// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIPSDLAYERREF_H
#define CUIPSDLAYERREF_H



#import "CUIPSDLayerBaseRef.h"

@interface CUIPSDLayerRef : CUIPSDLayerBaseRef



-(id)colorFill;
-(id)fillSample;
-(id)gradient;
-(id)image;
-(id)imageFromSlice:(unsigned int)arg0 ;
-(id)imageFromSlice:(unsigned int)arg0 isEmptyImage:(*BOOL)arg1 ;
-(id)imageIsZeroSizeImage:(*BOOL)arg0 ;
-(id)initWithImageRef:(id)arg0 layerIndex:(unsigned int)arg1 ;
-(id)layerEffects;
-(id)maskFromSlice:(unsigned int)arg0 ;
-(id)patternFromSlice:(unsigned int)arg0 ;
-(id)patternFromSlice:(unsigned int)arg0 isZeroSizeImage:(*BOOL)arg1 ;
-(struct CGImage *)createCGImage;
-(void)dealloc;


@end


#endif