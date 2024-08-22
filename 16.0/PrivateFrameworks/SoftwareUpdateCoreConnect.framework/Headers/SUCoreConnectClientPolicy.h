// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUCORECONNECTCLIENTPOLICY_H
#define SUCORECONNECTCLIENTPOLICY_H

@class NSString, NSSet;
@protocol SUCoreConnectPolicyProtocolPrivate, SUCoreConnectPolicyProtocol, SUCoreConnectClientDelegate;

#import <Foundation/Foundation.h>


@interface SUCoreConnectClientPolicy : NSObject <SUCoreConnectPolicyProtocolPrivate, SUCoreConnectPolicyProtocol>



@property (readonly, weak, nonatomic) NSObject<SUCoreConnectClientDelegate> *clientDelegate; // ivar: _clientDelegate
@property (readonly, retain, nonatomic) NSString *clientID; // ivar: _clientID
@property (readonly, retain, nonatomic) NSString *clientIDRaw; // ivar: _clientIDRaw
@property (readonly, nonatomic) int clientProcessIdentifier; // ivar: _clientProcessIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSSet *proxyObjectClasses; // ivar: _proxyObjectClasses
@property (readonly, retain, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesPersistentXPCConnections; // ivar: _usesPersistentXPCConnections


+(id)_getAllowlistedClassesForKey:(id)arg0 ;
+(id)_getSharedClientAccessQueue;
+(id)_getSharedClientAllowlistedClasses;
+(id)getAllowlistedClassesForKey:(id)arg0 ;
+(void)clearAllowlistedClasses;
+(void)setAllowlistedClass:(Class)arg0 forKey:(id)arg1 ;
+(void)setAllowlistedClasses:(id)arg0 forKey:(id)arg1 ;
+(void)setAllowlistedClasses:(id)arg0 forKeys:(id)arg1 ;
-(id)initForServiceName:(id)arg0 delegate:(id)arg1 ;
-(id)initForServiceName:(id)arg0 delegate:(id)arg1 clientID:(id)arg2 ;


@end


#endif