// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PSMESSAGESPINNINGFEEDBACK_H
#define _PSMESSAGESPINNINGFEEDBACK_H

@class NSArray, NSDate, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _PSMessagesPinningFeedback : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger actionType; // ivar: _actionType
@property (readonly, nonatomic) NSArray *actualPinnings; // ivar: _actualPinnings
@property (readonly, nonatomic) NSDate *eventDate; // ivar: _eventDate
@property (nonatomic) NSInteger interactionMethod; // ivar: _interactionMethod
@property (readonly, nonatomic) NSArray *onboardingSuggestions; // ivar: _onboardingSuggestions
@property (copy, nonatomic) NSString *trialId; // ivar: _trialId


+(BOOL)supportsSecureCoding;
+(id)acceptedWithActualPinnings:(id)arg0 OnboardingSuggestions:(id)arg1 ;
+(id)pinsChangedWithNowCurrentPins:(id)arg0 ;
+(id)skipOnboardingWithOnboardingSuggestions:(id)arg0 ;
-(id)initWithAction:(NSInteger)arg0 actualPinnings:(id)arg1 onboardingSuggestions:(id)arg2 trialId:(id)arg3 eventDate:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif