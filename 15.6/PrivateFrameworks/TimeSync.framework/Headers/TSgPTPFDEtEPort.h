// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSGPTPFDETEPORT_H
#define TSGPTPFDETEPORT_H



#import "TSgPTPNetworkPort.h"
#import "TSgPTPPortStatistics.h"

@interface TSgPTPFDEtEPort : TSgPTPNetworkPort

@property (retain, nonatomic) TSgPTPPortStatistics *statistics; // ivar: _statistics


+(id)diagnosticDescriptionForService:(id)arg0 withIndent:(id)arg1 ;
-(BOOL)_commonInitWithService:(id)arg0 ;
-(void)updateProperties;


@end


#endif