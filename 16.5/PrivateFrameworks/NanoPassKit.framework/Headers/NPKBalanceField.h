// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKBALANCEFIELD_H
#define NPKBALANCEFIELD_H

@class NSDate, PKPaymentPassAction, PKPaymentBalance, NSString;
@protocol NPKBalanceField;

#import <Foundation/Foundation.h>


@interface NPKBalanceField : NSObject <NPKBalanceField>

 {
    NSDate *_pendingUpdateExpireDate;
}


@property (readonly, nonatomic) PKPaymentPassAction *action; // ivar: _action
@property (readonly, nonatomic) PKPaymentBalance *balance; // ivar: _balance
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *detailLabel; // ivar: detailLabel
@property (readonly, nonatomic) NSString *formattedValue; // ivar: _formattedValue
@property (readonly, nonatomic) BOOL hasPendingUpdate;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isPrimaryBalance; // ivar: _isPrimaryBalance
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithBalance:(id)arg0 label:(id)arg1 formattedValue:(id)arg2 identifier:(id)arg3 primaryBalance:(BOOL)arg4 action:(id)arg5 pendingUpdateExpireDate:(id)arg6 ;


@end


#endif