// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBSPROCESSEXITEVENT_H
#define RBSPROCESSEXITEVENT_H

@class NSString;
@protocol RBSXPCSecureCoding;

#import <Foundation/Foundation.h>

#import "RBSProcessExitContext.h"
#import "RBSProcessHandle.h"

@interface RBSProcessExitEvent : NSObject <RBSXPCSecureCoding>



@property (retain, nonatomic) RBSProcessExitContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) RBSProcessHandle *process; // ivar: _process
@property (readonly) Class superclass;


+(BOOL)supportsRBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif