// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSDATACHANNELLINKCONTEXT_H
#define IDSDATACHANNELLINKCONTEXT_H

@class NSUUID, NSData, NSString;

#import <Foundation/Foundation.h>

#import "_IDSDataChannelLinkContext.h"

@interface IDSDataChannelLinkContext : NSObject {
    _IDSDataChannelLinkContext *_internal;
}


@property (readonly) NSUUID *QRSessionID;
@property (readonly) unsigned int RATType;
@property (readonly) unsigned short channelNumber;
@property (retain) NSUUID *childConnectionID;
@property (readonly) NSInteger connectionType;
@property (readonly) NSInteger dataPathType; // ivar: _dataPathType
@property (readonly) char delegatedLinkID;
@property BOOL directConnectionReady;
@property (readonly) NSData *hbhDecryptionkey;
@property (readonly) NSData *hbhEncryptionkey;
@property (readonly) BOOL isVirtualRelayLink;
@property (readonly) char linkID;
@property (readonly) NSUUID *linkUUID;
@property (readonly) unsigned int localDataSoMask;
@property (readonly) NSString *localInterfaceName;
@property (readonly) unsigned short localLinkFlags;
@property (readonly) unsigned short localRelayLinkID;
@property (readonly) unsigned int maxBitrate;
@property (readonly) unsigned short maxMTU;
@property (readonly) unsigned char networkType;
@property (readonly) NSInteger relayServerProvider;
@property (readonly) NSData *relaySessionKey;
@property (readonly) NSData *relaySessionToken;
@property (readonly) NSInteger remoteConnectionType;
@property (readonly) unsigned int remoteDataSoMask;
@property (readonly) unsigned short remoteLinkFlags;
@property (readonly) unsigned char remoteNetworkType;
@property (readonly) unsigned int remoteRATType;
@property (readonly) unsigned short remoteRelayLinkID;
@property (readonly) BOOL serverIsDegraded;
@property unsigned int totalPacketsReceivedOnLink; // ivar: _totalPacketsReceivedOnLink
@property unsigned int totalPacketsSentOnLink; // ivar: _totalPacketsSentOnLink


-(id)description;
-(id)initWithAttributes:(struct ? *)arg0 maxBitrate:(unsigned int)arg1 relayServerProvider:(NSInteger)arg2 relaySessionToken:(id)arg3 relaySessionKey:(id)arg4 hbhEncryptionkey:(id)arg5 hbhDecryptionkey:(id)arg6 ;
-(id)initWithDummyInformation;
-(void)setDelegateLinkID:(unsigned char)arg0 ;
-(void)setMTU:(unsigned short)arg0 ;


@end


#endif