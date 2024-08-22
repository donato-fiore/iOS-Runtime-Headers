// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSCONTEXTPROVIDEREXTENSIONCONTEXT_H
#define CLSCONTEXTPROVIDEREXTENSIONCONTEXT_H

@class NSExtensionContext;
@protocol CLSContextProviderInternal, CLSContextProvider;



@interface CLSContextProviderExtensionContext : NSExtensionContext <CLSContextProviderInternal, CLSContextProvider>





+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)getMainAppContextPathWithCompletion:(id)arg0 ;
-(void)updateDescendantsOfContext:(id)arg0 completion:(id)arg1 ;
-(void)updateDescendantsOfContextPath:(id)arg0 completion:(id)arg1 ;


@end


#endif