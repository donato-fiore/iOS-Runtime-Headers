// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKUICALENDARRESOLUTIONRESULT_H
#define EKUICALENDARRESOLUTIONRESULT_H

@class INObjectResolutionResult;



@interface EKUICalendarResolutionResult : INObjectResolutionResult



+(id)confirmationRequiredWithEKUICalendarToConfirm:(id)arg0 ;
+(id)confirmationRequiredWithObjectToConfirm:(id)arg0 ;
+(id)disambiguationWithEKUICalendarsToDisambiguate:(id)arg0 ;
+(id)disambiguationWithObjectsToDisambiguate:(id)arg0 ;
+(id)successWithResolvedEKUICalendar:(id)arg0 ;
+(id)successWithResolvedObject:(id)arg0 ;


@end


#endif