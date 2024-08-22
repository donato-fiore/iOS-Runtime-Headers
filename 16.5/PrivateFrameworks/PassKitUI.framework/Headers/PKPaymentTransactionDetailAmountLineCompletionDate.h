// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTTRANSACTIONDETAILAMOUNTLINECOMPLETIONDATE_H
#define PKPAYMENTTRANSACTIONDETAILAMOUNTLINECOMPLETIONDATE_H

@class NSDate, NSString;
@protocol PKPaymentTransactionDetailAmountLineItem;

#import <Foundation/Foundation.h>


@interface PKPaymentTransactionDetailAmountLineCompletionDate : NSObject <PKPaymentTransactionDetailAmountLineItem>



@property (readonly, nonatomic) BOOL completed; // ivar: _completed
@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasTrailingLineSeperator; // ivar: _hasTrailingLineSeperator
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isEmphasized;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSUInteger lineItemType;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *value;


-(id)image;
-(id)initWithDate:(id)arg0 completed:(BOOL)arg1 ;
-(id)secondaryLabel;
-(id)tertiaryLabel;


@end


#endif