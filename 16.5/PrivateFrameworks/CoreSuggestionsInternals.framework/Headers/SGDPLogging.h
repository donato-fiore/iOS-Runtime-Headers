// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGDPLOGGING_H
#define SGDPLOGGING_H


#import <Foundation/Foundation.h>


@interface SGDPLogging : NSObject



+(id)_boolMaskVectorForTokens:(id)arg0 ;
+(id)_loggableTitleSequence:(id)arg0 withMask:(id)arg1 ;
+(id)_loggableUnknownTokenSequence:(id)arg0 withMask:(id)arg1 ;
+(id)_tokenizeTitle:(id)arg0 ;
+(void)_logReminderTitleSequence:(id)arg0 recorderKey:(id)arg1 ;
+(void)_logReminderTitleUnknownTokens:(id)arg0 recorderKey:(id)arg1 ;
+(void)logActionVerb:(id)arg0 actionType:(unsigned short)arg1 ;
+(void)logReminder:(id)arg0 actionType:(unsigned short)arg1 ;
+(void)logReminderTitle:(id)arg0 actionType:(unsigned short)arg1 ;
+(void)logUserCreatedReminderTitle:(id)arg0 ;


@end


#endif