// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INSTARTCALLCONTACTRESOLUTIONRESULT_H
#define INSTARTCALLCONTACTRESOLUTIONRESULT_H



#import "INPersonResolutionResult.h"

@interface INStartCallContactResolutionResult : INPersonResolutionResult



+(id)confirmationRequiredWithPersonToConfirm:(id)arg0 forReason:(NSInteger)arg1 ;
+(id)unsupportedForReason:(NSInteger)arg0 ;
-(id)_buildIntentSlotResolutionResultWithIntentSlotDescription:(id)arg0 ;
-(id)_initWithIntentSlotResolutionResult:(id)arg0 slotDescription:(id)arg1 ;
-(id)initWithPersonResolutionResult:(id)arg0 ;


@end


#endif