// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKFETCHSHAREPARTICIPANTSOPERATIONINFO_H
#define CKFETCHSHAREPARTICIPANTSOPERATIONINFO_H

@class NSArray;
@protocol NSSecureCoding;


#import "CKOperationInfo.h"

@interface CKFetchShareParticipantsOperationInfo : CKOperationInfo <NSSecureCoding>



@property (copy, nonatomic) NSArray *userIdentityLookupInfos; // ivar: _userIdentityLookupInfos


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif