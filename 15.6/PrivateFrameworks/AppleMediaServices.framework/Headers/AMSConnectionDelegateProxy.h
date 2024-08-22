// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSCONNECTIONDELEGATEPROXY_H
#define AMSCONNECTIONDELEGATEPROXY_H


#import <Foundation/Foundation.h>


@interface AMSConnectionDelegateProxy : NSObject

@property (weak, nonatomic) id *delegate; // ivar: _delegate


+(id)proxyWithDelegate:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif