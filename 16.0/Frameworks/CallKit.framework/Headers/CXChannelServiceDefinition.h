// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXCHANNELSERVICEDEFINITION_H
#define CXCHANNELSERVICEDEFINITION_H

@class Protocol, NSString;
@protocol CXServiceDefinition;

#import <Foundation/Foundation.h>

#import "CXServiceDomain.h"

@interface CXChannelServiceDefinition : NSObject <CXServiceDefinition>



@property (readonly, copy) Protocol *clientXPCInterface;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) CXServiceDomain *domain;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *name;
@property (readonly, copy) Protocol *serverXPCInterface;
@property (readonly) Class superclass;




@end


#endif