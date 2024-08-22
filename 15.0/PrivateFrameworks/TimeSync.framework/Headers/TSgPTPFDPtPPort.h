// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSGPTPFDPTPPORT_H
#define TSGPTPFDPTPPORT_H



#import "TSgPTPNetworkPort.h"
#import "TSgPTPPortStatistics.h"

@interface TSgPTPFDPtPPort : TSgPTPNetworkPort

@property (nonatomic) char localPDelayLogMeanInterval; // ivar: _localPDelayLogMeanInterval
@property (nonatomic) BOOL measuringPDelay; // ivar: _measuringPDelay
@property (nonatomic) BOOL multipleRemotes; // ivar: _multipleRemotes
@property (nonatomic) char remotePDelayLogMeanInterval; // ivar: _remotePDelayLogMeanInterval
@property (retain, nonatomic) TSgPTPPortStatistics *statistics; // ivar: _statistics


+(id)diagnosticDescriptionForService:(id)arg0 withIndent:(id)arg1 ;
-(BOOL)_commonInitWithService:(id)arg0 ;
-(void)updateProperties;


@end


#endif