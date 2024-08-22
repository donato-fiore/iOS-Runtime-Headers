// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPAYMENTPROVISIONINGFLOWPICKERSECTION_H
#define NPKPAYMENTPROVISIONINGFLOWPICKERSECTION_H

@class NSString, NSMutableArray, NSNumber;

#import <Foundation/Foundation.h>


@interface NPKPaymentProvisioningFlowPickerSection : NSObject

@property (copy, nonatomic) NSString *footer; // ivar: _footer
@property (readonly, nonatomic) BOOL isAppleBalanceSection;
@property (readonly, nonatomic) BOOL isEMoneySection;
@property (readonly, nonatomic) BOOL isPaymentSection;
@property (readonly, nonatomic) BOOL isTransitSection;
@property (readonly, copy, nonatomic) NSMutableArray *items; // ivar: _items
@property (readonly, copy, nonatomic) NSNumber *productType; // ivar: _productType
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)sectionWithTitle:(id)arg0 footer:(id)arg1 productType:(id)arg2 ;
+(id)sectionWithTitle:(id)arg0 footer:(id)arg1 productType:(id)arg2 items:(id)arg3 ;
+(id)sectionWithTitle:(id)arg0 productType:(id)arg1 ;
+(id)sectionWithTitle:(id)arg0 productType:(id)arg1 items:(id)arg2 ;
-(id)description;


@end


#endif