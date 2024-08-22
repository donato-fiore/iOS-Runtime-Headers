// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEFLOWNEXUS_H
#define NEFLOWNEXUS_H

@class NSMutableSet, NWRemoteConnectionDirector, NSData;
@protocol OS_dispatch_queue;


#import "NENexus.h"
#import "NEFlowDivertFileHandle.h"

@interface NEFlowNexus : NENexus

@property (retain) NSMutableSet *browseAssertions; // ivar: _browseAssertions
@property (retain) NWRemoteConnectionDirector *connectionDirector; // ivar: _connectionDirector
@property (retain) NEFlowDivertFileHandle *flowDivertControl; // ivar: _flowDivertControl
@property unsigned int flowDivertControlUnit; // ivar: _flowDivertControlUnit
@property *_NEFlowDirector flowDivertDirector; // ivar: _flowDivertDirector
@property (retain) NSObject<OS_dispatch_queue> *flowDivertQueue; // ivar: _flowDivertQueue
@property (retain) NSData *flowDivertTokenHMACKey; // ivar: _flowDivertTokenHMACKey
@property (nonatomic) BOOL supportsBrowseRequests; // ivar: _supportsBrowseRequests


-(BOOL)installFlowDivertRules;
-(BOOL)setDiscoveredEndpoints:(id)arg0 forClient:(id)arg1 ;
-(BOOL)setupFlowDivertDirector;
-(BOOL)setupFlowDivertPolicies;
-(id)initWithName:(id)arg0 delegate:(id)arg1 ;
-(void)connectNewFlow:(id)arg0 ;
-(void)dealloc;
-(void)disconnectFlow:(id)arg0 ;
-(void)flowDivertNewFlow:(struct _NEFlow *)arg0 completionHandler:(id)arg1 ;
-(void)handleAssertFromClient:(id)arg0 ;
-(void)handleUnassertFromClient:(id)arg0 ;
-(void)setRemoteConnectionDirector:(id)arg0 ;


@end


#endif