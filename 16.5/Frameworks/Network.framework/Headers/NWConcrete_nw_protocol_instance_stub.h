// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_PROTOCOL_INSTANCE_STUB_H
#define NWCONCRETE_NW_PROTOCOL_INSTANCE_STUB_H

@class NSString;
@protocol OS_nw_protocol_instance_stub;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_protocol_instance_stub : NSObject <OS_nw_protocol_instance_stub>

 {
    ? protocol;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(?)getProtocolStructure;
-(void)dealloc;


@end


#endif