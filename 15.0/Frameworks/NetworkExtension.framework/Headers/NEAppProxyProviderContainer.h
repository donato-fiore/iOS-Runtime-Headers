// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEAPPPROXYPROVIDERCONTAINER_H
#define NEAPPPROXYPROVIDERCONTAINER_H

@protocol NEAppProxyProviderContainerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NEAppProxyProvider.h"

@interface NEAppProxyProviderContainer : NSObject

@property (retain) NSObject<NEAppProxyProviderContainerDelegate> *delegate; // ivar: _delegate
@property unsigned int delegateInterfaceIndex; // ivar: _delegateInterfaceIndex
@property *_NEFlowDirector director; // ivar: _director
@property (retain) NSObject<OS_dispatch_queue> *flowQueue; // ivar: _flowQueue
@property (readonly) NEAppProxyProvider *provider; // ivar: _provider
@property (copy) id *stopCompletionHandler; // ivar: _stopCompletionHandler


-(id)initWithDelegate:(id)arg0 providerClass:(Class)arg1 ;
-(void)flowDivertNewFlow:(struct _NEFlow *)arg0 completionHandler:(id)arg1 ;
-(void)flowDivertOpenControlSocket;
-(void)handleAppMessage:(id)arg0 completionHandler:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setConfiguration:(id)arg0 ;
-(void)setInitialFlowDivertControlSocket:(id)arg0 ;
-(void)sleepWithCompletionHandler:(id)arg0 ;
-(void)startWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)stop;
-(void)wake;


@end


#endif