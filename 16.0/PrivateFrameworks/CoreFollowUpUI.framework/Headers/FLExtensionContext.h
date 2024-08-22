// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLEXTENSIONCONTEXT_H
#define FLEXTENSIONCONTEXT_H

@class NSExtensionContext, NSString;
@protocol FLExtensionRemoteInterface;



@interface FLExtensionContext : NSExtensionContext <FLExtensionRemoteInterface>

 {
    id *_shadowPrincipalObject;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)_shadowPrincipalObject;
-(id)extensionLogicProvider;
-(id)hostContextWithErrorHandler:(id)arg0 ;
-(id)syncHostContextWithErrorHandler:(id)arg0 ;
-(void)followUpPerformUpdateWithCompletionHandler:(id)arg0 ;
-(void)processFollowUpItem:(id)arg0 selectedAction:(id)arg1 completion:(id)arg2 ;


@end


#endif