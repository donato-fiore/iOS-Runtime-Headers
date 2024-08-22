// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAP2ACCESSORYSERVERPAIRINGFACTORYHAP_H
#define HAP2ACCESSORYSERVERPAIRINGFACTORYHAP_H

@class NSString;
@protocol HAP2AccessoryServerPairingFactory;

#import <Foundation/Foundation.h>


@interface HAP2AccessoryServerPairingFactoryHAP : NSObject <HAP2AccessoryServerPairingFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createPairingDriverWithAccessoryInfo:(id)arg0 transport:(id)arg1 secureTransportFactory:(id)arg2 encoding:(id)arg3 operationQueue:(id)arg4 ;


@end


#endif