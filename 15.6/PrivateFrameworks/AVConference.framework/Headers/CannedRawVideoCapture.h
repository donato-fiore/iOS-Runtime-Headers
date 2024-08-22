// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CANNEDRAWVIDEOCAPTURE_H
#define CANNEDRAWVIDEOCAPTURE_H

@class NSArray, NSDictionary, NSString;
@protocol CannedVideoFrameFeeder;

#import <Foundation/Foundation.h>

#import "VideoScaler.h"

@interface CannedRawVideoCapture : NSObject <CannedVideoFrameFeeder>

 {
    *__sFILE _currentInputFile;
    *__CVPixelBufferPool _currentPixelBufferPool;
    *__CVPixelBufferPool _rotatedPixelBufferPool;
    _opaque_pthread_mutex_t _inputMutex;
    _opaque_pthread_mutex_t _attributeMutex;
}


@property (nonatomic) int allFrameCount; // ivar: _allFrameCount
@property (nonatomic) CGFloat allFrameRate; // ivar: _allFrameRate
@property (retain, nonatomic) NSArray *allResolutions; // ivar: _allResolutions
@property (retain, nonatomic) NSDictionary *currentResolution; // ivar: _currentResolution
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int height; // ivar: _height
@property (readonly) Class superclass;
@property (retain, nonatomic) VideoScaler *videoScaler; // ivar: _videoScaler
@property (nonatomic) int width; // ivar: _width


-(id)initWithPath:(id)arg0 ;
-(int)initializeFrameResolutionArrayFromFolder:(id)arg0 ;
-(struct __CVBuffer *)createPixelBufferForFrameIndex:(int)arg0 ;
-(void)dealloc;
-(void)getFrameRate:(*CGFloat)arg0 frameCount:(*int)arg1 ;


@end


#endif