// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCCAPTIONSMANAGER_H
#define VCCAPTIONSMANAGER_H

@class NSMutableDictionary, NSString;
@protocol VCCaptionsSourceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVConferenceXPCClient.h"

@interface VCCaptionsManager : NSObject <VCCaptionsSourceDelegate>

 {
    NSMutableDictionary *_streamTokenList;
    AVConferenceXPCClient *_connection;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultManager;
-(id)captionsSourceFromClientContext:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)deregisterBlocksForService;
-(void)notifyClientsWithStreamToken:(NSInteger)arg0 service:(char *)arg1 arguments:(id)arg2 ;
-(void)registerBlocksForService;
-(void)registerCaptionsSource:(id)arg0 streamToken:(NSInteger)arg1 ;
-(void)streamToken:(NSInteger)arg0 didDisableCaptions:(BOOL)arg1 error:(id)arg2 ;
-(void)streamToken:(NSInteger)arg0 didEnableCaptions:(BOOL)arg1 error:(id)arg2 ;
-(void)streamToken:(NSInteger)arg0 didStartCaptioningWithReason:(unsigned char)arg1 ;
-(void)streamToken:(NSInteger)arg0 didStopCaptioningWithReason:(unsigned char)arg1 ;
-(void)streamToken:(NSInteger)arg0 didUpdateCaptions:(id)arg1 ;
-(void)unregisterCaptionsSourceWithStreamToken:(NSInteger)arg0 ;


@end


#endif