// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DOCREMOTECONTEXT_H
#define DOCREMOTECONTEXT_H

@class NSExtensionContext;
@protocol DOCRemoteContextInterface;



@interface DOCRemoteContext : NSExtensionContext <DOCRemoteContextInterface>





+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)serviceProxyWithErrorHandler:(id)arg0 ;
-(void)updateAppearance:(id)arg0 completionBlock:(id)arg1 ;
-(void)updateAppearance:(id)arg0 shouldFlushCA:(BOOL)arg1 completionBlock:(id)arg2 ;
-(void)updateEditingTo:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif