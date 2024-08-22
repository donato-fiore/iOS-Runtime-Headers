// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWZOOMDELAYBUFFER_H
#define BWZOOMDELAYBUFFER_H


#import <Foundation/Foundation.h>


@interface BWZoomDelayBuffer : NSObject {
    *? _zoomRequestBuffer;
    unsigned int _zoomRequestBufferIndex;
    unsigned int _maxZoomDelay;
    unsigned int _currentZoomDelay;
    int _currentZoomDirection;
    int _operatingMode;
}




-(void)dealloc;


@end


#endif