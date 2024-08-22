// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMFAPPREQUEST_H
#define DMFAPPREQUEST_H

@class NSString, NSURL, NSNumber;


#import "DMFTaskRequest.h"

@interface DMFAppRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSURL *manifestURL; // ivar: _manifestURL
@property (copy, nonatomic) NSString *personaIdentifier; // ivar: _personaIdentifier
@property (copy, nonatomic) NSNumber *storeItemIdentifier; // ivar: _storeItemIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif