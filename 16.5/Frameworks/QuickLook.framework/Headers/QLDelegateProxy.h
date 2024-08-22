// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLDELEGATEPROXY_H
#define QLDELEGATEPROXY_H

@class NSProxy;



@interface QLDelegateProxy : NSProxy

@property (weak) id *firstDelegate; // ivar: _firstDelegate
@property (weak) id *secondDelegate; // ivar: _secondDelegate


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif