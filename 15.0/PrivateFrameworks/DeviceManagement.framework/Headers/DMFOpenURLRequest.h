// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMFOPENURLREQUEST_H
#define DMFOPENURLREQUEST_H

@class NSString, NSArray, NSURL;


#import "DMFTaskRequest.h"

@interface DMFOpenURLRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *URLDisplayName; // ivar: _URLDisplayName
@property (copy, nonatomic) NSArray *handlingBundleIdentifiers; // ivar: _handlingBundleIdentifiers
@property (nonatomic) BOOL lockInApp; // ivar: _lockInApp
@property (copy, nonatomic) NSURL *url; // ivar: _url


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif