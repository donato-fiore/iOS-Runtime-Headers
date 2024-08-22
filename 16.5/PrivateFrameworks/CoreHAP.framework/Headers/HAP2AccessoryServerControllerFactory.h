// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAP2ACCESSORYSERVERCONTROLLERFACTORY_H
#define HAP2ACCESSORYSERVERCONTROLLERFACTORY_H

@class NSString;
@protocol HAP2AccessoryServerControllerFactory;


#import "HAP2LoggingObject.h"

@interface HAP2AccessoryServerControllerFactory : HAP2LoggingObject <HAP2AccessoryServerControllerFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createControllerWithEncoding:(id)arg0 secureTransport:(id)arg1 operationQueue:(id)arg2 ;


@end


#endif