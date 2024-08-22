// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMFSTARTAPPLOCKREQUEST_H
#define DMFSTARTAPPLOCKREQUEST_H

@class NSString;


#import "DMFTaskRequest.h"

@interface DMFStartAppLockRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif