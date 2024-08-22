// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMREPLY_H
#define MCMREPLY_H

@class NSString;
@protocol MCMReply_Internal, MCMReply, OS_dispatch_queue, MCMResultPromise, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface MCMReply : NSObject <MCMReply_Internal, MCMReply>

 {
    BOOL _replySent;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL exitAfterSend; // ivar: _exitAfterSend
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *fastWorkloop; // ivar: _fastWorkloop
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<MCMResultPromise> *resultPromise; // ivar: _resultPromise
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *slowWorkloop; // ivar: _slowWorkloop
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcReply; // ivar: _xpcReply


-(id)initWithXpcReply:(id)arg0 slowWorkloop:(id)arg1 fastWorkloop:(id)arg2 resultPromise:(id)arg3 ;
-(void)_send;
-(void)dispatchSyncToFastWorkloopWithBlock:(id)arg0 ;
-(void)encodeResult:(id)arg0 ;
-(void)handoffToSlowWorkloopforClientIdentity:(id)arg0 withBlock:(id)arg1 ;
-(void)invalidate;
-(void)send;


@end


#endif