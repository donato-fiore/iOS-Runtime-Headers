// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCSESSIONPARTICIPANTCONFIG_H
#define VCSESSIONPARTICIPANTCONFIG_H

@class NSString, NSData;
@protocol OS_nw_activity;

#import <Foundation/Foundation.h>

#import "VCSessionMediaNegotiator.h"
#import "VCNetworkFeedbackController.h"
#import "VCSecurityKeyManager.h"

@interface VCSessionParticipantConfig : NSObject {
    BOOL _screeEnabled;
    *void _spatialMetadata;
}


@property (nonatomic) BOOL audioEnabled; // ivar: _audioEnabled
@property (nonatomic) BOOL audioMuted; // ivar: _audioMuted
@property (nonatomic) BOOL audioPaused; // ivar: _audioPaused
@property (nonatomic) float audioPosition; // ivar: _audioPosition
@property (nonatomic) BOOL frequencyMeteringEnabled; // ivar: _frequencyMeteringEnabled
@property (retain, nonatomic) NSString *idsDestination; // ivar: _idsDestination
@property (nonatomic) NSUInteger idsParticipantID; // ivar: _idsParticipantID
@property (nonatomic) BOOL isGKVoiceChat; // ivar: _isGKVoiceChat
@property (nonatomic) BOOL isLowLatencyAudio; // ivar: _isLowLatencyAudio
@property (nonatomic) BOOL isOneToOneModeEnabled; // ivar: _isOneToOneModeEnabled
@property (retain, nonatomic) VCSessionMediaNegotiator *mediaNegotiator; // ivar: _mediaNegotiator
@property (retain, nonatomic) VCNetworkFeedbackController *networkFeedbackController; // ivar: _networkFeedbackController
@property (nonatomic) NSObject<OS_nw_activity> *nwActivity; // ivar: _nwActivity
@property (retain, nonatomic) NSData *participantData; // ivar: _participantData
@property (retain, nonatomic) NSData *positionalInfo; // ivar: _positionalInfo
@property (nonatomic) int processId; // ivar: _processId
@property (nonatomic) unsigned int prominenceIndex; // ivar: _prominenceIndex
@property (nonatomic) BOOL screenEnabled; // ivar: _screenEnabled
@property (retain, nonatomic) VCSecurityKeyManager *securityKeyManager; // ivar: _securityKeyManager
@property (nonatomic) NSInteger sessionMode; // ivar: _sessionMode
@property (retain, nonatomic) NSString *sessionUUID; // ivar: _sessionUUID
@property (nonatomic) *void spatialMetadata;
@property (nonatomic) unsigned int transportSessionID; // ivar: _transportSessionID
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid
@property (nonatomic) BOOL videoEnabled; // ivar: _videoEnabled
@property (nonatomic) BOOL videoPaused; // ivar: _videoPaused
@property (nonatomic) unsigned char videoQuality; // ivar: _videoQuality
@property (nonatomic) unsigned int visibilityIndex; // ivar: _visibilityIndex
@property (nonatomic) float volume; // ivar: _volume


-(id)description;
-(void)cleanupNwActivity;
-(void)dealloc;


@end


#endif