// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSAUDITTOKEN_H
#define BSAUDITTOKEN_H

@class NSString;
@protocol NSCopying, BSXPCCoding, BSXPCSecureCoding, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "BSSecTask.h"

@interface BSAuditToken : NSObject <NSCopying, BSXPCCoding, BSXPCSecureCoding, NSSecureCoding>

 {
    NSString *_bundleID;
    BSSecTask *_secTask;
    BOOL _resolvedBundleID;
}


@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned int euid;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInvalid) BOOL invalid;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) ? realToken; // ivar: _auditToken
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger versionedPID;


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
+(id)tokenForCurrentProcess;
+(id)tokenFromAuditToken:(struct ? )arg0 ;
+(id)tokenFromAuditTokenRef:(struct ? *)arg0 ;
+(id)tokenFromMachMessage:(struct ? *)arg0 ;
+(id)tokenFromNSXPCConnection:(id)arg0 ;
+(id)tokenFromXPCConnection:(id)arg0 ;
+(id)tokenFromXPCMessage:(id)arg0 ;
-(BOOL)hasEntitlement:(id)arg0 ;
-(BOOL)hasSameProcessAsAuditToken:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAuditToken:(struct ? )arg0 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)valueForEntitlement:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif