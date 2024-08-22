// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPAYMENTPROVISIONINGFLOWPICKERITEM_H
#define NPKPAYMENTPROVISIONINGFLOWPICKERITEM_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface NPKPaymentProvisioningFlowPickerItem : NSObject

@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSArray *products; // ivar: _products
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)itemWithIdentifier:(id)arg0 products:(id)arg1 ;
+(id)itemWithIdentifier:(id)arg0 title:(id)arg1 products:(id)arg2 ;
-(id)description;


@end


#endif