// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKJOINCONTROLGROUPREQUEST_H
#define CRKJOINCONTROLGROUPREQUEST_H

@class CATTaskRequest;


#import "CRKCourseInvitation.h"

@interface CRKJoinControlGroupRequest : CATTaskRequest

@property (retain, nonatomic) CRKCourseInvitation *invitation; // ivar: _invitation


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif