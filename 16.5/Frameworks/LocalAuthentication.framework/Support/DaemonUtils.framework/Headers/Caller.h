// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALLER_H
#define CALLER_H

@class NSString, NSData, NSXPCConnection;

#import <Foundation/Foundation.h>


@interface Caller : NSObject {
    NSString *_path;
}


@property (readonly, nonatomic) int asid; // ivar: _asid
@property (readonly, nonatomic) ? auditToken; // ivar: _auditToken
@property (readonly, nonatomic) NSData *auditTokenData;
@property (readonly, weak, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, nonatomic) unsigned int euid; // ivar: _euid
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) int pid; // ivar: _pid


+(id)current;
+(id)pathFromPid:(int)arg0 ;
-(BOOL)hasEntitlement:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAuditToken:(struct ? )arg0 ;
-(BOOL)isEqualToAuditTokenData:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithConnection:(id)arg0 ;


@end


#endif