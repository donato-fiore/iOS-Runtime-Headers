// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CORETELEPHONYCLIENTDELEGATEPROXY_H
#define CORETELEPHONYCLIENTDELEGATEPROXY_H

@class NSProxy, NSString;
@protocol CoreTelephonyClientDelegateProxyInterface;



@interface CoreTelephonyClientDelegateProxy : NSProxy <CoreTelephonyClientDelegateProxyInterface>

 {
    queue _userQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithQueue:(struct queue )arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif