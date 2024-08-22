// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMRMEDIAREMOTESETSTATEMESSAGE_H
#define NMRMEDIAREMOTESETSTATEMESSAGE_H

@class NSData, NSString, NSNumber, NSDate;
@protocol NMRMediaRemoteProtobufCodable;

#import <Foundation/Foundation.h>

#import "_NMRMediaRemoteSetStateMessageProfobuf.h"

@interface NMRMediaRemoteSetStateMessage : NSObject <NMRMediaRemoteProtobufCodable>

 {
    _NMRMediaRemoteSetStateMessageProfobuf *_protobuf;
}


@property (readonly, nonatomic) NSData *applicationInfoData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *nowPlayingInfoData;
@property (readonly, nonatomic) NSNumber *originIdentifier;
@property (readonly, nonatomic) NSData *playbackQueueData;
@property (readonly, nonatomic) NSDate *serializationDate;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSData *supportedCommandsData;


+(id)messageWithNowPlayingInfo:(id)arg0 applicationInfo:(id)arg1 supportedCommands:(id)arg2 playbackQueue:(id)arg3 originIdentifier:(id)arg4 ;
-(id)_initWithNowPlayingInfo:(id)arg0 applicationInfo:(id)arg1 supportedCommands:(id)arg2 playbackQueue:(id)arg3 originIdentifier:(id)arg4 ;
-(id)initWithProtobufData:(id)arg0 ;
-(id)protobufData;


@end


#endif