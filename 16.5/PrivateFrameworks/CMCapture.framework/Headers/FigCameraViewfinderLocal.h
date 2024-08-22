// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCAMERAVIEWFINDERLOCAL_H
#define FIGCAMERAVIEWFINDERLOCAL_H

@class NSDictionary, NSString;
@protocol FigCaptureSessionObserver;


#import "FigCameraViewfinder.h"
#import "FigCameraViewfinderSessionLocal.h"

@interface FigCameraViewfinderLocal : FigCameraViewfinder <FigCaptureSessionObserver>

 {
    BOOL _observing;
    NSDictionary *_options;
    FigCameraViewfinderSessionLocal *_activeViewfinderSession;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) int photoThumbnailMaxDimension;
@property (readonly) float photoThumbnailQuality;
@property (readonly) BOOL photoThumbnailQualitySpecified;
@property (readonly) Class superclass;


+(id)cameraViewfinder;
+(void)initialize;
-(id)init;
-(void)captureSession:(NSInteger)arg0 didCapturePhotoWithStatus:(int)arg1 thumbnailData:(id)arg2 timestamp:(struct ? )arg3 ;
-(void)captureSessionDidStart:(id)arg0 ;
-(void)captureSessionDidStop:(NSInteger)arg0 ;
-(void)captureSessionWillStart;
-(void)dealloc;
-(void)startWithOptions:(id)arg0 ;
-(void)stop;


@end


#endif