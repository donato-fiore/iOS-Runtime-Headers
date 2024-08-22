// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLASTDOORAPSQUICKRELAYSELFALLOCTOKEN_H
#define BLASTDOORAPSQUICKRELAYSELFALLOCTOKEN_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface BlastDoorAPSQuickRelaySelfAllocToken : NSObject {
    ? aPSQuickRelaySelfAllocToken;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL has_relayPort;
@property (nonatomic, readonly) BOOL has_relayProvider;
@property (nonatomic, readonly) NSData *relayAccessToken;
@property (nonatomic, readonly) NSData *relayIp;
@property (nonatomic, readonly) NSData *relayIpv6;
@property (nonatomic, readonly) NSInteger relayPort;
@property (nonatomic, readonly) NSInteger relayProvider;
@property (nonatomic, readonly) NSData *relaySessionId;
@property (nonatomic, readonly) NSData *relaySessionKey;


-(id)init;


@end


#endif