// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBSTERMINATEREQUEST_H
#define RBSTERMINATEREQUEST_H

@class NSString;
@protocol RBSXPCSecureCoding, NSCopying, RBSServiceLocalProtocol;


#import "RBSRequest.h"
#import "RBSTerminateContext.h"
#import "RBSProcessPredicate.h"

@interface RBSTerminateRequest : RBSRequest <RBSXPCSecureCoding, NSCopying>

 {
    id<RBSServiceLocalProtocol> *_service;
}


@property (readonly, nonatomic) RBSTerminateContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) RBSProcessPredicate *predicate; // ivar: _predicate
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL targetsAllManagedProcesses; // ivar: _targetsAllManagedProcesses


+(BOOL)supportsRBSXPCSecureCoding;
-(BOOL)execute:(*id)arg0 ;
-(BOOL)execute:(*id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initForAllManagedWithReason:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 context:(id)arg1 ;
-(id)initWithProcessIdentifier:(id)arg0 context:(id)arg1 ;
-(id)initWithProcessIdentity:(id)arg0 context:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif