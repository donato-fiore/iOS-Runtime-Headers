// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RLMOPTIONALBASE_H
#define RLMOPTIONALBASE_H

@class NSProxy;



@interface RLMOptionalBase : NSProxy {
    unique_ptr<(anonymous namespace)::OptionalBase, std::default_delete<(anonymous namespace)::OptionalBase>> _impl;
}




-(BOOL)isKindOfClass:(Class)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)doesNotRecognizeSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif