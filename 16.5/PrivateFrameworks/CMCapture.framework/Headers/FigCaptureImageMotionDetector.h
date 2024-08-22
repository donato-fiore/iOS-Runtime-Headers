// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCAPTUREIMAGEMOTIONDETECTOR_H
#define FIGCAPTUREIMAGEMOTIONDETECTOR_H


#import <Foundation/Foundation.h>


@interface FigCaptureImageMotionDetector : NSObject {
    int _width;
    int _height;
    *int _intRowSum;
    *int _intColSum;
    ? _imgProj;
    *CGFloat _tmpSum1;
    *CGFloat _tmpSum2;
    *CGFloat _corrArray;
    int _rowSumLength;
    int _rowSumCapacity;
    int _colSumLength;
    int _colSumCapacity;
    int _processedBufferCount;
    CGRect _sumROI;
}


@property (readonly, nonatomic) int maximumSearchRange; // ivar: _maximumSearchRange
@property (readonly, nonatomic) ? motionStatistics; // ivar: _motionStatistics
@property (nonatomic) float stationaryThreshold; // ivar: _stationaryThreshold


-(id)init;
-(id)initWithWidth:(int)arg0 height:(int)arg1 ;
-(id)initWithWidth:(int)arg0 height:(int)arg1 maximumSearchRange:(int)arg2 frameRingSize:(int)arg3 ;
-(int)processPixelBuffer:(struct __CVBuffer *)arg0 ;
-(int)setCentralROIAndGetRect:(struct CGRect *)arg0 ;
-(int)setRoi:(struct CGRect )arg0 actualROI:(struct CGRect *)arg1 ;
-(void)dealloc;
-(void)resetProcessingState;


@end


#endif