// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLIENTIDENTITY_H
#define CLIENTIDENTITY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ClientIdentity : NSObject

@property (readonly, nonatomic) ? auditToken; // ivar: _auditToken
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) NSString *clientName; // ivar: _clientName
@property (readonly, copy, nonatomic) NSString *codeSigningIdentity; // ivar: _codeSigningIdentity
@property (readonly, nonatomic) int pid; // ivar: _pid


-(id)description;
-(id)initWithAuditToken:(struct ? )arg0 ;


@end


#endif