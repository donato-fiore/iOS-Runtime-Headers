// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEFLOWNEXUS_H
#define NEFLOWNEXUS_H

@class NSData, NWRemoteConnectionDirector, NSMutableSet;
@protocol OS_dispatch_queue;


#import "NENexus.h"
#import "NEFlowDivertFileHandle.h"

@interface NEFlowNexus : NENexus {
    unsigned int _flowDivertControlUnit;
    *_NEFlowDirector _flowDivertDirector;
    NEFlowDivertFileHandle *_flowDivertControl;
    NSObject<OS_dispatch_queue> *_flowDivertQueue;
    NSData *_flowDivertTokenHMACKey;
    NWRemoteConnectionDirector *_connectionDirector;
    NSMutableSet *_browseAssertions;
}


@property (nonatomic) BOOL supportsBrowseRequests; // ivar: _supportsBrowseRequests


-(BOOL)setDiscoveredEndpoints:(id)arg0 forClient:(id)arg1 ;
-(id)initWithName:(id)arg0 delegate:(id)arg1 ;
-(void)dealloc;
-(void)handleAssertFromClient:(id)arg0 ;
-(void)handleUnassertFromClient:(id)arg0 ;
-(void)setRemoteConnectionDirector:(id)arg0 ;


@end


#endif