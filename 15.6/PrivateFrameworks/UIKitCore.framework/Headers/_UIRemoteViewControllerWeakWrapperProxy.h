// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIREMOTEVIEWCONTROLLERWEAKWRAPPERPROXY_H
#define _UIREMOTEVIEWCONTROLLERWEAKWRAPPERPROXY_H


#import <Foundation/Foundation.h>


@interface _UIRemoteViewControllerWeakWrapperProxy : NSObject {
    id *_target;
    Class _targetClass;
}




+(id)wrapperWithTarget:(id)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif