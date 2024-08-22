// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXXPCCHANNELSOURCE_H
#define CXXPCCHANNELSOURCE_H



#import "CXChannelSource.h"
#import "CXChannelServiceClient.h"

@interface CXXPCChannelSource : CXChannelSource

@property (retain, nonatomic) CXChannelServiceClient *client; // ivar: _client


-(BOOL)isConnected;
-(BOOL)isPermittedToUseBluetoothAccessories;
-(BOOL)isPermittedToUsePrivateAPI;
-(BOOL)isPermittedToUsePublicAPI;
-(id)bundleIdentifier;
-(id)bundleURL;
-(id)initWithClient:(id)arg0 ;
-(id)localizedName;
-(id)vendorProtocolDelegate;
-(int)processIdentifier;
-(struct ? )auditToken;


@end


#endif