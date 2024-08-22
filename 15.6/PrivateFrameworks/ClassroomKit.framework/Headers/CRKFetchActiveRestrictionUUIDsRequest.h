// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKFETCHACTIVERESTRICTIONUUIDSREQUEST_H
#define CRKFETCHACTIVERESTRICTIONUUIDSREQUEST_H

@class CATTaskRequest, NSString;



@interface CRKFetchActiveRestrictionUUIDsRequest : CATTaskRequest

@property (copy, nonatomic) NSString *clientType; // ivar: _clientType


+(BOOL)supportsSecureCoding;
+(Class)allowlistedClassForResultObject;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif