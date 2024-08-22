// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INNOTECONTENTTYPERESOLUTIONRESULT_H
#define INNOTECONTENTTYPERESOLUTIONRESULT_H



#import "INIntentResolutionResult.h"

@interface INNoteContentTypeResolutionResult : INIntentResolutionResult



+(id)confirmationRequiredWithNoteContentTypeToConfirm:(NSInteger)arg0 ;
+(id)successWithResolvedNoteContentType:(NSInteger)arg0 ;
-(void)transformResolutionResultForIntent:(id)arg0 intentSlotDescription:(id)arg1 withOptionsProvider:(id)arg2 completion:(id)arg3 ;


@end


#endif