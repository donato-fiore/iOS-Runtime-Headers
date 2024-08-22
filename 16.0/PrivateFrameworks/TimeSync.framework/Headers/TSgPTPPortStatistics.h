// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSGPTPPORTSTATISTICS_H
#define TSGPTPPORTSTATISTICS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TSgPTPPortStatistics : NSObject

@property (readonly, nonatomic) unsigned int allowedLostResponsesExceededCounter; // ivar: _allowedLostResponsesExceededCounter
@property (readonly, nonatomic) unsigned int announceReceiptTimeoutCounter; // ivar: _announceReceiptTimeoutCounter
@property (readonly, nonatomic) unsigned int attemptedAnnounceCounter; // ivar: _attemptedAnnounceCounter
@property (readonly, nonatomic) unsigned int attemptedDelayRequestCounter; // ivar: _attemptedDelayRequestCounter
@property (readonly, nonatomic) unsigned int attemptedDelayResponseCounter; // ivar: _attemptedDelayResponseCounter
@property (readonly, nonatomic) unsigned int attemptedFollowUpCounter; // ivar: _attemptedFollowUpCounter
@property (readonly, nonatomic) unsigned int attemptedPDelayRequestCounter; // ivar: _attemptedPDelayRequestCounter
@property (readonly, nonatomic) unsigned int attemptedPDelayResponseCounter; // ivar: _attemptedPDelayResponseCounter
@property (readonly, nonatomic) unsigned int attemptedPDelayResponseFollowUpCounter; // ivar: _attemptedPDelayResponseFollowUpCounter
@property (readonly, nonatomic) unsigned int attemptedSignalCounter; // ivar: _attemptedSignalCounter
@property (readonly, nonatomic) unsigned int attemptedSyncCounter; // ivar: _attemptedSyncCounter
@property (readonly, copy, nonatomic) NSString *portIdentifier; // ivar: _portIdentifier
@property (readonly, nonatomic) int portRole; // ivar: _portRole
@property (readonly, nonatomic) int portType; // ivar: _portType
@property (readonly, nonatomic) unsigned int rawDelayExceededCounter; // ivar: _rawDelayExceededCounter
@property (readonly, nonatomic) unsigned int rawDelayMeasurementCounter; // ivar: _rawDelayMeasurementCounter
@property (readonly, nonatomic) unsigned int receivedAnnounceCounter; // ivar: _receivedAnnounceCounter
@property (readonly, nonatomic) unsigned int receivedDelayRequestCounter; // ivar: _receivedDelayRequestCounter
@property (readonly, nonatomic) unsigned int receivedDelayResponseCounter; // ivar: _receivedDelayResponseCounter
@property (readonly, nonatomic) unsigned int receivedFollowUpCounter; // ivar: _receivedFollowUpCounter
@property (readonly, nonatomic) unsigned int receivedPDelayRequestCounter; // ivar: _receivedPDelayRequestCounter
@property (readonly, nonatomic) unsigned int receivedPDelayResponseCounter; // ivar: _receivedPDelayResponseCounter
@property (readonly, nonatomic) unsigned int receivedPDelayResponseFollowUpCounter; // ivar: _receivedPDelayResponseFollowUpCounter
@property (readonly, nonatomic) unsigned int receivedPacketDiscardCounter; // ivar: _receivedPacketDiscardCounter
@property (readonly, nonatomic) unsigned int receivedSignalCounter; // ivar: _receivedSignalCounter
@property (readonly, nonatomic) unsigned int receivedSyncCounter; // ivar: _receivedSyncCounter
@property (readonly, nonatomic) unsigned int supersededDelayCounter; // ivar: _supersededDelayCounter
@property (readonly, nonatomic) unsigned int supersededSyncCounter; // ivar: _supersededSyncCounter
@property (readonly, nonatomic) unsigned int syncReceiptTimeoutCounter; // ivar: _syncReceiptTimeoutCounter
@property (readonly, nonatomic) unsigned int transmittedAnnounceCounter; // ivar: _transmittedAnnounceCounter
@property (readonly, nonatomic) unsigned int transmittedDelayRequestCounter; // ivar: _transmittedDelayRequestCounter
@property (readonly, nonatomic) unsigned int transmittedDelayResponseCounter; // ivar: _transmittedDelayResponseCounter
@property (readonly, nonatomic) unsigned int transmittedFollowUpCounter; // ivar: _transmittedFollowUpCounter
@property (readonly, nonatomic) unsigned int transmittedPDelayRequestCounter; // ivar: _transmittedPDelayRequestCounter
@property (readonly, nonatomic) unsigned int transmittedPDelayResponseCounter; // ivar: _transmittedPDelayResponseCounter
@property (readonly, nonatomic) unsigned int transmittedPDelayResponseFollowUpCounter; // ivar: _transmittedPDelayResponseFollowUpCounter
@property (readonly, nonatomic) unsigned int transmittedPacketDiscardCounter; // ivar: _transmittedPacketDiscardCounter
@property (readonly, nonatomic) unsigned int transmittedSignalCounter; // ivar: _transmittedSignalCounter
@property (readonly, nonatomic) unsigned int transmittedSyncCounter; // ivar: _transmittedSyncCounter


-(id)init;
-(id)initWithXPC:(id)arg0 ;


@end


#endif