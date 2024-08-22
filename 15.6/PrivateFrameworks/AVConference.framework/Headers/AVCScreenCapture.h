// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCSCREENCAPTURE_H
#define AVCSCREENCAPTURE_H

@protocol OS_dispatch_queue, AVCScreenCaptureDelegate;

#import <Foundation/Foundation.h>

#import "AVConferenceXPCClient.h"

@interface AVCScreenCapture : NSObject {
    AVConferenceXPCClient *_connection;
    NSObject<OS_dispatch_queue> *_avConferenceScreenCaptureQueue;
}


@property (readonly, nonatomic) NSObject<AVCScreenCaptureDelegate> *delegate; // ivar: _delegate


+(unsigned char)capabilities;
+(unsigned char)captureCapabilities;
-(id)initWithDelegate:(id)arg0 withConfig:(id)arg1 ;
-(id)newNSErrorWithErrorDictionary:(id)arg0 ;
-(void)dealloc;
-(void)deregisterBlocksForNotifications;
-(void)registerBlocksForNotifications;
-(void)reportScreenShareIsStarting:(BOOL)arg0 ;
-(void)startCapture;
-(void)stopCapture;
-(void)updateScreenCaptureWithConfig:(id)arg0 ;


@end


#endif