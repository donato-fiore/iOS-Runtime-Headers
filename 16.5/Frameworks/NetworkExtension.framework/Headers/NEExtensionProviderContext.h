// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEEXTENSIONPROVIDERCONTEXT_H
#define NEEXTENSIONPROVIDERCONTEXT_H

@class NSExtensionContext, NSString, NSXPCConnection;
@protocol NEExtensionProviderProtocol, NEExtensionProviderHostProtocol, OS_os_transaction;


#import "NEConfiguration.h"
#import "NEProvider.h"

@interface NEExtensionProviderContext : NSExtensionContext <NEExtensionProviderProtocol, NEExtensionProviderHostProtocol>

 {
    id<NEExtensionProviderHostProtocol> *_hostContext;
    NSString *_description;
    BOOL _isDisposed;
    BOOL _started;
    NEConfiguration *_configuration;
    id *_stopCompletionHandler;
    NSXPCConnection *_hostConnection;
    NEProvider *_provider;
    NSObject<OS_os_transaction> *_transaction;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *extensionPoint;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) Class requiredProviderSuperClass;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)_principalObject;
-(id)initWithProvider:(id)arg0 ;
-(void)cancelWithError:(id)arg0 ;
-(void)completeSession;
-(void)createWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)displayMessage:(id)arg0 message:(id)arg1 completionHandler:(id)arg2 ;
-(void)dispose;
-(void)dropProvider;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setConfiguration:(id)arg0 extensionIdentifier:(id)arg1 ;
-(void)sleepWithCompletionHandler:(id)arg0 ;
-(void)startWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)startedWithError:(id)arg0 ;
-(void)stopWithReason:(int)arg0 ;
-(void)validateWithCompletionHandler:(id)arg0 ;
-(void)wake;


@end


#endif