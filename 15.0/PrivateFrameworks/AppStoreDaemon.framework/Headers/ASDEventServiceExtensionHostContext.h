// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDEVENTSERVICEEXTENSIONHOSTCONTEXT_H
#define ASDEVENTSERVICEEXTENSIONHOSTCONTEXT_H

@class NSString;
@protocol ASDEventServiceExtensionHostXPCInterface;


#import "ASDEventServiceExtensionContext.h"

@interface ASDEventServiceExtensionHostContext : ASDEventServiceExtensionContext <ASDEventServiceExtensionHostXPCInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;




@end


#endif