// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INPLAYMEDIAMEDIAITEMRESOLUTIONRESULT_H
#define INPLAYMEDIAMEDIAITEMRESOLUTIONRESULT_H



#import "INMediaItemResolutionResult.h"

@interface INPlayMediaMediaItemResolutionResult : INMediaItemResolutionResult



+(id)successesWithResolvedMediaItems:(id)arg0 ;
+(id)unsupportedForReason:(NSInteger)arg0 ;
-(id)_buildIntentSlotResolutionResultWithIntentSlotDescription:(id)arg0 ;
-(id)_initWithIntentSlotResolutionResult:(id)arg0 slotDescription:(id)arg1 ;
-(id)initWithMediaItemResolutionResult:(id)arg0 ;


@end


#endif