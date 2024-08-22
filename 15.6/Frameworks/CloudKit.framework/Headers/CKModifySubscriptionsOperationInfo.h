// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKMODIFYSUBSCRIPTIONSOPERATIONINFO_H
#define CKMODIFYSUBSCRIPTIONSOPERATIONINFO_H

@class NSArray;
@protocol NSSecureCoding;


#import "CKDatabaseOperationInfo.h"

@interface CKModifySubscriptionsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>



@property (retain, nonatomic) NSArray *subscriptionIDsToDelete; // ivar: _subscriptionIDsToDelete
@property (retain, nonatomic) NSArray *subscriptionsToSave; // ivar: _subscriptionsToSave


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif