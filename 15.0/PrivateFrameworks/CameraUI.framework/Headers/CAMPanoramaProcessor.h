// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMPANORAMAPROCESSOR_H
#define CAMPANORAMAPROCESSOR_H

@class NSMutableDictionary;
@protocol CAMPanoramaProcessorDelegate;

#import <Foundation/Foundation.h>

#import "CAMPanoramaCaptureRequest.h"

@interface CAMPanoramaProcessor : NSObject

@property (readonly, nonatomic) NSMutableDictionary *_initialMetadataByRequestUUID; // ivar: __initialMetadataByRequestUUID
@property (readonly, nonatomic) *OpaqueFigSampleBufferProcessor _processor; // ivar: __processor
@property (nonatomic, getter=isCapturingPanorama, setter=_setCapturingPanorama:) BOOL capturingPanorama; // ivar: _capturingPanorama
@property (readonly, weak, nonatomic) NSObject<CAMPanoramaProcessorDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger direction; // ivar: _direction
@property (readonly, nonatomic) NSInteger photoEncodingBehavior; // ivar: _photoEncodingBehavior
@property (readonly, nonatomic) CGSize previewSize; // ivar: _previewSize
@property (retain, nonatomic, setter=_setRequest:) CAMPanoramaCaptureRequest *request; // ivar: _request


-(id)initWithDelegate:(id)arg0 encodingBehavior:(NSInteger)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)processPanoramaCaptureWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)startPanoramaCaptureWithRequest:(id)arg0 ;
-(void)stopPanoramaCapture;


@end


#endif