// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKWEAKOBJECTCALLBACKPROXY_H
#define CKWEAKOBJECTCALLBACKPROXY_H

@class Protocol;

#import <Foundation/Foundation.h>


@interface CKWeakObjectCallbackProxy : NSObject

@property (readonly, nonatomic) Protocol *callbackProtocol; // ivar: _callbackProtocol
@property (readonly, nonatomic) BOOL hadObject; // ivar: _hadObject
@property (weak, nonatomic) id *weakObject; // ivar: _weakObject


-(id)initWithWeakObject:(id)arg0 callbackProtocol:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif