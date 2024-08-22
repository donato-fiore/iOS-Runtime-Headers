// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_ACTIVITY_H
#define NWCONCRETE_NW_ACTIVITY_H

@class NSString;
@protocol OS_nw_activity;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_activity : NSObject <OS_nw_activity>

 {
    unsigned char token;
    NSUInteger investigation_identifier;
    NSUInteger start_time;
    NSUInteger end_time;
    unsigned int fragments_quenched;
    retained_ptr<NWConcrete_nw_activity *> parent;
    unfair_mutex lock;
    description_cache description_cache;
    unsigned int label;
    unsigned int domain;
    unsigned int client_metric_count;
    int underlying_error_domain;
    int underlying_error_code;
    int reporting_strategy;
    int completion_reason;
    BOOL is_retry;
    BOOL is_lightweight;
    BOOL activated;
    BOOL completed;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)redactedDescription;
-(void)dealloc;


@end


#endif