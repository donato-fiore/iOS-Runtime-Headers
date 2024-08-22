// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CTREMOTEPLAN_H
#define CTREMOTEPLAN_H



#import "CTPlan.h"
#import "CTRemotePlanIdentifier.h"
#import "CTPlanSignUpDetails.h"
#import "CTPlanTransferAttributes.h"

@interface CTRemotePlan : CTPlan

@property (nonatomic) NSUInteger addOnCarrierFlowType; // ivar: _addOnCarrierFlowType
@property (nonatomic) NSUInteger addOnPurchaseType; // ivar: _addOnPurchaseType
@property (retain, nonatomic) CTRemotePlanIdentifier *planID; // ivar: _planID
@property (retain, nonatomic) CTPlanSignUpDetails *signUpDetails; // ivar: _signUpDetails
@property (retain, nonatomic) CTPlanTransferAttributes *transferAttributes; // ivar: _transferAttributes


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)carrierName;
-(id)countryCode;
-(id)description;
-(id)iccid;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)label;
-(id)phoneNumber;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif