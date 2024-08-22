// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSSECURITYTASK_H
#define VSSECURITYTASK_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VSSecurityTask : NSObject {
    NSUInteger _kind;
    ? _auditToken;
    *unk _createWithAuditToken;
    *unk _createFromSelf;
    *unk _copyValueForEntitlement;
    *unk _copySigningIdentifier;
    *__SecTask _taskRef;
}


@property (readonly, copy, nonatomic) NSString *signingIdentifier;


+(id)currentSecurityTask;
+(id)securityTaskForCurrentConnection;
+(id)securityTaskWithAuditToken:(struct ? )arg0 ;
+(void)setSecurityTaskForCurrentConnection:(id)arg0 ;
-(*unk)_copySigningIdentifier;
-(BOOL)getValue:(*id)arg0 forEntitlement:(id)arg1 error:(*id)arg2 ;
-(BOOL)shouldAllowAccessForBooleanEntitlement:(id)arg0 ;
-(BOOL)shouldAllowAccessToSubscriberIdentifierHashModifier:(id)arg0 ;
-(id)init;
-(id)initWithAuditToken:(struct ? )arg0 createWithAuditTokenProc:(*unk)arg1 copyValueForEntitlementProc:(*unk)arg2 ;
-(id)initWithCreateFromSelfProc:(*unk)arg0 copyValueForEntitlementProc:(*unk)arg1 ;
-(struct __SecTask *)_taskRef;
-(void)dealloc;


@end


#endif