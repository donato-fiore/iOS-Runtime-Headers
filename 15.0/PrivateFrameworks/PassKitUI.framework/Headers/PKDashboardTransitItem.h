// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKDASHBOARDTRANSITITEM_H
#define PKDASHBOARDTRANSITITEM_H

@class NSString, PKPaymentPass, PKTransitBalanceModel, NSArray;
@protocol PKDashboardItem;

#import <Foundation/Foundation.h>

#import "PKPassView.h"

@interface PKDashboardTransitItem : NSObject <PKDashboardItem>

 {
    PKPassView *_passView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKPaymentPass *pass;
@property (readonly) Class superclass;
@property (retain, nonatomic) PKTransitBalanceModel *transitBalanceModel; // ivar: _transitBalanceModel
@property (copy, nonatomic) NSArray *transitCommutePlans; // ivar: _transitCommutePlans
@property (nonatomic) NSUInteger transitItemType; // ivar: _transitItemType


+(id)identifier;
-(id)initWithPassView:(id)arg0 ;


@end


#endif