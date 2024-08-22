// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DDDELEGATEMULTIPLEXER_H
#define DDDELEGATEMULTIPLEXER_H

@class NSProxy;
@protocol NSObject;



@interface DDDelegateMultiplexer : NSProxy {
    id<NSObject> *_delegateA;
    id<NSObject> *_delegateB;
}




-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)initWithDelegate:(id)arg0 andDelegate:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif