// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDEVENTSERVICEEXTENSIONREMOTECONTEXT_H
#define ASDEVENTSERVICEEXTENSIONREMOTECONTEXT_H

@class NSString;
@protocol ASDEventServiceExtensionRemoteXPCInterface;


#import "ASDEventServiceExtensionContext.h"
#import "ASDEventServiceExtension.h"

@interface ASDEventServiceExtensionRemoteContext : ASDEventServiceExtensionContext <ASDEventServiceExtensionRemoteXPCInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) ASDEventServiceExtension *extensionInstance; // ivar: _extensionInstance
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)didReceiveInstallationEvent:(id)arg0 ;


@end


#endif