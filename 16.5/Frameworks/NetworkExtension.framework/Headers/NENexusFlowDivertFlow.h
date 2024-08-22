// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NENEXUSFLOWDIVERTFLOW_H
#define NENEXUSFLOWDIVERTFLOW_H

@class NSUUID, NWEndpoint, NWParameters;


#import "NENexusFlow.h"

@interface NENexusFlowDivertFlow : NENexusFlow {
    NSUUID *_clientID;
    NWEndpoint *_internalEndpoint;
    NWParameters *_internalParameters;
    *_NEFlow _flowDivertFlow;
}




-(id)clientIdentifier;
-(id)endpoint;
-(id)parameters;
-(void)dealloc;


@end


#endif