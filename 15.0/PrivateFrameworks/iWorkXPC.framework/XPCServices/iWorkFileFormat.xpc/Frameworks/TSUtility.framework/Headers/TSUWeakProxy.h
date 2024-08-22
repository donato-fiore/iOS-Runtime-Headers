// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUWEAKPROXY_H
#define TSUWEAKPROXY_H

@class NSProxy;



@interface TSUWeakProxy : NSProxy

@property (weak, nonatomic) id *target; // ivar: _target
@property (retain, nonatomic) Class targetClass; // ivar: _targetClass


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithTarget:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif