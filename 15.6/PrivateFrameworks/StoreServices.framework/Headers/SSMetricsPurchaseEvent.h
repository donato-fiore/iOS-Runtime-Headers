// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSMETRICSPURCHASEEVENT_H
#define SSMETRICSPURCHASEEVENT_H

@class NSString;


#import "SSMetricsBaseEvent.h"

@interface SSMetricsPurchaseEvent : SSMetricsBaseEvent

@property (nonatomic) CGFloat requestStartTime;
@property (nonatomic) CGFloat responseEndTime;
@property (nonatomic) CGFloat responseStartTime;
@property (retain, nonatomic) NSString *transactionIdentifier;


-(id)init;
-(void)addFieldsFromPurchaseResponse:(id)arg0 ;


@end


#endif