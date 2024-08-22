// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUCORECONNECTCLIENTPOLICY_H
#define SUCORECONNECTCLIENTPOLICY_H

@class NSString;
@protocol SUCoreConnectPolicyProtocolPrivate, SUCoreConnectPolicyProtocol, SUCoreConnectClientDelegate;

#import <Foundation/Foundation.h>


@interface SUCoreConnectClientPolicy : NSObject <SUCoreConnectPolicyProtocolPrivate, SUCoreConnectPolicyProtocol>



@property (readonly, weak, nonatomic) NSObject<SUCoreConnectClientDelegate> *clientDelegate; // ivar: _clientDelegate
@property (readonly, retain, nonatomic) NSString *clientID; // ivar: _clientID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly) Class superclass;


+(id)_getSharedClientAccessQueue;
+(id)_getSharedClientWhitelistedClasses;
+(id)_getWhitelistedClassesForKey:(id)arg0 ;
+(id)getWhitelistedClassesForKey:(id)arg0 ;
+(void)clearWhitelistedClasses;
+(void)setWhitelistedClass:(Class)arg0 forKey:(id)arg1 ;
+(void)setWhitelistedClasses:(id)arg0 forKey:(id)arg1 ;
-(id)initForServiceName:(id)arg0 delegate:(id)arg1 ;
-(id)initForServiceName:(id)arg0 delegate:(id)arg1 clientID:(id)arg2 ;


@end


#endif