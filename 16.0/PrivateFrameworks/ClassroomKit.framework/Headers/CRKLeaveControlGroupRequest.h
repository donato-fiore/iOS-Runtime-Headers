// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKLEAVECONTROLGROUPREQUEST_H
#define CRKLEAVECONTROLGROUPREQUEST_H

@class CATTaskRequest, DMFControlGroupIdentifier, NSArray;



@interface CRKLeaveControlGroupRequest : CATTaskRequest

@property (retain, nonatomic) DMFControlGroupIdentifier *groupIdentifier; // ivar: _groupIdentifier
@property (copy, nonatomic) NSArray *leaderIdentifiers; // ivar: _leaderIdentifiers


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif