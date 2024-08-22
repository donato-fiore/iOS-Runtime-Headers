// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RBSXPCSERVICEIDENTITY_H
#define RBSXPCSERVICEIDENTITY_H

@class NSString, NSUUID;
@protocol RBSXPCSecureCoding, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "RBSXPCServiceDefinition.h"
#import "RBSProcessInstance.h"

@interface RBSXPCServiceIdentity : NSObject <RBSXPCSecureCoding, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) RBSXPCServiceDefinition *definition; // ivar: _definition
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) RBSProcessInstance *host; // ivar: _host
@property (readonly, copy, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsRBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
+(id)identityWithDefinition:(id)arg0 sessionID:(id)arg1 host:(id)arg2 UUID:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif