// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INCHANGEALARMSTATUSALARMRESOLUTIONRESULT_H
#define INCHANGEALARMSTATUSALARMRESOLUTIONRESULT_H



#import "INAlarmResolutionResult.h"

@interface INChangeAlarmStatusAlarmResolutionResult : INAlarmResolutionResult



+(id)unsupportedForReason:(NSInteger)arg0 ;
-(id)_buildIntentSlotResolutionResultWithIntentSlotDescription:(id)arg0 ;
-(id)_initWithIntentSlotResolutionResult:(id)arg0 slotDescription:(id)arg1 ;
-(id)initWithAlarmResolutionResult:(id)arg0 ;


@end


#endif