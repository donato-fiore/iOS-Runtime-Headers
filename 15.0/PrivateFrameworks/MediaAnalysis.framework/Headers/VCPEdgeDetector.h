// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPEDGEDETECTOR_H
#define VCPEDGEDETECTOR_H


#import <Foundation/Foundation.h>


@interface VCPEdgeDetector : NSObject {
    NSUInteger _widthPadded;
    NSUInteger _heightPadded;
    NSUInteger _width;
    NSUInteger _height;
    int _widthExt;
    int _heightExt;
    DSPSplitComplex _gradient;
    *float _image;
    *float _imageFiltered;
    *float _nonMaxSuppressed;
    *float _gradientX;
    *float _gradientY;
    *float _gradientMag;
    *float _edgeMap;
}




-(BOOL)isInImage:(int)arg0 width:(int)arg1 height:(int)arg2 ;
-(id)initWithImage:(*float)arg0 edgeMap:(*float)arg1 width:(NSUInteger)arg2 height:(NSUInteger)arg3 widthExtension:(int)arg4 heightExtension:(int)arg5 ;
-(int)detectWithSigma:(float)arg0 lowThreshold:(float)arg1 highThreshold:(float)arg2 ;
-(int)gradientEstimation:(*float)arg0 width:(NSUInteger)arg1 height:(NSUInteger)arg2 gradient:(struct DSPSplitComplex )arg3 gradientMag:(*float)arg4 ;
-(int)noiseReduction:(*float)arg0 sigma:(float)arg1 imageFiltered:(*float)arg2 ;
-(void)dealloc;


@end


#endif