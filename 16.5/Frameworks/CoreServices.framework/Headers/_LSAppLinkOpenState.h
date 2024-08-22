// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LSAPPLINKOPENSTATE_H
#define _LSAPPLINKOPENSTATE_H

@class NSXPCConnection, NSURL, NSDictionary, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_LSOpenConfiguration.h"

@interface _LSAppLinkOpenState : NSObject <NSCopying, NSSecureCoding>

 {
    optional<audit_token_t> _auditToken;
    NSXPCConnection *_XPCConnection;
}


@property (copy) NSURL *URL; // ivar: _URL
@property (retain, nonatomic) NSXPCConnection *XPCConnection;
@property (nonatomic) *? auditToken;
@property (copy) NSDictionary *browserState; // ivar: _browserState
@property (copy) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property BOOL includeLinksForCallingApplication; // ivar: _includeLinksForCallingApplication
@property (retain) _LSOpenConfiguration *openConfiguration; // ivar: _openConfiguration


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif