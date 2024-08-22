// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INSENDRIDEFEEDBACKINTENT_H
#define INSENDRIDEFEEDBACKINTENT_H

@class NSNumber, NSString;


#import "INIntent.h"
#import "INCurrencyAmount.h"

@interface INSendRideFeedbackIntent : INIntent

@property (copy, nonatomic) NSNumber *rating; // ivar: _rating
@property (readonly, copy, nonatomic) NSString *rideIdentifier; // ivar: _rideIdentifier
@property (copy, nonatomic) INCurrencyAmount *tip; // ivar: _tip


+(BOOL)supportsSecureCoding;
+(id)intentDescription;
-(id)_dictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRideIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif