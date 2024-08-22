// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBSMACHPORTTASKNAMERIGHT_H
#define RBSMACHPORTTASKNAMERIGHT_H

@class NSString;
@protocol RBSXPCCoding, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "RBSAuditToken.h"

@interface RBSMachPortTaskNameRight : NSObject <RBSXPCCoding, NSSecureCoding, NSCopying>

 {
    unsigned int _port;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) RBSAuditToken *auditToken; // ivar: _auditToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int pid; // ivar: _pid
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)portForSelf;
+(id)taskNameForPID:(int)arg0 ;
-(BOOL)isUsable;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(unsigned int)port;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;
-(void)invalidate;


@end


#endif