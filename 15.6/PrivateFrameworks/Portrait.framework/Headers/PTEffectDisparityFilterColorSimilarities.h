// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTEFFECTDISPARITYFILTERCOLORSIMILARITIES_H
#define PTEFFECTDISPARITYFILTERCOLORSIMILARITIES_H

@protocol MTLCommandQueue, MTLTexture;


#import "PTEffectDisparityFilter.h"
#import "PTDisparityFilterColorSimilarity.h"

@interface PTEffectDisparityFilterColorSimilarities : PTEffectDisparityFilter {
    int _frameIndex;
    id<MTLTexture>" _colorBuffersBlurred;
    id<MTLTexture>" _filteredDisparity;
    id<MTLCommandQueue> *_commandQueue;
    PTDisparityFilterColorSimilarity *_disparityFilter;
    id<MTLTexture> *_inputRGB;
}




-(id)debugTexture;
-(id)initWithDevice:(id)arg0 commandQueue:(id)arg1 library:(id)arg2 pipelineLibrary:(id)arg3 disparityWidth:(NSUInteger)arg4 disparityHeight:(NSUInteger)arg5 effectUtil:(id)arg6 ;
-(unsigned int)applyFilter:(id)arg0 inOutFilteredDisparity:(id)arg1 updateCoefficient:(float)arg2 ;
-(unsigned int)prepareFilter:(id)arg0 network:(id)arg1 ;
-(unsigned int)reset;


@end


#endif