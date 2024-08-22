// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INSENDANNOUNCEMENTANNOUNCEMENTRESOLUTIONRESULT_H
#define INSENDANNOUNCEMENTANNOUNCEMENTRESOLUTIONRESULT_H



#import "INAnnouncementResolutionResult.h"

@interface INSendAnnouncementAnnouncementResolutionResult : INAnnouncementResolutionResult



+(id)confirmationRequiredWithAnnouncementToConfirm:(id)arg0 forReason:(NSInteger)arg1 ;
+(id)unsupportedForReason:(NSInteger)arg0 ;
-(id)_buildIntentSlotResolutionResultWithIntentSlotDescription:(id)arg0 ;
-(id)_initWithIntentSlotResolutionResult:(id)arg0 slotDescription:(id)arg1 ;
-(id)initWithAnnouncementResolutionResult:(id)arg0 ;


@end


#endif