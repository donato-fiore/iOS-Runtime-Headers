// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTINTENTREPEATDAYRESOLUTIONRESULT_H
#define MTINTENTREPEATDAYRESOLUTIONRESULT_H

@class INObjectResolutionResult;



@interface MTIntentRepeatDayResolutionResult : INObjectResolutionResult



+(BOOL)supportsSecureCoding;
+(id)confirmationRequiredWithRepeatDayToConfirm:(id)arg0 ;
+(id)disambiguationWithRepeatDaysToDisambiguate:(id)arg0 ;
+(id)successWithResolvedRepeatDay:(id)arg0 ;


@end


#endif