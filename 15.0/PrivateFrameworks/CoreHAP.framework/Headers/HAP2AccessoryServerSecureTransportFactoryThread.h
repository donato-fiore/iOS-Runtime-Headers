// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAP2ACCESSORYSERVERSECURETRANSPORTFACTORYTHREAD_H
#define HAP2ACCESSORYSERVERSECURETRANSPORTFACTORYTHREAD_H

@class NSString;
@protocol HAP2AccessoryServerSecureTransportFactory;

#import <Foundation/Foundation.h>


@interface HAP2AccessoryServerSecureTransportFactoryThread : NSObject <HAP2AccessoryServerSecureTransportFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createSecureTransportWithTransport:(id)arg0 isPaired:(BOOL)arg1 encryptedSession:(id)arg2 ;


@end


#endif