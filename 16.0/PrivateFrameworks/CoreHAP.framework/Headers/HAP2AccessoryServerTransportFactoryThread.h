// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAP2ACCESSORYSERVERTRANSPORTFACTORYTHREAD_H
#define HAP2ACCESSORYSERVERTRANSPORTFACTORYTHREAD_H

@class NSString;
@protocol HAP2AccessoryServerTransportFactory;

#import <Foundation/Foundation.h>


@interface HAP2AccessoryServerTransportFactoryThread : NSObject <HAP2AccessoryServerTransportFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createTransportWithAccessoryInfo:(id)arg0 discovery:(id)arg1 ;


@end


#endif