// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPIMAGESALIENCYANALYZER_H
#define VCPIMAGESALIENCYANALYZER_H



#import "VCPImageAnalyzer.h"

@interface VCPImageSaliencyAnalyzer : VCPImageAnalyzer {
    int _chunk;
    CGRect _region;
    float _score;
    int _maxNumRegions;
    BOOL _prune;
}




+(id)analyzerWith:(int)arg0 prune:(BOOL)arg1 ;
-(*float)getInputBuffer:(int)arg0 srcWidth:(int)arg1 cnnInputHeight:(*int)arg2 cnnInputWidth:(*int)arg3 ;
-(float)computeScore:(*float)arg0 width:(int)arg1 height:(int)arg2 posX:(int)arg3 posY:(int)arg4 ;
-(float)outputScaling;
-(id)initWithMaxNumRegions:(int)arg0 prune:(BOOL)arg1 ;
-(id)pruneRegions:(id)arg0 ;
-(int)aggregateTileResults:(id)arg0 tileRect:(struct CGRect )arg1 imageSize:(struct CGSize )arg2 landscape:(BOOL)arg3 results:(id)arg4 ;
-(int)analyzePixelBuffer:(struct __CVBuffer *)arg0 flags:(*NSUInteger)arg1 results:(*id)arg2 cancel:(id)arg3 ;
-(int)copyImage:(struct __CVBuffer *)arg0 toData:(*float)arg1 withChunk:(int)arg2 ;
-(int)generateSalientRegion:(*float)arg0 outHeight:(int)arg1 outWidth:(int)arg2 ;
-(int)getSalientRegions:(id)arg0 ;
-(int)prepareModelForSourceWidth:(int)arg0 andSourceHeight:(int)arg1 ;
-(int)processTile:(struct __CVBuffer *)arg0 results:(id)arg1 cancel:(id)arg2 ;
-(int)saliencyDetection:(struct __CVBuffer *)arg0 salientRegions:(id)arg1 cancel:(id)arg2 ;
-(int)scaleImage:(struct __CVBuffer *)arg0 toData:(*float)arg1 withWidth:(int)arg2 andHeight:(int)arg3 ;


@end


#endif