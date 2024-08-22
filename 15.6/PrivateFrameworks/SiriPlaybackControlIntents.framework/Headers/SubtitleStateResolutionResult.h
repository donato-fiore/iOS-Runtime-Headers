// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUBTITLESTATERESOLUTIONRESULT_H
#define SUBTITLESTATERESOLUTIONRESULT_H

@class INEnumResolutionResult;



@interface SubtitleStateResolutionResult : INEnumResolutionResult



+(id)confirmationRequiredWithSubtitleStateToConfirm:(NSInteger)arg0 ;
+(id)successWithResolvedSubtitleState:(NSInteger)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 forIntent:(id)arg1 ;


@end


#endif