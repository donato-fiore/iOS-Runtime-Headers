// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUWIFITRAFFICPEER_H
#define CUWIFITRAFFICPEER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CUWiFiTrafficPeer : NSObject

@property (nonatomic) BOOL active; // ivar: _active
@property (nonatomic) unk peerIP; // ivar: _peerIP
@property (copy, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (nonatomic) unsigned int trafficFlags; // ivar: _trafficFlags


-(id)peerMACAddressData;


@end


#endif