// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_PROTOCOL_INSTANCE_REGISTRAR_H
#define NWCONCRETE_NW_PROTOCOL_INSTANCE_REGISTRAR_H

@class NSString;
@protocol OS_nw_protocol_instance_registrar;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_protocol_instance_registrar : NSObject <OS_nw_protocol_instance_registrar>

 {
    os_unfair_lock_s lock;
    nw_protocol_entry_list instances;
    nw_protocol_identifier identifier;
    NSUInteger instance_count;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)redactedDescription;
-(void)dealloc;


@end


#endif