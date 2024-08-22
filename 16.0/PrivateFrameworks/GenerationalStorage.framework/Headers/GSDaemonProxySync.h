// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GSDAEMONPROXYSYNC_H
#define GSDAEMONPROXYSYNC_H

@class NSProxy, NSError;
@protocol GSProtocol;



@interface GSDaemonProxySync : NSProxy <GSProtocol>

 {
    NSObject<GSProtocol> *_target;
}


@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) id *result; // ivar: _result


+(id)proxy;
-(id)initWithXPCObject:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(struct __CFError *)copyCFError;
-(void)finalize;
-(void)forwardInvocation:(id)arg0 ;
-(void)handleBoolResult:(BOOL)arg0 error:(id)arg1 ;
-(void)handleObjResult:(id)arg0 error:(id)arg1 ;


@end


#endif