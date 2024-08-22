// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CATIDSSERVICECONNECTIONINVITATION_H
#define CATIDSSERVICECONNECTIONINVITATION_H

@class NSUUID, NSString, NSDictionary;
@protocol CATCancelable;

#import <Foundation/Foundation.h>


@interface CATIDSServiceConnectionInvitation : NSObject

@property (readonly, nonatomic) NSUUID *connectionIdentifier; // ivar: _connectionIdentifier
@property (readonly, nonatomic) NSUInteger messagingVersion; // ivar: _messagingVersion
@property (readonly, nonatomic) NSObject<CATCancelable> *networkPowerAssertion; // ivar: _networkPowerAssertion
@property (readonly, copy, nonatomic) NSString *senderAddress; // ivar: _senderAddress
@property (readonly, copy, nonatomic) NSString *senderAppleID; // ivar: _senderAppleID
@property (readonly, copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


-(id)initWithConnectionIdentifier:(id)arg0 senderAppleID:(id)arg1 senderAddress:(id)arg2 networkPowerAssertion:(id)arg3 messagingVersion:(NSUInteger)arg4 userInfo:(id)arg5 ;
-(id)initWithSenderAppleID:(id)arg0 senderAddress:(id)arg1 networkPowerAssertion:(id)arg2 messagingVersion:(NSUInteger)arg3 userInfo:(id)arg4 ;


@end


#endif