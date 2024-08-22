// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBSXPCSERVICEIDENTITY_H
#define RBSXPCSERVICEIDENTITY_H

@class NSString, NSUUID, NSData;
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
@property (readonly, copy, nonatomic) NSString *persona; // ivar: _persona
@property (readonly, copy, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (readonly, copy, nonatomic) NSData *validationToken; // ivar: _validationToken


+(BOOL)supportsRBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
+(id)identityWithDefinition:(id)arg0 sessionID:(id)arg1 host:(id)arg2 UUID:(id)arg3 ;
+(id)identityWithDefinition:(id)arg0 sessionID:(id)arg1 host:(id)arg2 UUID:(id)arg3 persona:(id)arg4 validationToken:(id)arg5 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif