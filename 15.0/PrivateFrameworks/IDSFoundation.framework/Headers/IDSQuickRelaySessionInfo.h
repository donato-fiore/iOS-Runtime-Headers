// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSQUICKRELAYSESSIONINFO_H
#define IDSQUICKRELAYSESSIONINFO_H

@class NSArray, NSString, NSUUID, NSData;

#import <Foundation/Foundation.h>


@interface IDSQuickRelaySessionInfo : NSObject {
    sockaddr_storage _serverAddress;
    sockaddr_storage _serverAddressIPv6;
}


@property (readonly) NSArray *allParticipantIDs; // ivar: _allParticipantIDs
@property (readonly) NSString *allocateRequestID; // ivar: _allocateRequestID
@property (readonly) CGFloat allocateTime; // ivar: _allocateTime
@property (readonly) NSInteger allocateType; // ivar: _allocateType
@property (readonly) NSUUID *defaultDeviceLocalCBUUID; // ivar: _defaultDeviceLocalCBUUID
@property (readonly) NSUUID *defaultDeviceRemoteCBUUID; // ivar: _defaultDeviceRemoteCBUUID
@property (readonly) unsigned int generationCounter; // ivar: _generationCounter
@property (readonly) NSString *groupID; // ivar: _groupID
@property (readonly) NSString *idsSessionID; // ivar: _idsSessionID
@property (readonly) BOOL isInitiator; // ivar: _isInitiator
@property (readonly) NSInteger linkProtocol; // ivar: _linkProtocol
@property (readonly) unsigned char maxConcurrentStreams; // ivar: _maxConcurrentStreams
@property (readonly) NSInteger participantID; // ivar: _participantID
@property (readonly) unsigned char protocolVersion; // ivar: _protocolVersion
@property (readonly) NSArray *publishedStreams; // ivar: _publishedStreams
@property (readonly) NSInteger relayServerProviderType; // ivar: _relayServerProviderType
@property (readonly) NSString *relaySessionID; // ivar: _relaySessionID
@property (readonly) NSData *relaySessionKey; // ivar: _relaySessionKey
@property (readonly) NSData *relaySessionToken; // ivar: _relaySessionToken
@property (readonly) NSString *reportingDataBlob; // ivar: _reportingDataBlob
@property (readonly) *sockaddr_storage serverAddress;
@property (readonly) *sockaddr_storage serverAddressIPv6;
@property (readonly) NSData *softwareData; // ivar: _softwareData
@property (readonly) NSString *stableGroupID; // ivar: _stableGroupID
@property (readonly) NSArray *subscribedStreams; // ivar: _subscribedStreams


-(NSInteger)parseSessionInfo:(id)arg0 ;


@end


#endif