// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
}


@property (retain) NEConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *extensionPoint;
@property (readonly) NSUInteger hash;
@property (readonly) NSXPCConnection *hostConnection; // ivar: _hostConnection
@property (nonatomic) BOOL isDisposed; // ivar: _isDisposed
@property (readonly, nonatomic) NEProvider *provider; // ivar: _provider
@property (readonly, nonatomic) Class requiredProviderSuperClass;
@property (nonatomic) BOOL started; // ivar: _started
@property (copy) id *stopCompletionHandler; // ivar: _stopCompletionHandler
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction; // ivar: _transaction


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(NSInteger)neStopReasonToProviderStopReason:(int)arg0 ;
-(id)_principalObject;
-(id)hostContext;
-(id)initWithConnection:(id)arg0 ;
-(id)initWithProvider:(id)arg0 ;
-(void)cancelWithError:(id)arg0 ;
-(void)completeSession;
-(void)createWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)displayMessage:(id)arg0 message:(id)arg1 completionHandler:(id)arg2 ;
-(void)dispose;
-(void)dropProvider;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)sleepWithCompletionHandler:(id)arg0 ;
-(void)startWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)startedWithError:(id)arg0 ;
-(void)stopWithReason:(int)arg0 ;
-(void)validateWithCompletionHandler:(id)arg0 ;
-(void)wake;


@end


#endif