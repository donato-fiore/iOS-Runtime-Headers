// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOMESSAGE_H
#define GEOMESSAGE_H

@class NSString, NSDictionary;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>

#import "GEOPeer.h"
#import "GEOApplicationAuditToken.h"
#import "GEODataRequestThrottlerToken.h"

@interface GEOMessage : NSObject {
    NSObject<OS_xpc_object> *_xpcMessage;
}


@property (readonly, nonatomic) NSString *messageName; // ivar: _messageName
@property (readonly, nonatomic) GEOPeer *peer; // ivar: _peer
@property (readonly, nonatomic) GEOApplicationAuditToken *preferredAuditToken; // ivar: _preferredAuditToken
@property (readonly, nonatomic) GEODataRequestThrottlerToken *throttleToken; // ivar: _throttleToken
@property (readonly, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


-(id)init;
-(id)initWithXPCMessage:(id)arg0 peer:(id)arg1 ;
-(void)sendReply:(id)arg0 ;
-(void)sendReplyWithXPCUserInfo:(id)arg0 ;


@end


#endif