// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MECOMPOSESESSION_H
#define MECOMPOSESESSION_H

@class NSUUID;
@protocol NSCopying, NSSecureCoding, MEComposeSessionHostProtocol_XPC;

#import <Foundation/Foundation.h>

#import "MEComposeContext.h"
#import "MEMessage.h"
#import "MERemoteExtension.h"

@interface MEComposeSession : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) MEComposeContext *composeContext; // ivar: _composeContext
@property (retain, nonatomic) MEMessage *mailMessage; // ivar: _mailMessage
@property (retain, nonatomic) MERemoteExtension *remoteExtension; // ivar: _remoteExtension
@property (retain, nonatomic) NSObject<MEComposeSessionHostProtocol_XPC> *remoteHostContext; // ivar: _remoteHostContext
@property (retain, nonatomic) NSUUID *sessionID; // ivar: _sessionID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSessionID:(id)arg0 composeContext:(id)arg1 mailMessage:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)reloadSession;


@end


#endif