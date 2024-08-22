// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASACCOUNTTYPEITEMDATA_H
#define ICASACCOUNTTYPEITEMDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASAccountType.h"

@interface ICASAccountTypeItemData : NSObject <AADataEventType>



@property (readonly, nonatomic) ICASAccountType *accountType; // ivar: _accountType
@property (readonly, nonatomic) NSNumber *countOfAccounts; // ivar: _countOfAccounts
@property (readonly, nonatomic) NSNumber *countOfNotes; // ivar: _countOfNotes


+(id)dataName;
-(id)initWithAccountType:(id)arg0 countOfAccounts:(id)arg1 countOfNotes:(id)arg2 ;
-(id)toDict;


@end


#endif