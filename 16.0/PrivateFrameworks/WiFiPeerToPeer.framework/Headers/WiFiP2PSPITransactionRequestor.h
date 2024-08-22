// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WIFIP2PSPITRANSACTIONREQUESTOR_H
#define WIFIP2PSPITRANSACTIONREQUESTOR_H

@class NSMutableArray, NSString;
@protocol WiFiP2PXPCConnectionDelegate;

#import <Foundation/Foundation.h>

#import "WiFiP2PXPCConnection.h"

@interface WiFiP2PSPITransactionRequestor : NSObject <WiFiP2PXPCConnectionDelegate>

 {
    NSMutableArray *_openTransactions;
    WiFiP2PXPCConnection *_xpcConnection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)shared;
-(id)init;
-(id)remoteObjectInterface;
-(void)beginTransaction:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)endTransaction:(NSInteger)arg0 ;
-(void)endTransaction:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)handleConnectionEstablishedWithProxy:(id)arg0 ;
-(void)startConnectionUsingProxy:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif