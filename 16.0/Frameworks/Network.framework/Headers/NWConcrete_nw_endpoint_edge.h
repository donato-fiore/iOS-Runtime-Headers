// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_ENDPOINT_EDGE_H
#define NWCONCRETE_NW_ENDPOINT_EDGE_H

@class NSString;
@protocol OS_nw_endpoint_edge, OS_nw_endpoint;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_endpoint_edge : NSObject <OS_nw_endpoint_edge>

 {
    nw_protocol_identifier identifier;
    NSObject<OS_nw_endpoint> *endpoint;
    char * name;
    BOOL wildcard;
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