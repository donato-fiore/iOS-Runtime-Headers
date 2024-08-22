// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTWORLDCLOCKRESOLUTIONRESULT_H
#define MTWORLDCLOCKRESOLUTIONRESULT_H

@class INObjectResolutionResult;



@interface MTWorldClockResolutionResult : INObjectResolutionResult



+(id)confirmationRequiredWithMTWorldClockToConfirm:(id)arg0 ;
+(id)disambiguationWithMTWorldClocksToDisambiguate:(id)arg0 ;
+(id)successWithResolvedMTWorldClock:(id)arg0 ;


@end


#endif