// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _IDSDATACHANNELLINKCONTEXT_H
#define _IDSDATACHANNELLINKCONTEXT_H

@class NSUUID, NSData, NSString;

#import <Foundation/Foundation.h>


@interface _IDSDataChannelLinkContext : NSObject {
    char _linkID;
    unsigned char _networkType;
    NSInteger _connectionType;
    unsigned int _RATType;
    unsigned short _maxMTU;
    unsigned char _remoteNetworkType;
    NSInteger _remoteConnectionType;
    unsigned int _remoteRATType;
    unsigned int _maxBitrate;
    NSUUID *_linkUUID;
    NSUUID *_QRSessionID;
    NSInteger _relayServerProvider;
    NSData *_relaySessionToken;
    NSData *_relaySessionKey;
    BOOL _serverIsDegraded;
    unsigned short _localLinkFlags;
    unsigned short _remoteLinkFlags;
    unsigned int _localDataSoMask;
    unsigned int _remoteDataSoMask;
    BOOL _isVirtualRelayLink;
    NSString *_localInterfaceName;
    unsigned short _channelNumber;
    NSData *_hbhEncryptionkey;
    NSData *_hbhDecryptionkey;
    NSUUID *_childConnectionID;
    NSUInteger _parentUniquePID;
    char _delegatedLinkID;
    unsigned short _localRelayLinkID;
    unsigned short _remoteRelayLinkID;
    BOOL _directConnectionIsReady;
}




-(id)description;


@end


#endif