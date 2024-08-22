// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SECCONCRETE_SEC_PROTOCOL_CONFIGURATION_BUILDER_H
#define SECCONCRETE_SEC_PROTOCOL_CONFIGURATION_BUILDER_H

@class NSString;
@protocol OS_sec_protocol_configuration_builder;

#import <Foundation/Foundation.h>


@interface SecConcrete_sec_protocol_configuration_builder : NSObject <OS_sec_protocol_configuration_builder>

 {
    *__CFDictionary dictionary;
    BOOL is_apple;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithDictionary:(struct __CFDictionary *)arg0 andInternalFlag:(BOOL)arg1 ;


@end


#endif