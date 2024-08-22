// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSXGPTPFDPTPPORT_H
#define TSXGPTPFDPTPPORT_H



#import "TSXgPTPNetworkPort.h"
#import "TSXgPTPPortStatistics.h"

@interface TSXgPTPFDPtPPort : TSXgPTPNetworkPort

@property (nonatomic) char localPDelayLogMeanInterval; // ivar: _localPDelayLogMeanInterval
@property (nonatomic) BOOL measuringPDelay; // ivar: _measuringPDelay
@property (nonatomic) BOOL multipleRemotes; // ivar: _multipleRemotes
@property (nonatomic) char remotePDelayLogMeanInterval; // ivar: _remotePDelayLogMeanInterval
@property (retain, nonatomic) TSXgPTPPortStatistics *statistics; // ivar: _statistics


-(void)_updateFromProperties:(id)arg0 ;


@end


#endif