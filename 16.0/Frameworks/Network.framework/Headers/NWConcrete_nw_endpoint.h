// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_ENDPOINT_H
#define NWCONCRETE_NW_ENDPOINT_H

@class NSString;
@protocol OS_nw_endpoint, OS_nw_context, OS_nw_interface, OS_dnssd_cname_array, OS_nw_txt_record, OS_xpc_object, OS_nw_protocol_instance_registrar, OS_nw_array, OS_dispatch_data;

#import <Foundation/Foundation.h>

#import "NWConcrete_nw_endpoint.h"

@interface NWConcrete_nw_endpoint : NSObject <OS_nw_endpoint>

 {
    NSObject<OS_nw_context> *context;
    NSObject<OS_nw_interface> *interface;
    int interface_type;
    unsigned char agent_identifier;
    NSString *ns_description;
    char * description;
    NSString *ns_redacted_description;
    char * redacted_description;
    char * known_tracker_name;
    char * tracker_owner;
    NWConcrete_nw_endpoint *parent_endpoint;
    NSObject<OS_dnssd_cname_array> *cname_array;
    nw_endpoint_alterative_s first_alternative;
    ? alternative_list;
    os_unfair_lock_s endpoint_lock;
    os_unfair_lock_s description_lock;
    NSObject<OS_nw_txt_record> *txt_record;
    NSObject<OS_xpc_object> *signature;
    *nw_hash_table associations;
    NSObject<OS_nw_protocol_instance_registrar> *registrar;
    NSObject<OS_nw_array> *endpoint_edges;
    unsigned short alternate_port;
    BOOL is_local_domain;
    BOOL parent_is_proxy;
    BOOL is_registered;
    BOOL description_used;
    BOOL redacted_description_used;
    BOOL do_not_redact_description;
    BOOL approved_app_domain;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) char * domainForPolicy;
@property (retain, nonatomic) NSObject<OS_dispatch_data> *echConfig;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) char * hostname;
@property (readonly, nonatomic) unsigned short port;
@property (nonatomic) unsigned short priority;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned int type;
@property (nonatomic) unsigned short weight;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEndpoint:(id)arg0 matchFlags:(unsigned char)arg1 ;
-(NSUInteger)getHash;
-(char *)createDescription:(BOOL)arg0 ;
-(id)copyDictionary;
-(id)copyEndpoint;
-(id)init;
-(id)redactedDescription;
-(void)dealloc;


@end


#endif