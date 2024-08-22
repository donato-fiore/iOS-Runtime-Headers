// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMFFETCHAPPSREQUEST_H
#define DMFFETCHAPPSREQUEST_H

@class NSArray, NSURL, NSNumber;


#import "DMFTaskRequest.h"

@interface DMFFetchAppsRequest : DMFTaskRequest

@property (nonatomic) BOOL advanceTransientStates; // ivar: _advanceTransientStates
@property (copy, nonatomic) NSArray *bundleIdentifiers; // ivar: _bundleIdentifiers
@property (nonatomic) BOOL deleteFeedback; // ivar: _deleteFeedback
@property (nonatomic) BOOL managedAppsOnly; // ivar: _managedAppsOnly
@property (copy, nonatomic) NSURL *manifestURL; // ivar: _manifestURL
@property (copy, nonatomic) NSArray *propertyKeys; // ivar: _propertyKeys
@property (copy, nonatomic) NSNumber *storeItemIdentifier; // ivar: _storeItemIdentifier
@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
+(id)permittedPlatforms;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif