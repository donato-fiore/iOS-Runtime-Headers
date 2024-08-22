// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBSPROCESSEXITCONTEXT_H
#define RBSPROCESSEXITCONTEXT_H

@class NSString, NSDate;
@protocol RBSXPCSecureCoding, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "RBSProcessExitStatus.h"
#import "RBSTerminateContext.h"

@interface RBSProcessExitContext : NSObject <RBSXPCSecureCoding, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int legacyCode; // ivar: _legacyCode
@property (readonly, nonatomic) RBSProcessExitStatus *status; // ivar: _status
@property (readonly) Class superclass;
@property (readonly, nonatomic) RBSTerminateContext *terminationContext; // ivar: _terminationContext
@property (readonly, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsRBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
+(id)exitContextForNamespace:(unsigned int)arg0 code:(NSUInteger)arg1 wait4Status:(int)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithStatus:(id)arg0 ;
-(id)copyWithTerminationContext:(id)arg0 ;
-(id)copyWithTimestamp:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif