// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSTUBINTERFACE_H
#define WFSTUBINTERFACE_H



#import "WFInterface.h"
#import "WFNetworkScanRecord.h"

@interface WFStubInterface : WFInterface {
    WFNetworkScanRecord *_currentNetwork;
}


@property BOOL currentNetworkIsDirected; // ivar: _currentNetworkIsDirected
@property BOOL hasNoGatewayIP; // ivar: _hasNoGatewayIP
@property BOOL ipv4SelfAssigned; // ivar: _ipv4SelfAssigned


-(id)currentNetwork;
-(id)interfaceName;
-(void)setCurrentNetwork:(id)arg0 ;


@end


#endif