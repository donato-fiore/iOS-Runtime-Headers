// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMFOPENAPPREQUEST_H
#define DMFOPENAPPREQUEST_H

@class NSData, NSString;


#import "DMFTaskRequest.h"

@interface DMFOpenAppRequest : DMFTaskRequest

@property (copy, nonatomic) NSData *activityData; // ivar: _activityData
@property (copy, nonatomic) NSString *activityType; // ivar: _activityType
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (nonatomic) BOOL lockInApp; // ivar: _lockInApp


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif