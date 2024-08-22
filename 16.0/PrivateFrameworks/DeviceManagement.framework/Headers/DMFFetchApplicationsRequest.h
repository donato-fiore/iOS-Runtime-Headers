// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMFFETCHAPPLICATIONSREQUEST_H
#define DMFFETCHAPPLICATIONSREQUEST_H

@class NSArray;


#import "DMFTaskRequest.h"

@interface DMFFetchApplicationsRequest : DMFTaskRequest

@property (copy, nonatomic) NSArray *bundleIdentifiers; // ivar: _bundleIdentifiers
@property (nonatomic) BOOL deleteFeedback; // ivar: _deleteFeedback
@property (nonatomic) BOOL excludeIcon; // ivar: _excludeIcon
@property (nonatomic) BOOL excludeUnmanagedApps; // ivar: _excludeUnmanagedApps
@property (nonatomic) NSUInteger stateFilter; // ivar: _stateFilter
@property (nonatomic) NSUInteger typeFilter; // ivar: _typeFilter


+(BOOL)supportsSecureCoding;
+(Class)allowlistedClassForResultObject;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif