// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASACCOUNTDATA_H
#define ICASACCOUNTDATA_H

@class NSString;
@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASAccountType.h"

@interface ICASAccountData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSString *accountID; // ivar: _accountID
@property (readonly, nonatomic) ICASAccountType *accountType; // ivar: _accountType


+(id)dataName;
-(id)initWithAccountType:(id)arg0 accountID:(id)arg1 ;
-(id)toDict;


@end


#endif