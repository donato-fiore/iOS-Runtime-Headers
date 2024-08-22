// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCAPTURESOURCESTREAMSCONTAINER_H
#define FIGCAPTURESOURCESTREAMSCONTAINER_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "BWFigCaptureDevice.h"
#import "BWFigCaptureStream.h"

@interface FigCaptureSourceStreamsContainer : NSObject {
    int _deviceType;
    int _stillImageDepthDataType;
    BWFigCaptureDevice *_device;
    NSArray *_streams;
    BWFigCaptureStream *_primaryStream;
    NSDictionary *_streamsByPortType;
    NSDictionary *_baseZoomFactorsByPortType;
    float _minZoomFactorForDepth;
}




-(void)dealloc;


@end


#endif