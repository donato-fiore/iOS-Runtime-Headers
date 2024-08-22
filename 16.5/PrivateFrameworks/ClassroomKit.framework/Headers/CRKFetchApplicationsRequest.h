// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKFETCHAPPLICATIONSREQUEST_H
#define CRKFETCHAPPLICATIONSREQUEST_H

@class CATTaskRequest, NSArray;



@interface CRKFetchApplicationsRequest : CATTaskRequest

@property (copy, nonatomic) NSArray *bundleIdentifiers; // ivar: _bundleIdentifiers


+(BOOL)supportsSecureCoding;
+(Class)allowlistedClassForResultObject;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif