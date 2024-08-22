// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAP2ACCESSORYSERVERDEFAULTACCESSORYFACTORY_H
#define HAP2ACCESSORYSERVERDEFAULTACCESSORYFACTORY_H

@class NSString;
@protocol HAP2AccessoryServerAccessoryFactory;

#import <Foundation/Foundation.h>


@interface HAP2AccessoryServerDefaultAccessoryFactory : NSObject <HAP2AccessoryServerAccessoryFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)accessoryWithAccessoryServer:(id)arg0 instanceID:(NSUInteger)arg1 discoveredServices:(id)arg2 ;


@end


#endif