// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RCWEAKDISPLAYLINKTARGETPROXY_H
#define RCWEAKDISPLAYLINKTARGETPROXY_H



#import "RCDisplayLinkTargetProxy.h"
#import "RCWeakRef.h"

@interface RCWeakDisplayLinkTargetProxy : RCDisplayLinkTargetProxy {
    RCWeakRef *_weakTarget;
    SEL _weakTargetSelector;
}




-(id)initWithTarget:(id)arg0 selector:(SEL)arg1 ;
-(void)dealloc;
-(void)displayLinkFired:(id)arg0 ;


@end


#endif