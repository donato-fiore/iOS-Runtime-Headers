// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMFFETCHSTREAMEVENTSREQUEST_H
#define DMFFETCHSTREAMEVENTSREQUEST_H

@class NSArray, NSString, NSDate;


#import "DMFTaskRequest.h"

@interface DMFFetchStreamEventsRequest : DMFTaskRequest

@property (copy, nonatomic) NSArray *eventIdentifiers; // ivar: _eventIdentifiers
@property (copy, nonatomic) NSString *organizationIdentifier; // ivar: _organizationIdentifier
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
+(id)permittedPlatforms;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif