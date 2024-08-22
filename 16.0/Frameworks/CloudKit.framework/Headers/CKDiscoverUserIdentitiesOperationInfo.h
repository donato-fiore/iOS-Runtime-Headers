// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDISCOVERUSERIDENTITIESOPERATIONINFO_H
#define CKDISCOVERUSERIDENTITIESOPERATIONINFO_H

@class NSArray;
@protocol NSSecureCoding;


#import "CKOperationInfo.h"

@interface CKDiscoverUserIdentitiesOperationInfo : CKOperationInfo <NSSecureCoding>



@property (retain, nonatomic) NSArray *userIdentityLookupInfos; // ivar: _userIdentityLookupInfos


+(BOOL)supportsSecureCoding;
-(id)activityCreate;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif