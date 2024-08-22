// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NLCRUNNER_H
#define NLCRUNNER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NLCRunner : NSObject {
    ? theCommand;
    ? session_cookie;
    BOOL simulationRunning;
}


@property (retain, nonatomic) NSString *interfaceName; // ivar: _interfaceName


+(id)sharedInstance;
-(id)init;
-(void)disableDNS;
-(void)disengage;
-(void)enableDNS;
-(void)engage;
-(void)modifySimulation;
-(void)setDownlinkPacketLossRate:(float)arg0 ;
-(void)setUplinkPacketLossRate:(float)arg0 ;


@end


#endif