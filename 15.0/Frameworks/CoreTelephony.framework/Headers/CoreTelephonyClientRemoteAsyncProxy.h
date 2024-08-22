// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CORETELEPHONYCLIENTREMOTEASYNCPROXY_H
#define CORETELEPHONYCLIENTREMOTEASYNCPROXY_H

@class NSProxy, NSString;
@protocol CTXPCServiceInterface;



@interface CoreTelephonyClientRemoteAsyncProxy : NSProxy <CTXPCServiceInterface>

 {
    NSObject<CTXPCServiceInterface> *_target;
    queue _userQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithXPCObject:(id)arg0 userQueue:(struct queue )arg1 errorHandler:(id)arg2 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif