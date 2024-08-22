// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBSXPCMESSAGECONTEXT_H
#define RBSXPCMESSAGECONTEXT_H

@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface RBSXPCMessageContext : NSObject {
    NSObject<OS_xpc_object> *_handoffToken;
}


@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection; // ivar: _connection


+(id)currentContext;
+(void)handoffContextOnQueue:(id)arg0 block:(id)arg1 ;
+(void)runWithoutContext:(id)arg0 ;
-(void)handoffToQueue:(id)arg0 block:(id)arg1 ;


@end


#endif