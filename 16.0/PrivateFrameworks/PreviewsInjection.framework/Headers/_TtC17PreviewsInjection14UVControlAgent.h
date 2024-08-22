// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC17PREVIEWSINJECTION14UVCONTROLAGENT_H
#define _TTC17PREVIEWSINJECTION14UVCONTROLAGENT_H

@protocol UVAgentControlServiceProtocol;

#import <Foundation/Foundation.h>


@interface _TtC17PreviewsInjection14UVControlAgent : NSObject <UVAgentControlServiceProtocol>

 {
    ? connection;
    ? $__lazy_storage_$_hostMessagePipeAgent;
    ? $__lazy_storage_$_shellMessagePipeAgent;
    ? activeSecurityScopedURLs;
}




-(id)init;
-(id)initWithConnection:(id)arg0 ;
-(void)connectHostMessagePipeWithEndpoint:(id)arg0 ;
-(void)connectShellMessagePipeWithEndpoint:(id)arg0 ;
-(void)copyURLWithURLWrapperData:(id)arg0 reply:(id)arg1 ;
-(void)createPreviewNonUIAgentWithEndpoint:(id)arg0 ;
-(void)createPreviewSceneAgentWithEndpoint:(id)arg0 forSceneIdentifier:(id)arg1 ;
-(void)grantExecutePermissionWithURLWrapperData:(id)arg0 reply:(id)arg1 ;


@end


#endif