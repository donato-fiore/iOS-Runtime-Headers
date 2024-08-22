// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLAUTOBINDINGBLACKHOLEPROXY_H
#define PLAUTOBINDINGBLACKHOLEPROXY_H

@class NSProxy;



@interface PLAutoBindingBlackholeProxy : NSProxy {
    id *_targetObject;
}




-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)initWithTargetObject:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif