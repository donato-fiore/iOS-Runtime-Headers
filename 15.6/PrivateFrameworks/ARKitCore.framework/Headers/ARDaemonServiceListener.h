// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARDAEMONSERVICELISTENER_H
#define ARDAEMONSERVICELISTENER_H

@class NSMutableDictionary, NSString;
@protocol NSXPCListenerDelegate, OS_dispatch_queue, ARDaemonServiceListenerDelegate;

#import <Foundation/Foundation.h>


@interface ARDaemonServiceListener : NSObject <NSXPCListenerDelegate>

 {
    NSMutableDictionary *_xpcListeners;
    NSMutableDictionary *_serviceClasses;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    BOOL _anonymousListenerEnabled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<ARDaemonServiceListenerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)addServiceByName:(id)arg0 serviceClass:(Class)arg1 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)createService:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 enableAnonymousListeners:(BOOL)arg1 libraryImageName:(char *)arg2 ;
-(id)listenerForServiceNamed:(id)arg0 ;


@end


#endif