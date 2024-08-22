// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNINSTANTMESSAGEADDRESSCONTACTPREDICATE_H
#define CNINSTANTMESSAGEADDRESSCONTACTPREDICATE_H



#import "CNPredicate.h"
#import "CNInstantMessageAddress.h"

@interface CNInstantMessageAddressContactPredicate : CNPredicate

@property (readonly, copy, nonatomic) CNInstantMessageAddress *imAddress; // ivar: _imAddress


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInstantMessageAddress:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif