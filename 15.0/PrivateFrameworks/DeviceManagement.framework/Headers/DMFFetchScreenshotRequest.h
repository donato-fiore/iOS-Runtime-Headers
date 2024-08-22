// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMFFETCHSCREENSHOTREQUEST_H
#define DMFFETCHSCREENSHOTREQUEST_H

@class NSString;


#import "DMFTaskRequest.h"

@interface DMFFetchScreenshotRequest : DMFTaskRequest

@property (nonatomic) NSUInteger maxHeight; // ivar: _maxHeight
@property (nonatomic) NSUInteger maxWidth; // ivar: _maxWidth
@property (copy, nonatomic) NSString *sessionToken; // ivar: _sessionToken
@property (nonatomic) BOOL usesPixels; // ivar: _usesPixels


+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif