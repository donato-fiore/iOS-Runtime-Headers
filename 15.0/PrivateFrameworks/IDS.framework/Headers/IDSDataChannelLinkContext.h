// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSDATACHANNELLINKCONTEXT_H
#define IDSDATACHANNELLINKCONTEXT_H

@class NSUUID, NSString, NSData;

#import <Foundation/Foundation.h>

#import "_IDSDataChannelLinkContext.h"

@interface IDSDataChannelLinkContext : NSObject {
    _IDSDataChannelLinkContext *_internal;
}


@property (readonly) NSUUID *QRSessionID;
@property (readonly) unsigned int RATType;
@property (readonly) NSInteger connectionType;
@property (readonly) BOOL isVirtualRelayLink;
@property (readonly) char linkID;
@property (readonly) NSUUID *linkUUID;
@property (readonly) unsigned int localDataSoMask;
@property (readonly) NSString *localInterfaceName;
@property (readonly) unsigned short localLinkFlags;
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
@property (readonly) BOOL serverIsDegraded;


-(id)description;
-(id)initWithAttributes:(struct ? *)arg0 maxBitrate:(unsigned int)arg1 relayServerProvider:(NSInteger)arg2 relaySessionToken:(id)arg3 relaySessionKey:(id)arg4 ;
-(id)initWithDummyInformation;
-(id)initWithLinkID:(char)arg0 linkUUID:(id)arg1 QRSessionID:(id)arg2 networkType:(unsigned char)arg3 connectionType:(NSInteger)arg4 RATType:(unsigned int)arg5 MTU:(unsigned short)arg6 remoteNetworkType:(unsigned char)arg7 remoteConnectionType:(NSInteger)arg8 remoteRATType:(unsigned int)arg9 maxBitrate:(unsigned int)arg10 relayServerProvider:(NSInteger)arg11 relaySessionToken:(id)arg12 relaySessionKey:(id)arg13 serverIsDegraded:(BOOL)arg14 ;
-(void)setMTU:(unsigned short)arg0 ;


@end


#endif