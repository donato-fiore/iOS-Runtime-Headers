// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_RESOLUTION_REPORT_H
#define NWCONCRETE_NW_RESOLUTION_REPORT_H

@class NSString;
@protocol OS_nw_resolution_report, OS_nw_endpoint, OS_nw_array;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_resolution_report : NSObject <OS_nw_resolution_report>

 {
    NSUInteger milliseconds;
    NSObject<OS_nw_endpoint> *successful_endpoint;
    NSObject<OS_nw_endpoint> *preferred_endpoint;
    NSObject<OS_nw_array> *resolved_endpoints;
    unsigned int endpoint_count;
    int source;
    int protocol;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif