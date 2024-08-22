// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_ESTABLISHMENT_REPORT_H
#define NWCONCRETE_NW_ESTABLISHMENT_REPORT_H

@class NSString;
@protocol OS_nw_establishment_report, OS_nw_array;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_establishment_report : NSObject <OS_nw_establishment_report>

 {
    NSUInteger attempt_started_after_milliseconds;
    NSUInteger duration_milliseconds;
    NSUInteger resolution_started_after_milliseconds;
    NSUInteger flow_started_after_milliseconds;
    NSObject<OS_nw_array> *proxy_endpoints;
    int privacy_stance;
    NSObject<OS_nw_array> *protocol_reports;
    NSObject<OS_nw_array> *resolution_reports;
    unsigned int previous_attempt_count;
    BOOL proxy_configured;
    BOOL used_proxy;
    BOOL __pad_bits;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif