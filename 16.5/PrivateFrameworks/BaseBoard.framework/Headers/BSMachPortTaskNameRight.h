// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSMACHPORTTASKNAMERIGHT_H
#define BSMACHPORTTASKNAMERIGHT_H



#import "BSMachPortSendRight.h"
#import "BSAuditToken.h"

@interface BSMachPortTaskNameRight : BSMachPortSendRight {
    BSAuditToken *_lock_auditToken;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) BSAuditToken *auditToken;
@property (readonly, nonatomic) int pid; // ivar: _pid


+(BOOL)supportsSecureCoding;
+(id)taskNameForPID:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPID:(int)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif