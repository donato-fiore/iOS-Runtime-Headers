// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TFCONTAINERREGISTRY_H
#define TFCONTAINERREGISTRY_H

@class NSString;
@protocol TFContainerRegistry, TFCallbackRegistration, TFRegistrationContainer;

#import <Foundation/Foundation.h>


@interface TFContainerRegistry : NSObject <TFContainerRegistry>



@property (readonly, nonatomic) id *bridgedContainer; // ivar: _bridgedContainer
@property (readonly, nonatomic) NSObject<TFCallbackRegistration> *callback; // ivar: _callback
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<TFRegistrationContainer> *privateContainer; // ivar: _privateContainer
@property (readonly, nonatomic) NSObject<TFRegistrationContainer> *publicContainer; // ivar: _publicContainer
@property (readonly) Class superclass;
@property (readonly, nonatomic) id *swiftContainer; // ivar: _swiftContainer


-(id)initWithPublicContainer:(id)arg0 privateContainer:(id)arg1 bridgedContainer:(id)arg2 callback:(id)arg3 ;


@end


#endif