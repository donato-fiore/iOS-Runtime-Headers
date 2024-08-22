// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_PATH_PARAMETERS_H
#define NWCONCRETE_NW_PATH_PARAMETERS_H

@class NSString;
@protocol OS_nw_path_parameters, OS_nw_context, OS_nw_protocol_options, OS_nw_endpoint, OS_nw_interface;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_path_parameters : NSObject <OS_nw_path_parameters>

 {
    nw_parameters_path_value path_value;
    nw_parameters_joinable_path_value joinable_path_value;
    char * account_id;
    char * attribution_context;
    char * attributed_bundle;
    NSObject<OS_nw_context> *context;
    NSObject<OS_nw_protocol_options> *transport_options;
    NSObject<OS_nw_protocol_options> *internet_options;
    NSObject<OS_nw_endpoint> *local_address;
    NSObject<OS_nw_interface> *required_interface;
    *nw_parameters_extended_objects extended_objects;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif