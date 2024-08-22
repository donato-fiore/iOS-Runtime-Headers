// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMRMEDIAREMOTEGETSTATEMESSAGE_H
#define NMRMEDIAREMOTEGETSTATEMESSAGE_H

@class NSData, NSString, NSNumber, NSDate;
@protocol NMRMediaRemoteProtobufCodable;

#import <Foundation/Foundation.h>

#import "_NMRMediaRemoteGetStateMessageProfobuf.h"

@interface NMRMediaRemoteGetStateMessage : NSObject <NMRMediaRemoteProtobufCodable>

 {
    _NMRMediaRemoteGetStateMessageProfobuf *_protobuf;
}


@property (readonly, nonatomic) NSData *applicationInfoDigest;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *nowPlayingInfoDigest;
@property (readonly, nonatomic) NSNumber *originIdentifier;
@property (readonly, nonatomic) NSData *playbackQueueDigest;
@property (readonly, nonatomic) NSDate *serializationDate;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSData *supportedCommandsDigest;


+(id)messageWithNowPlayingInfoDigest:(id)arg0 applicationInfoDigest:(id)arg1 supportedCommandsDigest:(id)arg2 playbackQueueDigest:(id)arg3 originIdentifier:(id)arg4 ;
-(id)_initWithNowPlayingInfoDigest:(id)arg0 applicationInfoDigest:(id)arg1 supportedCommandsDigest:(id)arg2 playbackQueueDigest:(id)arg3 originIdentifier:(id)arg4 ;
-(id)initWithProtobufData:(id)arg0 ;
-(id)protobufData;


@end


#endif