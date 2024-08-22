// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INCANCELRIDEINTENTRESPONSE_H
#define INCANCELRIDEINTENTRESPONSE_H

@class NSDateComponents;


#import "INIntentResponse.h"
#import "INCurrencyAmount.h"

@interface INCancelRideIntentResponse : INIntentResponse

@property (copy, nonatomic) INCurrencyAmount *cancellationFee; // ivar: _cancellationFee
@property (copy, nonatomic) NSDateComponents *cancellationFeeThreshold; // ivar: _cancellationFeeThreshold
@property (readonly, nonatomic) NSInteger code;


+(BOOL)supportsSecureCoding;
-(id)_dictionaryRepresentation;
-(id)_initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;
-(id)initWithBackingStore:(id)arg0 ;
-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif