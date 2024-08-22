// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSKEEPALIVE_H
#define AMSKEEPALIVE_H

@class NSString, RBSAssertion;
@protocol OS_os_transaction;

#import <Foundation/Foundation.h>


@interface AMSKeepAlive : NSObject {
    NSObject<OS_os_transaction> *_transaction;
    NSString *_logKey;
}


@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) RBSAssertion *rbsAssertion; // ivar: _rbsAssertion
@property (readonly, nonatomic) NSInteger style; // ivar: _style


+(id)keepAliveWithFormat:(id)arg0 ;
+(id)keepAliveWithName:(id)arg0 ;
+(id)keepAliveWithName:(id)arg0 style:(NSInteger)arg1 ;
+(id)rbs_keepAliveWithName:(id)arg0 ;
+(id)rbs_keepAliveWithName:(id)arg0 style:(NSInteger)arg1 ;
+(void)_accessAssertionCache:(id)arg0 ;
+(void)_handleAssertionExpiration;
+(void)keepAliveWithName:(id)arg0 style:(NSInteger)arg1 block:(id)arg2 ;
+(void)rbs_keepAliveWithName:(id)arg0 style:(NSInteger)arg1 block:(id)arg2 ;
-(id)_assertionName;
-(id)_cacheKey;
-(id)initRBSWithName:(id)arg0 ;
-(id)initRBSWithName:(id)arg0 style:(NSInteger)arg1 ;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 style:(NSInteger)arg1 ;
-(void)_removeOSTransaction;
-(void)_removeProcessAssertion;
-(void)_removeRBSAssertion;
-(void)_startLogTimer;
-(void)_startRBSLogTimer;
-(void)_takeOSTransaction;
-(void)_takeProcessAssertion;
-(void)_takeRBSAssertion;
-(void)dealloc;
-(void)invalidate;
-(void)rbs_invalidate;


@end


#endif