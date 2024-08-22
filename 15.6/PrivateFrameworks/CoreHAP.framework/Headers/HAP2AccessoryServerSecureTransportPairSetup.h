// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAP2ACCESSORYSERVERSECURETRANSPORTPAIRSETUP_H
#define HAP2ACCESSORYSERVERSECURETRANSPORTPAIRSETUP_H

@class NSString;
@protocol HAP2AccessoryServerTransportDelegate;


#import "HAP2AccessoryServerSecureTransportBase.h"

@interface HAP2AccessoryServerSecureTransportPairSetup : HAP2AccessoryServerSecureTransportBase <HAP2AccessoryServerTransportDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultEncryptedSession;
-(id)initWithTransport:(id)arg0 operationQueue:(id)arg1 encryptedSession:(id)arg2 ;
-(void)transport:(id)arg0 didReceiveEvent:(id)arg1 ;


@end


#endif