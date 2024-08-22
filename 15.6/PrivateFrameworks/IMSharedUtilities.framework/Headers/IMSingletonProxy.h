// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMSINGLETONPROXY_H
#define IMSINGLETONPROXY_H

@class NSProxy;



@interface IMSingletonProxy : NSProxy {
    id *_singleton;
    id *_singletonOverride;
    Class _overrideClass;
}




+(void)load;
-(BOOL)__isSingletonProxy__im;
-(id)description;
-(id)initWithSingleton:(id)arg0 singletonOverride:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)singletonOverrideRef;
-(id)singletonRef;
-(void)forwardInvocation:(id)arg0 ;
-(void)setSingletonOverride:(id)arg0 ;


@end


#endif