// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAP2ACCESSORYSERVERENCODINGFACTORYTHREAD_H
#define HAP2ACCESSORYSERVERENCODINGFACTORYTHREAD_H

@class NSString;
@protocol HAP2AccessoryServerEncodingFactory;

#import <Foundation/Foundation.h>


@interface HAP2AccessoryServerEncodingFactoryThread : NSObject <HAP2AccessoryServerEncodingFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createEncodingWithOperationQueue:(id)arg0 accessoryServerMetadata:(id)arg1 encodingFeatures:(NSUInteger)arg2 ;


@end


#endif