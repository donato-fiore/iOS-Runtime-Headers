// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTTRANSACTIONCELLCONTROLLER_H
#define PKPAYMENTTRANSACTIONCELLCONTROLLER_H

@class PKContactResolver;

#import <Foundation/Foundation.h>

#import "PKPaymentTransactionIconGenerator.h"

@interface PKPaymentTransactionCellController : NSObject {
    PKPaymentTransactionIconGenerator *_iconGenerator;
}


@property (readonly, nonatomic) PKContactResolver *contactResolver; // ivar: _contactResolver


-(id)initWithContactResolver:(id)arg0 ;
-(void)_updateAvatarOnTransactionCell:(id)arg0 withTransaction:(id)arg1 contact:(id)arg2 ;
-(void)_updatePrimaryLabelOnTransactionCell:(id)arg0 withPeerPaymentCounterpartHandle:(id)arg1 contact:(id)arg2 ;
-(void)configureCell:(id)arg0 forTransaction:(id)arg1 transactionSource:(id)arg2 familyMember:(id)arg3 account:(id)arg4 detailStyle:(NSInteger)arg5 deviceName:(id)arg6 avatarViewDelegate:(id)arg7 ;


@end


#endif