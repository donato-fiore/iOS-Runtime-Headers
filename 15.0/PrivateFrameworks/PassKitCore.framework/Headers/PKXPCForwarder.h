// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKXPCFORWARDER_H
#define PKXPCFORWARDER_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PKXPCForwarder : NSObject <NSCopying>

 {
    os_unfair_lock_s _lock;
    id *_target;
    Class _targetClass;
}




-(id)_initWithTarget:(id)arg0 targetClass:(Class)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)initWithTarget:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)clearTarget;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif