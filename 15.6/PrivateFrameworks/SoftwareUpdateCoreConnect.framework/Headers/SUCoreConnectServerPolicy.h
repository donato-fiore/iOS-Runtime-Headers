// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUCORECONNECTSERVERPOLICY_H
#define SUCORECONNECTSERVERPOLICY_H

@class NSString, NSSet;
@protocol SUCoreConnectPolicyProtocolPrivate, SUCoreConnectPolicyProtocol, OS_dispatch_queue, SUCoreConnectServerDelegate;

#import <Foundation/Foundation.h>


@interface SUCoreConnectServerPolicy : NSObject <SUCoreConnectPolicyProtocolPrivate, SUCoreConnectPolicyProtocol>



@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // ivar: _connectionQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly, retain, nonatomic) NSSet *entitlements; // ivar: _entitlements
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<SUCoreConnectServerDelegate> *serverDelegate; // ivar: _serverDelegate
@property (readonly, retain, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly) Class superclass;


+(id)_getSharedServerAccessQueue;
+(id)_getSharedServerWhitelistedClasses;
+(id)_getWhitelistedClassesForKey:(id)arg0 ;
+(id)getWhitelistedClassesForKey:(id)arg0 ;
+(void)clearWhitelistedClasses;
+(void)setWhitelistedClass:(Class)arg0 forKey:(id)arg1 ;
+(void)setWhitelistedClasses:(id)arg0 forKey:(id)arg1 ;
-(id)initWithServiceName:(id)arg0 entitlements:(id)arg1 serverDelegate:(id)arg2 ;


@end


#endif