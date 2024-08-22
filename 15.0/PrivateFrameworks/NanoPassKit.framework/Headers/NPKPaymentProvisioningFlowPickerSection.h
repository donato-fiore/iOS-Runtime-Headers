// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPAYMENTPROVISIONINGFLOWPICKERSECTION_H
#define NPKPAYMENTPROVISIONINGFLOWPICKERSECTION_H

@class NSString, NSMutableArray;

#import <Foundation/Foundation.h>


@interface NPKPaymentProvisioningFlowPickerSection : NSObject

@property (copy, nonatomic) NSString *footer; // ivar: _footer
@property (readonly, nonatomic) BOOL isPaymentSection;
@property (readonly, nonatomic) BOOL isTransitSection;
@property (readonly, copy, nonatomic) NSMutableArray *items; // ivar: _items
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)sectionWithTitle:(id)arg0 ;
+(id)sectionWithTitle:(id)arg0 footer:(id)arg1 ;
-(id)description;


@end


#endif