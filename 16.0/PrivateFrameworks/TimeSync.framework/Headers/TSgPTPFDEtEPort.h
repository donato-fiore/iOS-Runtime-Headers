// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSGPTPFDETEPORT_H
#define TSGPTPFDETEPORT_H



#import "TSgPTPNetworkPort.h"
#import "TSXgPTPFDEtEPort.h"
#import "TSgPTPPortStatistics.h"

@interface TSgPTPFDEtEPort : TSgPTPNetworkPort {
    TSXgPTPFDEtEPort *_implXPC;
}


@property (retain, nonatomic) TSgPTPPortStatistics *statistics; // ivar: _statistics


+(id)diagnosticDescriptionForInfo:(id)arg0 withIndent:(id)arg1 ;
-(id)initWithImplXPC:(id)arg0 ;
-(void)updateWithXPCStatistics:(id)arg0 ;


@end


#endif