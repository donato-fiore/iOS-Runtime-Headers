// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTSETUPCHOOSEPRODUCTLISTITEM_H
#define PKPAYMENTSETUPCHOOSEPRODUCTLISTITEM_H

@class NSString;
@protocol PKIdentifiable;

#import <Foundation/Foundation.h>


@interface PKPaymentSetupChooseProductListItem : NSObject <PKIdentifiable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSUInteger type; // ivar: _type


-(id)initWithType:(NSUInteger)arg0 title:(id)arg1 subtitle:(id)arg2 ;


@end


#endif