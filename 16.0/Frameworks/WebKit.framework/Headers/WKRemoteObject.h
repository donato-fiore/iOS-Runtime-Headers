// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKREMOTEOBJECT_H
#define WKREMOTEOBJECT_H


#import <Foundation/Foundation.h>


@interface WKRemoteObject : NSObject {
    RetainPtr<_WKRemoteObjectRegistry> _objectRegistry;
    RetainPtr<_WKRemoteObjectInterface> _interface;
}




-(BOOL)conformsToProtocol:(id)arg0 ;
-(id)_initWithObjectRegistry:(id)arg0 interface:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif