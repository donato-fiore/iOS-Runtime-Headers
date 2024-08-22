// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSCRIPTOBJECTBATCHPROXY_H
#define SUSCRIPTOBJECTBATCHPROXY_H


#import <Foundation/Foundation.h>

#import "SUScriptObjectInvocationBatch.h"

@interface SUScriptObjectBatchProxy : NSObject

@property SUScriptObjectInvocationBatch *invocationBatch; // ivar: _invocationBatch
@property id *target; // ivar: _target


-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif