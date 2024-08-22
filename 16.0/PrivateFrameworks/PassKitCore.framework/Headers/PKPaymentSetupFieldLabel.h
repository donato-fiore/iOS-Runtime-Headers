// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSETUPFIELDLABEL_H
#define PKPAYMENTSETUPFIELDLABEL_H

@class NSString, NSArray;


#import "PKPaymentSetupField.h"

@interface PKPaymentSetupFieldLabel : PKPaymentSetupField

@property (nonatomic) NSUInteger alingment; // ivar: _alingment
@property (copy, nonatomic) NSString *businessChatButtonTitle; // ivar: _businessChatButtonTitle
@property (copy, nonatomic) NSString *businessChatIdentifier; // ivar: _businessChatIdentifier
@property (copy, nonatomic) NSString *businessChatIntentName; // ivar: _businessChatIntentName
@property (copy, nonatomic) NSString *buttonTitle; // ivar: _buttonTitle
@property (copy, nonatomic) NSString *detailBody; // ivar: _detailBody
@property (copy, nonatomic) NSString *detailSubtitle; // ivar: _detailSubtitle
@property (copy, nonatomic) NSString *detailTitle; // ivar: _detailTitle
@property (copy, nonatomic) NSArray *links; // ivar: _links
@property (readonly, copy, nonatomic) NSString *title;


-(BOOL)submissionStringMeetsAllRequirements;
-(NSUInteger)fieldType;
-(id)displayString;
-(id)submissionString;
-(void)_commonUpdate;
-(void)setCurrentValue:(id)arg0 ;
-(void)updateWithAttribute:(id)arg0 ;
-(void)updateWithConfiguration:(id)arg0 ;


@end


#endif