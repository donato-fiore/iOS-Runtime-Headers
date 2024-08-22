// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLOCKREQUESTTYPERESOLUTIONRESULT_H
#define CLOCKREQUESTTYPERESOLUTIONRESULT_H

@class INEnumResolutionResult;



@interface ClockRequestTypeResolutionResult : INEnumResolutionResult



+(id)confirmationRequiredWithClockRequestTypeToConfirm:(NSInteger)arg0 ;
+(id)successWithResolvedClockRequestType:(NSInteger)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 forIntent:(id)arg1 ;


@end


#endif