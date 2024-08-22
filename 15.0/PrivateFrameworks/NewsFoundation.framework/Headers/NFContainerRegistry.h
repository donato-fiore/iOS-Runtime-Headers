// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFCONTAINERREGISTRY_H
#define NFCONTAINERREGISTRY_H

@class NSString;
@protocol NFContainerRegistry, NFCallbackRegistration, NFRegistrationContainer;

#import <Foundation/Foundation.h>


@interface NFContainerRegistry : NSObject <NFContainerRegistry>



@property (readonly, nonatomic) id *bridgedContainer; // ivar: _bridgedContainer
@property (readonly, nonatomic) NSObject<NFCallbackRegistration> *callback; // ivar: _callback
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NFRegistrationContainer> *privateContainer; // ivar: _privateContainer
@property (readonly, nonatomic) NSObject<NFRegistrationContainer> *publicContainer; // ivar: _publicContainer
@property (readonly) Class superclass;
@property (readonly, nonatomic) id *swiftContainer; // ivar: _swiftContainer


-(id)initWithPublicContainer:(id)arg0 privateContainer:(id)arg1 bridgedContainer:(id)arg2 callback:(id)arg3 ;


@end


#endif