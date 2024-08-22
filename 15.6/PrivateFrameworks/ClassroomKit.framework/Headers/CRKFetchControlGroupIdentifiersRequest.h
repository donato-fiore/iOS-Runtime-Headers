// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKFETCHCONTROLGROUPIDENTIFIERSREQUEST_H
#define CRKFETCHCONTROLGROUPIDENTIFIERSREQUEST_H

@class CATTaskRequest, NSString;



@interface CRKFetchControlGroupIdentifiersRequest : CATTaskRequest

@property (nonatomic) BOOL includeTemporary; // ivar: _includeTemporary
@property (copy, nonatomic) NSString *leaderIdentifier; // ivar: _leaderIdentifier


+(BOOL)supportsSecureCoding;
+(Class)allowlistedClassForResultObject;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif