// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEFILTERCONTROLEXTENSIONPROVIDERCONTEXT_H
#define NEFILTERCONTROLEXTENSIONPROVIDERCONTEXT_H

@class NSString;
@protocol NEFilterControlExtensionProviderProtocol, NEFilterControlExtensionProviderHostProtocol;


#import "NEFilterExtensionProviderContext.h"

@interface NEFilterControlExtensionProviderContext : NEFilterExtensionProviderContext <NEFilterControlExtensionProviderProtocol, NEFilterControlExtensionProviderHostProtocol>

 {
    BOOL _observing;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(Class)requiredProviderSuperClass;
-(id)extensionPoint;
-(void)dealloc;
-(void)dispose;
-(void)handleNewFlow:(id)arg0 completionHandler:(id)arg1 ;
-(void)handleReport:(id)arg0 ;
-(void)notifyRulesChanged;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)provideRemediationMap:(id)arg0 ;
-(void)provideURLAppendStringMap:(id)arg0 ;
-(void)startFilterWithOptions:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif