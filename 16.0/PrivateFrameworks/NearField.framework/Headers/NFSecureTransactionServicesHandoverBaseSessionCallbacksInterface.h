// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NFSECURETRANSACTIONSERVICESHANDOVERBASESESSIONCALLBACKSINTERFACE_H
#define NFSECURETRANSACTIONSERVICESHANDOVERBASESESSIONCALLBACKSINTERFACE_H

@class NSXPCInterface;

#import <Foundation/Foundation.h>


@interface NFSecureTransactionServicesHandoverBaseSessionCallbacksInterface : NSObject

@property (readonly, nonatomic) NSXPCInterface *protocolInterface; // ivar: _protocolInterface


+(id)interface;
-(id)initWithProtocol:(id)arg0 ;
-(void)setupInterface;


@end


#endif