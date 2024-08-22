// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEFILTERCONTROLEXTENSIONPROVIDERHOSTCONTEXT_H
#define NEFILTERCONTROLEXTENSIONPROVIDERHOSTCONTEXT_H

@class NSString;
@protocol NEFilterControlExtensionProviderProtocol, NEFilterControlExtensionProviderHostProtocol;


#import "NEFilterExtensionProviderHostContext.h"

@interface NEFilterControlExtensionProviderHostContext : NEFilterExtensionProviderHostContext <NEFilterControlExtensionProviderProtocol, NEFilterControlExtensionProviderHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)handleNewFlow:(id)arg0 completionHandler:(id)arg1 ;
-(void)handleReport:(id)arg0 ;
-(void)notifyRulesChanged;
-(void)provideRemediationMap:(id)arg0 ;
-(void)provideURLAppendStringMap:(id)arg0 ;


@end


#endif