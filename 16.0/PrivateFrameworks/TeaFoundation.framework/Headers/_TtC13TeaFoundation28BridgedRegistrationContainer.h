// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC13TEAFOUNDATION28BRIDGEDREGISTRATIONCONTAINER_H
#define _TTC13TEAFOUNDATION28BRIDGEDREGISTRATIONCONTAINER_H

@protocol TFRegistrationContainer;

#import <Foundation/Foundation.h>


@interface _TtC13TeaFoundation28BridgedRegistrationContainer : NSObject <TFRegistrationContainer>

 {
    ? registrationContainer;
}




-(id)init;
-(id)registerClass:(Class)arg0 factory:(id)arg1 ;
-(id)registerClass:(Class)arg0 name:(id)arg1 factory:(id)arg2 ;
-(id)registerProtocol:(id)arg0 factory:(id)arg1 ;
-(id)registerProtocol:(id)arg0 name:(id)arg1 factory:(id)arg2 ;
-(id)registerUncheckedProtocol:(id)arg0 factory:(id)arg1 ;
-(id)registerUncheckedProtocol:(id)arg0 name:(id)arg1 factory:(id)arg2 ;


@end


#endif