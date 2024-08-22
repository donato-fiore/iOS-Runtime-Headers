// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWMULTIFILTERTHUMBNAILNODE_H
#define BWMULTIFILTERTHUMBNAILNODE_H

@class NSArray, FigColorCubeMetalFilter;


#import "BWNode.h"
#import "BWColorLookupCache.h"

@interface BWMultiFilterThumbnailNode : BWNode {
    CGSize _thumbnailSize;
    NSArray *_filters;
    int _maxLossyCompressionLevel;
    BWColorLookupCache *_colorLookupCache;
    FigColorCubeMetalFilter *_filter;
    *opaqueCMFormatDescription _mostRecentFormatDescription;
}




+(void)initialize;
-(id)_supportedPixelFormats;
-(id)initWithFilters:(id)arg0 thumbnailSize:(struct CGSize )arg1 maxLossyCompressionLevel:(int)arg2 ;
-(id)nodeSubType;
-(id)nodeType;
-(id)videoOutput;
-(int)_loadAndConfigureFilterBundle;
-(void)dealloc;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif