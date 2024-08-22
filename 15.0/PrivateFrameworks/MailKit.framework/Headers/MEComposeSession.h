// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MECOMPOSESESSION_H
#define MECOMPOSESESSION_H

@class NSUUID;
@protocol NSSecureCoding, MEComposeSessionHostProtocol_XPC;

#import <Foundation/Foundation.h>

#import "MEMessage.h"
#import "MERemoteExtension.h"

@interface MEComposeSession : NSObject <NSSecureCoding>



@property (retain, nonatomic) MEMessage *mailMessage; // ivar: _mailMessage
@property (retain, nonatomic) MERemoteExtension *remoteExtension; // ivar: _remoteExtension
@property (retain, nonatomic) NSObject<MEComposeSessionHostProtocol_XPC> *remoteHostContext; // ivar: _remoteHostContext
@property (retain, nonatomic) NSUUID *sessionID; // ivar: _sessionID


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSessionID:(id)arg0 mailMessage:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)reloadSession;


@end


#endif