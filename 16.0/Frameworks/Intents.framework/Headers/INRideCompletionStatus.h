// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INRIDECOMPLETIONSTATUS_H
#define INRIDECOMPLETIONSTATUS_H

@class NSUserActivity, NSString, NSSet;
@protocol INCacheableContainer, INRideCompletionStatusExport, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INCurrencyAmount.h"

@interface INRideCompletionStatus : NSObject <INCacheableContainer, INRideCompletionStatusExport, NSCopying, NSSecureCoding>



@property (readonly, nonatomic, getter=isCanceled) BOOL canceled;
@property (readonly, nonatomic, getter=isCanceledByService) BOOL canceledByService; // ivar: _canceledByService
@property (readonly, nonatomic, getter=isCompleted) BOOL completed; // ivar: _completed
@property (retain, nonatomic) NSUserActivity *completionUserActivity; // ivar: _completionUserActivity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSSet *defaultTippingOptions; // ivar: _defaultTippingOptions
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger feedbackType; // ivar: _feedbackType
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isMissedPickup) BOOL missedPickup; // ivar: _missedPickup
@property (readonly, nonatomic, getter=isOutstanding) BOOL outstanding; // ivar: _outstanding
@property (readonly, nonatomic) INCurrencyAmount *paymentAmount; // ivar: _paymentAmount
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)canceledByService;
+(id)canceledByUser;
+(id)canceledMissedPickup;
+(id)completed;
+(id)completedWithOutstandingFeedbackType:(NSUInteger)arg0 ;
+(id)completedWithOutstandingPaymentAmount:(id)arg0 ;
+(id)completedWithSettledPaymentAmount:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_initCompleted:(BOOL)arg0 canceledByService:(BOOL)arg1 missedPickup:(BOOL)arg2 amount:(id)arg3 feedbackType:(NSUInteger)arg4 outstanding:(BOOL)arg5 ;
-(id)_initWithValue:(id)arg0 ;
-(id)_intents_cacheableObjects;
-(id)_newValue;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_intents_updateContainerWithCache:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif