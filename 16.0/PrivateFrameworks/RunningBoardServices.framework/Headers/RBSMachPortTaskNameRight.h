// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBSMACHPORTTASKNAMERIGHT_H
#define RBSMACHPORTTASKNAMERIGHT_H

@class NSString;
@protocol RBSXPCSecureCoding, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "RBSMachPort.h"
#import "RBSAuditToken.h"

@interface RBSMachPortTaskNameRight : NSObject <RBSXPCSecureCoding, NSSecureCoding, NSCopying>

 {
    RBSMachPort *_port;
}


@property (readonly, nonatomic) RBSAuditToken *auditToken; // ivar: _auditToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int pid; // ivar: _pid
@property (readonly) Class superclass;


+(BOOL)supportsRBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
+(id)portForSelf;
+(id)taskNameForPID:(int)arg0 ;
-(BOOL)isUsable;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(unsigned int)port;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;
-(void)invalidate;


@end


#endif