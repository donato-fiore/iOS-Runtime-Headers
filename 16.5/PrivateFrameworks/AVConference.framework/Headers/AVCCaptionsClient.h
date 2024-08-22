// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCCAPTIONSCLIENT_H
#define AVCCAPTIONSCLIENT_H

@protocol OS_dispatch_queue, AVCCaptionsClientDelegate;

#import <Foundation/Foundation.h>

#import "AVConferenceXPCClient.h"

@interface AVCCaptionsClient : NSObject {
    id *_delegate;
    AVConferenceXPCClient *_connection;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}


@property (readonly) BOOL captionsEnabled;
@property (readonly) BOOL captionsSupported;
@property (readonly) NSObject<AVCCaptionsClientDelegate> *delegate;
@property (readonly) NSInteger streamToken; // ivar: _streamToken


+(BOOL)isCaptioningSupported;
-(BOOL)connect;
-(id)captionsResultsWithInternalResults:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 streamToken:(NSInteger)arg1 ;
-(void)configureCaptions:(id)arg0 ;
-(void)dealloc;
-(void)deregisterBlocksForNotifications;
-(void)didDisableCaptions:(BOOL)arg0 error:(id)arg1 ;
-(void)didEnableCaptions:(BOOL)arg0 error:(id)arg1 ;
-(void)didStartCaptioningWithReason:(unsigned char)arg0 ;
-(void)didStopCaptioningWithReason:(unsigned char)arg0 ;
-(void)didUpdateCaptions:(id)arg0 isRemote:(BOOL)arg1 ;
-(void)disconnect;
-(void)enableCaptions:(BOOL)arg0 ;
-(void)registerBlocksForNotifications;


@end


#endif