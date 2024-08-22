// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDXPCMESSAGETRANSPORTFACTORY_H
#define HMDXPCMESSAGETRANSPORTFACTORY_H

@protocol HMDXPCMessageTransportFactory;

#import <Foundation/Foundation.h>

#import "HMDXPCMessageTransport.h"

@interface HMDXPCMessageTransportFactory : NSObject <HMDXPCMessageTransportFactory>



@property (readonly) HMDXPCMessageTransport *defaultTransport;




@end


#endif