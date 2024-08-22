// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBSAUDITTOKEN_H
#define RBSAUDITTOKEN_H

@class NSString;
@protocol RBSXPCSecureCoding, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RBSAuditToken : NSObject <RBSXPCSecureCoding, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) int pidversion; // ivar: _pidversion
@property (readonly, nonatomic) ? realToken; // ivar: _auditToken
@property (readonly) Class superclass;


+(BOOL)supportsRBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
+(id)tokenFromAuditToken:(struct ? )arg0 ;
+(id)tokenFromAuditTokenRef:(struct ? *)arg0 ;
+(id)tokenFromXPCConnection:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAuditToken:(struct ? )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif