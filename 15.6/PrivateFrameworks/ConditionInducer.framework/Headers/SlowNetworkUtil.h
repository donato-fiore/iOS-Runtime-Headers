// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SLOWNETWORKUTIL_H
#define SLOWNETWORKUTIL_H

@class NSNumber, NSData, NSString;

#import <Foundation/Foundation.h>


@interface SlowNetworkUtil : NSObject {
    ? nlcCommand;
    ? sessionCookie;
}


@property (readonly, nonatomic) NSNumber *dnsDelayValue; // ivar: dnsDelayValue
@property (readonly, nonatomic) NSNumber *downlinkBandwidth; // ivar: downlinkBandwidth
@property (readonly, nonatomic) NSNumber *downlinkDelay; // ivar: downlinkDelay
@property (readonly, nonatomic) NSNumber *downlinkPacketLossRatio; // ivar: downlinkPacketLossRatio
@property (readonly, nonatomic) NSNumber *excludeLoopback; // ivar: excludeLoopback
@property (retain, nonatomic) NSData *profileData; // ivar: _profileData
@property (readonly, nonatomic) NSString *profileName; // ivar: profileName
@property (readonly, nonatomic) NSNumber *uplinkBandwidth; // ivar: uplinkBandwidth
@property (readonly, nonatomic) NSNumber *uplinkDelay; // ivar: uplinkDelay
@property (readonly, nonatomic) NSNumber *uplinkPacketLossRatio; // ivar: uplinkPacketLossRatio


+(id)loadNetworkProfilesData;
-(id)init;
-(id)readInProfile:(id)arg0 ;
-(void)extractProfileSetting:(id)arg0 ;
-(void)loadProfile:(id)arg0 ;
-(void)startNLC;
-(void)stopNLC;


@end


#endif