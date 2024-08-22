// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERFINANCINGPLANPAYMENTSCHEDULECOMPOSERITEMLIST_H
#define PKPAYLATERFINANCINGPLANPAYMENTSCHEDULECOMPOSERITEMLIST_H

@class NSMutableSet, NSArray;

#import <Foundation/Foundation.h>


@interface PKPayLaterFinancingPlanPaymentScheduleComposerItemList : NSObject {
    NSMutableSet *_containedInstallmentIdentifiers;
    NSMutableSet *_containedPaymentIdentifiers;
}


@property (copy, nonatomic) NSArray *items; // ivar: _items


-(id)init;
-(void)addInstallment:(id)arg0 ;
-(void)insertItem:(id)arg0 ;


@end


#endif