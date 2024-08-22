// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACCESSORYNOWPLAYINGCLIENT_H
#define ACCESSORYNOWPLAYINGCLIENT_H

@class NSString, NSXPCConnection, NSSet;
@protocol AccessoryNowPlayingXPCClientProtocol, AccessoryNowPlayingClientProtocol, AccessoryNowPlayingXPCServerProtocol;

#import <Foundation/Foundation.h>


@interface AccessoryNowPlayingClient : NSObject <AccessoryNowPlayingXPCClientProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AccessoryNowPlayingClientProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<AccessoryNowPlayingXPCServerProtocol> *remoteObject; // ivar: _remoteObject
@property (retain, nonatomic) NSXPCConnection *serverConnection; // ivar: _serverConnection
@property (nonatomic) BOOL shouldSendArtwork; // ivar: _shouldSendArtwork
@property (readonly, nonatomic) BOOL shouldSendPlaybackQueueList;
@property (retain, nonatomic) NSSet *subscriberList; // ivar: _subscriberList
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 ;
-(void)cancelRequestPlaybackQueueListInfo:(id)arg0 requestID:(id)arg1 ;
-(void)connectToServer;
-(void)dealloc;
-(void)mediaItemArtworkDidChange;
-(void)mediaItemAttributesDidChange:(id)arg0 ;
-(void)playbackAttributesDidChange:(id)arg0 ;
-(void)playbackQueueListDidChange;
-(void)playbackQueueListInfoResponse:(id)arg0 requestID:(id)arg1 info:(id)arg2 ;
-(void)requestPlaybackQueueListInfo:(id)arg0 requestID:(id)arg1 startIndex:(unsigned int)arg2 upToCount:(unsigned int)arg3 infoMask:(unsigned int)arg4 ;
-(void)setPlaybackElapsedTime:(id)arg0 withReply:(id)arg1 ;
-(void)setPlaybackQueueIndex:(id)arg0 withReply:(id)arg1 ;
-(void)triggerMediaItemArtworkUpdateWithReply:(id)arg0 ;
-(void)triggerMediaItemAttributesUpdateWithReply:(id)arg0 ;
-(void)triggerPlaybackAttributesUpdateWithReply:(id)arg0 ;
-(void)updateSubscriberList:(id)arg0 WithReply:(id)arg1 ;


@end


#endif