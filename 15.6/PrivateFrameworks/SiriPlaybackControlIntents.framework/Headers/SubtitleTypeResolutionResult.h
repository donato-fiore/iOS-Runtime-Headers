// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUBTITLETYPERESOLUTIONRESULT_H
#define SUBTITLETYPERESOLUTIONRESULT_H

@class INEnumResolutionResult;



@interface SubtitleTypeResolutionResult : INEnumResolutionResult



+(id)confirmationRequiredWithSubtitleTypeToConfirm:(NSInteger)arg0 ;
+(id)successWithResolvedSubtitleType:(NSInteger)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 forIntent:(id)arg1 ;


@end


#endif