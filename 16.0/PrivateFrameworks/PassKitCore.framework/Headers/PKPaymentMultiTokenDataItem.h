// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTMULTITOKENDATAITEM_H
#define PKPAYMENTMULTITOKENDATAITEM_H

@class NSArray;


#import "PKPaymentDataItem.h"

@interface PKPaymentMultiTokenDataItem : PKPaymentDataItem

@property (readonly, nonatomic) NSArray *multiTokenContexts;


+(NSInteger)dataType;
-(BOOL)isValidWithError:(*id)arg0 ;
-(NSInteger)context;


@end


#endif