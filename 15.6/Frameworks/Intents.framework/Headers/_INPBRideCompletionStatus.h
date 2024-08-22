// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBRIDECOMPLETIONSTATUS_H
#define _INPBRIDECOMPLETIONSTATUS_H

@class PBCodable, NSString, NSArray;
@protocol _INPBRideCompletionStatus, NSSecureCoding, NSCopying;


#import "_INPBUserActivity.h"
#import "_INPBCurrencyAmountValue.h"

@interface _INPBRideCompletionStatus : PBCodable <_INPBRideCompletionStatus, NSSecureCoding, NSCopying>

 {
    ? _feedbackTypes;
    ? _has;
}


@property (nonatomic) BOOL canceled; // ivar: _canceled
@property (nonatomic) BOOL canceledByService; // ivar: _canceledByService
@property (nonatomic) BOOL completed; // ivar: _completed
@property (retain, nonatomic) _INPBUserActivity *completionUserActivity; // ivar: _completionUserActivity
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *defaultTippingOptions; // ivar: _defaultTippingOptions
@property (readonly, nonatomic) NSUInteger defaultTippingOptionsCount;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) *int feedbackTypes;
@property (readonly, nonatomic) NSUInteger feedbackTypesCount;
@property (nonatomic) BOOL hasCanceled;
@property (nonatomic) BOOL hasCanceledByService;
@property (nonatomic) BOOL hasCompleted;
@property (readonly, nonatomic) BOOL hasCompletionUserActivity;
@property (nonatomic) BOOL hasMissedPickup;
@property (nonatomic) BOOL hasOutstanding;
@property (readonly, nonatomic) BOOL hasPaymentAmount;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL missedPickup; // ivar: _missedPickup
@property (nonatomic) BOOL outstanding; // ivar: _outstanding
@property (retain, nonatomic) _INPBCurrencyAmountValue *paymentAmount; // ivar: _paymentAmount
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultTippingOptionsAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)feedbackTypesAsString:(int)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(int)StringAsFeedbackTypes:(id)arg0 ;
-(int)feedbackTypeAtIndex:(NSUInteger)arg0 ;
-(void)addDefaultTippingOptions:(id)arg0 ;
-(void)addFeedbackType:(int)arg0 ;
-(void)clearDefaultTippingOptions;
-(void)clearFeedbackTypes;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif