// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDREMOTEEVENTROUTERPRIMARYRESIDENTCLIENT_H
#define HMDREMOTEEVENTROUTERPRIMARYRESIDENTCLIENT_H

@class NSUUID;


#import "HMDRemoteEventRouterClient.h"

@interface HMDRemoteEventRouterPrimaryResidentClient : HMDRemoteEventRouterClient {
    NSUUID *_primaryResidentIdentifier;
}




-(BOOL)_clientIsEnabled:(id)arg0 ;
-(BOOL)clientIsEnabled:(id)arg0 ;
-(NSUInteger)messageTransportRestriction;
-(id)dumpStateDescription;
-(void)handlePrimaryResidentConfirmedDeviceIdentifierChangeNotification:(id)arg0 ;


@end


#endif