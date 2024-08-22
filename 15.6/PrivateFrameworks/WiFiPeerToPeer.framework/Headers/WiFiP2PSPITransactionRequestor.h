// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WIFIP2PSPITRANSACTIONREQUESTOR_H
#define WIFIP2PSPITRANSACTIONREQUESTOR_H

@class NSXPCConnection, NSMutableDictionary;
@protocol OS_dispatch_queue, WiFiP2PSPITransactionResponderXPC;

#import <Foundation/Foundation.h>


@interface WiFiP2PSPITransactionRequestor : NSObject {
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_queue;
    id<WiFiP2PSPITransactionResponderXPC> *_responderProxy;
    NSMutableDictionary *_openTrasactions;
}




+(id)shared;
-(BOOL)isConnected;
-(id)init;
-(void)beginTransaction:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)connectIfNecessary:(id)arg0 ;
-(void)dealloc;
-(void)endTransaction:(NSInteger)arg0 ;
-(void)resetState;


@end


#endif