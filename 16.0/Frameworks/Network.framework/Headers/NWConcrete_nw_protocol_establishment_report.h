// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_PROTOCOL_ESTABLISHMENT_REPORT_H
#define NWCONCRETE_NW_PROTOCOL_ESTABLISHMENT_REPORT_H

@class NSString;
@protocol OS_nw_protocol_establishment_report, OS_nw_protocol_definition;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_protocol_establishment_report : NSObject <OS_nw_protocol_establishment_report>

 {
    NSUInteger handshake_milliseconds;
    NSUInteger handshake_rtt_milliseconds;
    NSObject<OS_nw_protocol_definition> *protocol;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif