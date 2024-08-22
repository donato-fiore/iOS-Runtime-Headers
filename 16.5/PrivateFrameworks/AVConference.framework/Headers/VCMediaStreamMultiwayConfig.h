// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCMEDIASTREAMMULTIWAYCONFIG_H
#define VCMEDIASTREAMMULTIWAYCONFIG_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface VCMediaStreamMultiwayConfig : NSObject {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasIdsStreamID;
@property (readonly, nonatomic) BOOL hasMaxIDSStreamIdCount;
@property (readonly, nonatomic) BOOL hasMaxMediaBitrate;
@property (readonly, nonatomic) BOOL hasMaxNetworkBitrate;
@property (readonly, nonatomic) BOOL hasMaxPacketsPerSecond;
@property (readonly, nonatomic) BOOL hasQualityIndex;
@property (readonly, nonatomic) BOOL hasRepairedMaxNetworkBitrate;
@property (readonly, nonatomic) BOOL hasRepairedStreamID;
@property (nonatomic) unsigned short idsStreamID; // ivar: _idsStreamID
@property (nonatomic) BOOL isOneToOne; // ivar: _isOneToOne
@property (nonatomic) unsigned int maxIDSStreamIdCount; // ivar: _maxIDSStreamIdCount
@property (nonatomic) unsigned int maxMediaBitrate; // ivar: _maxMediaBitrate
@property (nonatomic) unsigned int maxNetworkBitrate; // ivar: _maxNetworkBitrate
@property (nonatomic) float maxPacketsPerSecond; // ivar: _maxPacketsPerSecond
@property (nonatomic) unsigned int negotiationProtocolMask; // ivar: _negotiationProtocolMask
@property (retain, nonatomic) NSString *participantId; // ivar: _participantId
@property (nonatomic) unsigned int qualityIndex; // ivar: _qualityIndex
@property (nonatomic) NSUInteger remoteIDSParticipantID; // ivar: _remoteIDSParticipantID
@property (nonatomic) unsigned int repairedMaxNetworkBitrate; // ivar: _repairedMaxNetworkBitrate
@property (nonatomic) unsigned short repairedStreamID; // ivar: _repairedStreamID
@property (retain, nonatomic) NSString *sessionId; // ivar: _sessionId
@property (nonatomic) BOOL shouldIgnoreRTPHeaderExtensions; // ivar: _shouldIgnoreRTPHeaderExtensions
@property (nonatomic) unsigned int ssrc; // ivar: _ssrc
@property (nonatomic) BOOL startOnDemand; // ivar: _startOnDemand
@property (nonatomic) unsigned int streamGroupID; // ivar: _streamGroupID
@property (readonly, nonatomic) NSArray *streamIds;


-(void)dealloc;


@end


#endif