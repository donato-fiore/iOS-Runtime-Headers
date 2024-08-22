// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALLER_H
#define CALLER_H

@class NSData, NSXPCConnection;

#import <Foundation/Foundation.h>


@interface Caller : NSObject

@property (readonly, nonatomic) int asid;
@property (readonly, nonatomic) ? auditToken;
@property (readonly, nonatomic) NSData *auditTokenData;
@property (readonly, weak, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, nonatomic) unsigned int euid;
@property (readonly, nonatomic) int pid;


+(id)current;
-(BOOL)hasEntitlement:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAuditToken:(struct ? )arg0 ;
-(BOOL)isEqualToAuditTokenData:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithConnection:(id)arg0 ;


@end


#endif