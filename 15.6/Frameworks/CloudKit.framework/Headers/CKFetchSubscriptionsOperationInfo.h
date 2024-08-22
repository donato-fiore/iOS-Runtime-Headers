// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKFETCHSUBSCRIPTIONSOPERATIONINFO_H
#define CKFETCHSUBSCRIPTIONSOPERATIONINFO_H

@class NSArray;
@protocol NSSecureCoding;


#import "CKDatabaseOperationInfo.h"

@interface CKFetchSubscriptionsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>



@property (nonatomic) BOOL isFetchAllSubscriptionsOperation; // ivar: _isFetchAllSubscriptionsOperation
@property (retain, nonatomic) NSArray *subscriptionIDs; // ivar: _subscriptionIDs


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif