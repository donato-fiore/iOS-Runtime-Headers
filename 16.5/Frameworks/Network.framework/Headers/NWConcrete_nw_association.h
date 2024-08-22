// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_ASSOCIATION_H
#define NWCONCRETE_NW_ASSOCIATION_H

@class NSString;
@protocol OS_nw_association, OS_nw_endpoint, OS_nw_path_parameters, OS_nw_path_evaluator, OS_nw_path;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_association : NSObject <OS_nw_association>

 {
    NSObject<OS_nw_endpoint> *endpoint;
    NSObject<OS_nw_path_parameters> *path_parameters;
    NSObject<OS_nw_path_evaluator> *evaluator;
    NSObject<OS_nw_path> *previous_path;
    *nw_hash_table handles;
    *nw_hash_table connected_flow_handles;
    *nw_hash_table cache_entries;
    *void deactivation_timer;
    unsigned int dry_run_count;
    BOOL dormant;
    BOOL in_force_update;
    BOOL __pad_bits;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)redactedDescription;
-(void)dealloc;


@end


#endif