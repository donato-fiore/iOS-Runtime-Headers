// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CARSESSIONCHANNEL_H
#define CARSESSIONCHANNEL_H

@class NSString, NSNumber;
@protocol CARSessionChannelProviding, BSInvalidatable, CARSessionChannelDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CARSession.h"

@interface CARSessionChannel : NSObject <CARSessionChannelProviding, BSInvalidatable>

 {
    *OpaqueFigEndpointRemoteControlSession _remoteControlSession;
}


@property (weak, nonatomic) NSObject<CARSessionChannelDelegate> *channelDelegate; // ivar: channelDelegate
@property (readonly, nonatomic) NSString *channelID; // ivar: _channelID
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *channelQueue; // ivar: _channelQueue
@property (readonly, nonatomic) NSString *channelType; // ivar: _channelType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isOpened) BOOL opened;
@property (readonly, nonatomic) NSNumber *qualityOfService; // ivar: _qualityOfService
@property (readonly, nonatomic) CARSession *session; // ivar: _session
@property (readonly, nonatomic) NSNumber *streamPriority; // ivar: _streamPriority
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL withoutReply; // ivar: _withoutReply


-(BOOL)openChannel;
-(BOOL)openChannelWithError:(*id)arg0 ;
-(BOOL)sendChannelMessage:(id)arg0 ;
-(id)_endpointValueForKey:(struct __CFString *)arg0 ;
-(id)initWithSession:(id)arg0 channelType:(id)arg1 ;
-(id)initWithSession:(id)arg0 channelType:(id)arg1 channelID:(id)arg2 withoutReply:(BOOL)arg3 qualityOfService:(id)arg4 streamPriority:(id)arg5 ;
-(id)shortChannelType;
-(void)_channelInvalidated;
-(void)_dataReceived:(id)arg0 ;
-(void)_sendComplete;
-(void)closeChannel;
-(void)invalidate;


@end


#endif