// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPROXYCLIENT_H
#define GEOPROXYCLIENT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "GEOApplicationAuditToken.h"

@interface GEOProxyClient : NSObject

@property (retain, nonatomic) GEOApplicationAuditToken *auditToken; // ivar: _auditToken
@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) NSString *bundleVersion; // ivar: _bundleVersion
@property (nonatomic) BOOL isApplication; // ivar: _isApplication


+(id)compositeClientForClients:(id)arg0 ;
+(id)currentClient;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)URLConnectionProperties;
-(id)description;
-(id)initWithAuditToken:(id)arg0 ;
-(id)initWithXPCConnection:(id)arg0 ;


@end


#endif