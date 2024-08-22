// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NFSECURETRANSACTIONSERVICESHANDOVERBASESESSIONINTERFACE_H
#define NFSECURETRANSACTIONSERVICESHANDOVERBASESESSIONINTERFACE_H

@class NSXPCInterface;

#import <Foundation/Foundation.h>


@interface NFSecureTransactionServicesHandoverBaseSessionInterface : NSObject

@property (readonly, nonatomic) NSXPCInterface *protocolInterface; // ivar: _protocolInterface


+(id)interface;
-(id)initWithProtocol:(id)arg0 ;
-(void)setupInterface;


@end


#endif