// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_PATH_FLOW_REGISTRATION_H
#define NWCONCRETE_NW_PATH_FLOW_REGISTRATION_H

@class NSString;
@protocol OS_nw_path_flow_registration;

#import <Foundation/Foundation.h>

#import "NWConcrete_nw_path_evaluator.h"

@interface NWConcrete_nw_path_flow_registration : NSObject <OS_nw_path_flow_registration>

 {
    NWConcrete_nw_path_evaluator *parent_evaluator;
    unsigned char registration_id;
    unsigned char nexus_agent;
    *necp_all_stats flow_stats_area;
    *ifnet_stats_per_flow flow_interface_stats;
    *sk_nexusadv advisory;
    *nw_protocol_identifier upper_transport_stats_protocol;
    *nw_protocol_identifier transport_stats_protocol;
    *nw_protocol_identifier internet_stats_protocol;
    *void upper_transport_stats_region;
    *void transport_stats_region;
    *void internet_stats_region;
    unsigned int override_traffic_class;
    BOOL registered;
    BOOL partial_checksum_offload;
    BOOL uses_nexus;
    BOOL override_is_expensive;
    BOOL override_is_constrained;
    BOOL override_uses_wifi;
    BOOL override_uses_cellular;
    BOOL override_reason;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif