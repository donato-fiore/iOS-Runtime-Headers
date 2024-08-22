// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRMEDIACOMMANDRESOLUTIONRESULT_H
#define TVRMEDIACOMMANDRESOLUTIONRESULT_H

@class INEnumResolutionResult;



@interface TVRMediaCommandResolutionResult : INEnumResolutionResult



+(id)confirmationRequiredWithMediaCommandToConfirm:(NSInteger)arg0 ;
+(id)successWithResolvedMediaCommand:(NSInteger)arg0 ;


@end


#endif