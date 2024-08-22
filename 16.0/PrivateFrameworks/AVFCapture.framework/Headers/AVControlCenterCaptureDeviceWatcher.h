// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCONTROLCENTERCAPTUREDEVICEWATCHER_H
#define AVCONTROLCENTERCAPTUREDEVICEWATCHER_H


#import <Foundation/Foundation.h>

#import "AVCaptureDeviceDiscoverySession.h"

@interface AVControlCenterCaptureDeviceWatcher : NSObject {
    AVCaptureDeviceDiscoverySession *_discoverySession;
    id *_handler;
    BOOL _centerStageSupported;
    BOOL _backgroundBlurSupported;
    BOOL _studioLightingSupported;
    BOOL _micModesSupported;
}


@property (readonly) BOOL backgroundBlurSupported;
@property (readonly) BOOL centerStageSupported;
@property (readonly) BOOL micModesSupported;
@property (readonly) BOOL studioLightingSupported;


-(id)initWithSupportedVideoEffectsDidChangeHandler:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif