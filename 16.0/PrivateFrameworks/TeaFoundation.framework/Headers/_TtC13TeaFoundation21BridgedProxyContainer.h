// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC13TEAFOUNDATION21BRIDGEDPROXYCONTAINER_H
#define _TTC13TEAFOUNDATION21BRIDGEDPROXYCONTAINER_H

@protocol TFContainerRegistry, TFCallbackRegistration, TFRegistrationContainer;

#import <Foundation/Foundation.h>


@interface _TtC13TeaFoundation21BridgedProxyContainer : NSObject <TFContainerRegistry>



@property (nonatomic, retain) NSObject<TFCallbackRegistration> *callback; // ivar: callback
@property (nonatomic, retain) NSObject<TFRegistrationContainer> *privateContainer; // ivar: privateContainer
@property (nonatomic, retain) NSObject<TFRegistrationContainer> *publicContainer; // ivar: publicContainer


-(id)init;


@end


#endif