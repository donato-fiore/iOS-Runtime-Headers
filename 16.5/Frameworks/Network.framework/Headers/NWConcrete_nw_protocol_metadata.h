// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_PROTOCOL_METADATA_H
#define NWCONCRETE_NW_PROTOCOL_METADATA_H

@class NSString;
@protocol OS_nw_protocol_metadata;

#import <Foundation/Foundation.h>

#import "NWConcrete_nw_protocol_definition.h"

@interface NWConcrete_nw_protocol_metadata : NSObject <OS_nw_protocol_metadata>

 {
    NWConcrete_nw_protocol_definition *definition;
    unsigned char identifier;
    *void handle;
    *char data;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dealloc;


@end


#endif