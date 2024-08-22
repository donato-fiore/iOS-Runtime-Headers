// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKREPLACEMERGEABLEDELTASOPERATIONINFO_H
#define CKREPLACEMERGEABLEDELTASOPERATIONINFO_H

@class NSArray;
@protocol NSSecureCoding;


#import "CKDatabaseOperationInfo.h"

@interface CKReplaceMergeableDeltasOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>



@property (copy, nonatomic) NSArray *replaceDeltasRequests; // ivar: _replaceDeltasRequests


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif