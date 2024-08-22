// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMFMANAGEMENTLOCKREQUEST_H
#define DMFMANAGEMENTLOCKREQUEST_H

@class NSString;


#import "DMFTaskRequest.h"

@interface DMFManagementLockRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *lockedByLabel; // ivar: _lockedByLabel
@property (copy, nonatomic) NSString *passcode; // ivar: _passcode


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif