// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGCAPTURESESSIONACTIVECAMERACAPTURESOURCE_H
#define FIGCAPTURESESSIONACTIVECAMERACAPTURESOURCE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BWFigVideoCaptureDevice.h"

@interface FigCaptureSessionActiveCameraCaptureSource : NSObject {
    *OpaqueFigCaptureSource _source;
    BWFigVideoCaptureDevice *_device;
    NSString *_nonLocalizedName;
    int _deviceType;
}




-(void)dealloc;


@end


#endif