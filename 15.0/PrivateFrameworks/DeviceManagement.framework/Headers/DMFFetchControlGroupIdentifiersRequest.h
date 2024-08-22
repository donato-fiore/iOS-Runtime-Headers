// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMFFETCHCONTROLGROUPIDENTIFIERSREQUEST_H
#define DMFFETCHCONTROLGROUPIDENTIFIERSREQUEST_H

@class NSString;


#import "DMFTaskRequest.h"

@interface DMFFetchControlGroupIdentifiersRequest : DMFTaskRequest

@property (nonatomic) BOOL includeTemporary; // ivar: _includeTemporary
@property (copy, nonatomic) NSString *leaderIdentifier; // ivar: _leaderIdentifier


+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif