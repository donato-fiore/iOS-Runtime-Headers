// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPHOMEKITMOTIONANALYZER_H
#define VCPHOMEKITMOTIONANALYZER_H

@class NSMutableArray;


#import "VCPVideoAnalyzer.h"

@interface VCPHomeKitMotionAnalyzer : VCPVideoAnalyzer {
    NSMutableArray *_regions;
    *float _diff;
    *float _ptrFirst;
    *float _ptrLast;
    Scaler _scaler;
    vector<__CVBuffer *, std::allocator<__CVBuffer *>> _frameArray;
    int _frameWidth;
    int _frameHeight;
    int _width;
    int _height;
    int _stride;
    int _blockSize;
    int _widthBlockNum;
    int _heightBlockNum;
}


@property (readonly) float actionScore; // ivar: _actionScore


-(id)init;
-(id)regionsOfInterest;
-(int)analyzeFrame:(struct __CVBuffer *)arg0 withTimestamp:(struct ? )arg1 andDuration:(struct ? )arg2 flags:(*NSUInteger)arg3 ;
-(int)calculateFrameDifference:(struct __CVBuffer *)arg0 ;
-(int)computeRegionsofInterest;
-(int)setPixelBuffer:(struct __CVBuffer *)arg0 ;
-(void)dealloc;


@end


#endif