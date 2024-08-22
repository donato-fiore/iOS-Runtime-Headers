// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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


-(BOOL)connect;
-(id)initWithDelegate:(id)arg0 streamToken:(NSInteger)arg1 ;
-(void)configureCaptions:(id)arg0 ;
-(void)dealloc;
-(void)deregisterBlocksForNotifications;
-(void)disconnect;
-(void)enableCaptions:(BOOL)arg0 ;
-(void)registerBlocksForNotifications;


@end


#endif