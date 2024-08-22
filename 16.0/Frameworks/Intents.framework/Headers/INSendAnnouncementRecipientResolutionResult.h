// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INSENDANNOUNCEMENTRECIPIENTRESOLUTIONRESULT_H
#define INSENDANNOUNCEMENTRECIPIENTRESOLUTIONRESULT_H



#import "INHomeFilterResolutionResult.h"

@interface INSendAnnouncementRecipientResolutionResult : INHomeFilterResolutionResult



+(id)unsupportedForReason:(NSInteger)arg0 ;
-(id)_buildIntentSlotResolutionResultWithIntentSlotDescription:(id)arg0 ;
-(id)_initWithIntentSlotResolutionResult:(id)arg0 slotDescription:(id)arg1 ;
-(id)initWithHomeFilterResolutionResult:(id)arg0 ;


@end


#endif