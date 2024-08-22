// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NENEXUSFLOWDIVERTFLOW_H
#define NENEXUSFLOWDIVERTFLOW_H

@class NSUUID, NWEndpoint, NWParameters;


#import "NENexusFlow.h"

@interface NENexusFlowDivertFlow : NENexusFlow

@property (retain) NSUUID *clientID; // ivar: _clientID
@property *_NEFlow flowDivertFlow; // ivar: _flowDivertFlow
@property (retain) NWEndpoint *internalEndpoint; // ivar: _internalEndpoint
@property (retain) NWParameters *internalParameters; // ivar: _internalParameters


-(id)clientIdentifier;
-(id)endpoint;
-(id)initWithFlowDivertFlow:(struct _NEFlow *)arg0 ;
-(id)parameters;
-(void)dealloc;


@end


#endif