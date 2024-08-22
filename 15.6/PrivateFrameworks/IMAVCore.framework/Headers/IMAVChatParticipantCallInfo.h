// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMAVCHATPARTICIPANTCALLINFO_H
#define IMAVCHATPARTICIPANTCALLINFO_H

@class NSData, NSNumber, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface IMAVChatParticipantCallInfo : NSObject

@property (nonatomic) unsigned int callID; // ivar: _callID
@property (nonatomic) BOOL inviteNeedsDelivery; // ivar: _inviteNeedsDelivery
@property (readonly, nonatomic) BOOL isAudioPaused; // ivar: _isAudioPaused
@property (nonatomic) BOOL isBeingHandedOff; // ivar: _isBeingHandedOff
@property (readonly, nonatomic) BOOL isFinished;
@property (nonatomic) BOOL isReinitiate; // ivar: _isReinitiate
@property (nonatomic) BOOL isVideoPaused; // ivar: _isVideoPaused
@property (nonatomic) NSUInteger localConnectionType; // ivar: _localConnectionType
@property (retain, nonatomic) NSData *localICEData; // ivar: _localICEData
@property (retain, nonatomic) NSData *localNATIP; // ivar: _localNATIP
@property (retain, nonatomic) NSNumber *localNATType; // ivar: _localNATType
@property (retain, nonatomic) NSData *localSKEData; // ivar: _localSKEData
@property (retain, nonatomic) NSString *peerCN; // ivar: _peerCN
@property (retain, nonatomic) NSNumber *peerProtocolVersion; // ivar: _peerProtocolVersion
@property (retain, nonatomic) NSDictionary *relayCancel; // ivar: _relayCancel
@property (retain, nonatomic) NSDictionary *relayInitiate; // ivar: _relayInitiate
@property (retain, nonatomic) NSDictionary *relayUpdate; // ivar: _relayUpdate
@property (nonatomic) NSUInteger remoteConnectionType; // ivar: _remoteConnectionType
@property (retain, nonatomic) NSData *remoteICEData; // ivar: _remoteICEData
@property (retain, nonatomic) NSData *remoteNATIP; // ivar: _remoteNATIP
@property (retain, nonatomic) NSNumber *remoteNATType; // ivar: _remoteNATType
@property (retain, nonatomic) NSData *remoteSKEData; // ivar: _remoteSKEData
@property (nonatomic) NSInteger state; // ivar: _state


-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif