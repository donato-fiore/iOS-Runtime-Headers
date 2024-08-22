// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMCONFIGURATIONSUBSCRIBEREXTENSIONCONTEXT_H
#define RMCONFIGURATIONSUBSCRIBEREXTENSIONCONTEXT_H

@class NSExtensionContext, NSString;
@protocol RMStoreConfigurationSubscriberExtensionHostContext, RMStoreConfigurationSubscriberExtensionVendorContext;



@interface RMConfigurationSubscriberExtensionContext : NSExtensionContext <RMStoreConfigurationSubscriberExtensionHostContext, RMStoreConfigurationSubscriberExtensionVendorContext>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_plistAndErrorClasses;
+(id)_plistClasses;
-(void)fetchThenApplyConfigurationsWithCompletionHandler:(id)arg0 ;


@end


#endif