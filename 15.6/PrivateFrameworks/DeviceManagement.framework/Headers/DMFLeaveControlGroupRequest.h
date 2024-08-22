// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMFLEAVECONTROLGROUPREQUEST_H
#define DMFLEAVECONTROLGROUPREQUEST_H

@class NSArray;


#import "DMFTaskRequest.h"
#import "DMFControlGroupIdentifier.h"

@interface DMFLeaveControlGroupRequest : DMFTaskRequest

@property (retain, nonatomic) DMFControlGroupIdentifier *groupIdentifier; // ivar: _groupIdentifier
@property (copy, nonatomic) NSArray *leaderIdentifiers; // ivar: _leaderIdentifiers


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif