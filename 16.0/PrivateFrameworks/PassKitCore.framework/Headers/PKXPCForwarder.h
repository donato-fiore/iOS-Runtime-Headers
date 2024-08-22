// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKXPCFORWARDER_H
#define PKXPCFORWARDER_H


#import <Foundation/Foundation.h>


@interface PKXPCForwarder : NSObject {
    os_unfair_lock_s _lock;
    uint8_t _invalidated;
    id *_target;
    Class _targetClass;
}




-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif