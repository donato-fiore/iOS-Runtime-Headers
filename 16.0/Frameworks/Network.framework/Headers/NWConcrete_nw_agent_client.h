// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_AGENT_CLIENT_H
#define NWCONCRETE_NW_AGENT_CLIENT_H

@class NSString;
@protocol OS_nw_agent_client, OS_nw_endpoint, OS_nw_parameters, OS_nw_path, OS_nw_advertise_descriptor, OS_nw_browse_descriptor, OS_nw_group_descriptor, OS_nw_channel;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_agent_client : NSObject <OS_nw_agent_client>

 {
    unsigned char client_uuid;
    char log_string;
    NSObject<OS_nw_endpoint> *endpoint;
    NSObject<OS_nw_parameters> *parameters;
    NSObject<OS_nw_path> *path;
    NSObject<OS_nw_advertise_descriptor> *advertise_descriptor;
    NSObject<OS_nw_browse_descriptor> *browse_descriptor;
    NSObject<OS_nw_group_descriptor> *group_descriptor;
    NSObject<OS_nw_channel> *channel;
    ? framer_protocol;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithMessage:(char *)arg0 agent:(id)arg1 context:(id)arg2 ;
-(void)dealloc;


@end


#endif