// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSXGPTPFDETEPORT_H
#define TSXGPTPFDETEPORT_H



#import "TSXgPTPNetworkPort.h"
#import "TSXgPTPPortStatistics.h"

@interface TSXgPTPFDEtEPort : TSXgPTPNetworkPort

@property (retain, nonatomic) TSXgPTPPortStatistics *statistics; // ivar: _statistics


-(void)_updateFromProperties:(id)arg0 ;


@end


#endif