// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPVANISHINGPOINTDETECTOR_H
#define VCPVANISHINGPOINTDETECTOR_H


#import <Foundation/Foundation.h>

#import "VCPGaborFilter.h"

@interface VCPVanishingPointDetector : NSObject {
    *float _image;
    *float _orientationResponses;
    *float _orientionMap;
    *float _confidenceMap;
    *float _edgeWeightMap;
    NSUInteger _width;
    NSUInteger _height;
    NSInteger _stride;
    NSUInteger _widthPadded;
    NSUInteger _heightPadded;
    NSInteger _stridePadded;
    NSInteger _offset;
    BOOL _validDimension;
    float _pixelMean;
    float _pixelVar;
    VCPGaborFilter *_gaborFilter;
}




-(BOOL)isVerticalOrHorizontal:(int)arg0 ;
-(id)initWithImage:(struct __CVBuffer *)arg0 ;
-(int)calculateConfidence:(id)arg0 lineDistance:(float)arg1 vaninshingPoint:(struct CGPoint )arg2 vanishingPointConfidence:(*float)arg3 ;
-(int)calculateOrientationResponses;
-(int)detect:(struct CGPoint *)arg0 withConfidence:(*float)arg1 dominantLine:(*id)arg2 ;
-(int)generateLineWeightMap:(id)arg0 weightMap:(*float)arg1 ;
-(int)generateOrientationMap;
-(int)prepareImage:(struct __CVBuffer *)arg0 ;
-(int)searchVanishingPointandDominantLine:(*float)arg0 lineGroup:(id)arg1 vanishingPoint:(struct CGPoint *)arg2 vanishingPointConfidence:(*float)arg3 dominantLine:(*id)arg4 ;
-(int)voteVanishingPoint:(*float)arg0 ;
-(void)averageOrientationResponses:(int)arg0 withCurrentMap:(*float)arg1 ;
-(void)dealloc;
-(void)extractUsefulAreaFrom:(*float)arg0 to:(*float)arg1 withOffset:(NSUInteger)arg2 stridePadded:(NSUInteger)arg3 width:(NSUInteger)arg4 height:(NSUInteger)arg5 ;
-(void)smoothFiltering:(*float)arg0 width:(NSUInteger)arg1 height:(NSUInteger)arg2 ;


@end


#endif