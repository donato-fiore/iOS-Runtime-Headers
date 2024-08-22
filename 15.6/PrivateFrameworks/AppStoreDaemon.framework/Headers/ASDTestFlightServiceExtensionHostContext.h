// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDTESTFLIGHTSERVICEEXTENSIONHOSTCONTEXT_H
#define ASDTESTFLIGHTSERVICEEXTENSIONHOSTCONTEXT_H

@class NSString;
@protocol ASDTestFlightServiceExtensionHostXPCInterface;


#import "ASDTestFlightServiceExtensionContext.h"

@interface ASDTestFlightServiceExtensionHostContext : ASDTestFlightServiceExtensionContext <ASDTestFlightServiceExtensionHostXPCInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;




@end


#endif