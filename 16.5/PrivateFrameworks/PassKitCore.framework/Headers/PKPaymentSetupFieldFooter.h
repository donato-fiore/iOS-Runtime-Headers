// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTSETUPFIELDFOOTER_H
#define PKPAYMENTSETUPFIELDFOOTER_H

@class NSAttributedString;


#import "PKPaymentSetupFieldLabel.h"

@interface PKPaymentSetupFieldFooter : PKPaymentSetupFieldLabel

@property (copy, nonatomic) NSAttributedString *body; // ivar: _body
@property (nonatomic) NSUInteger fontScale; // ivar: _fontScale
@property (nonatomic) NSUInteger position; // ivar: _position


-(NSUInteger)fieldType;
-(void)updateWithAttribute:(id)arg0 ;
-(void)updateWithConfiguration:(id)arg0 ;


@end


#endif