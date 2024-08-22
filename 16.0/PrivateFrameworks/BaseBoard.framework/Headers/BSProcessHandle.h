// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSPROCESSHANDLE_H
#define BSPROCESSHANDLE_H

@class NSString;
@protocol BSDescriptionProviding, BSXPCCoding, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "BSAuditToken.h"
#import "BSMachPortTaskNameRight.h"

@interface BSProcessHandle : NSObject <BSDescriptionProviding, BSXPCCoding, NSSecureCoding>

 {
    BOOL _resolvedBundleID;
}


@property (readonly, nonatomic) BSAuditToken *auditToken; // ivar: _auditToken
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleID
@property (readonly, copy, nonatomic) NSString *bundlePath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *jobLabel;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) int pid; // ivar: _pid
@property (readonly) Class superclass;
@property (readonly, nonatomic) BSMachPortTaskNameRight *taskNameRight; // ivar: _taskNameRight
@property (readonly, nonatomic, getter=isValid) BOOL valid;


+(BOOL)supportsSecureCoding;
+(id)processHandle;
+(id)processHandleForAuditToken:(id)arg0 ;
+(id)processHandleForAuditToken:(id)arg0 bundleID:(id)arg1 ;
+(id)processHandleForNSXPCConnection:(id)arg0 ;
+(id)processHandleForPID:(int)arg0 ;
+(id)processHandleForPID:(int)arg0 bundleID:(id)arg1 ;
+(id)processHandleForTaskNameRight:(id)arg0 ;
+(id)processHandleForTaskNameRight:(id)arg0 bundleID:(id)arg1 ;
+(id)processHandleForXPCConnection:(id)arg0 ;
-(BOOL)hasEntitlement:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)valueForEntitlement:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif