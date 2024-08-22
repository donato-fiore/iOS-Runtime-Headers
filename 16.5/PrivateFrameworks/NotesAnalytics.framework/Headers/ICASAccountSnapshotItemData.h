// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASACCOUNTSNAPSHOTITEMDATA_H
#define ICASACCOUNTSNAPSHOTITEMDATA_H

@class NSString;
@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASAccountPurpose.h"
#import "ICASAccountType.h"

@interface ICASAccountSnapshotItemData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSString *accountID; // ivar: _accountID
@property (readonly, nonatomic) ICASAccountPurpose *accountPurpose; // ivar: _accountPurpose
@property (readonly, nonatomic) ICASAccountType *accountType; // ivar: _accountType


+(id)dataName;
-(id)initWithAccountID:(id)arg0 accountType:(id)arg1 accountPurpose:(id)arg2 ;
-(id)toDict;


@end


#endif