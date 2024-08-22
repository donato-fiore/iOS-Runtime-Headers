// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDOPERATIONCALLBACKPROXY_H
#define CKDOPERATIONCALLBACKPROXY_H

@class Protocol;
@protocol CKOperationCallbacks;

#import <Foundation/Foundation.h>


@interface CKDOperationCallbackProxy : NSObject <CKOperationCallbacks>



@property (retain, nonatomic) Protocol *callbackProtocol; // ivar: _callbackProtocol
@property (retain, nonatomic) NSObject<CKOperationCallbacks> *clientOperationCallbackProxy; // ivar: _clientOperationCallbackProxy


-(id)initWithClientOperationCallbackProxy:(id)arg0 callbackProtocol:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif