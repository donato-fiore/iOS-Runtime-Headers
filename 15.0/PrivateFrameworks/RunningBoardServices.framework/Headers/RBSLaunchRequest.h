// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RBSLAUNCHREQUEST_H
#define RBSLAUNCHREQUEST_H

@class NSString;
@protocol RBSXPCSecureCoding, NSCopying;


#import "RBSRequest.h"
#import "RBSLaunchContext.h"

@interface RBSLaunchRequest : RBSRequest <RBSXPCSecureCoding, NSCopying>



@property (readonly, nonatomic) RBSLaunchContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsRBSXPCSecureCoding;
-(BOOL)execute:(*id)arg0 ;
-(BOOL)execute:(*id)arg0 assertion:(*id)arg1 error:(*id)arg2 ;
-(BOOL)execute:(*id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif