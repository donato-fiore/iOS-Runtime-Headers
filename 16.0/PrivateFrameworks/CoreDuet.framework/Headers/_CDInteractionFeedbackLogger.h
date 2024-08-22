// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CDINTERACTIONFEEDBACKLOGGER_H
#define _CDINTERACTIONFEEDBACKLOGGER_H


#import <Foundation/Foundation.h>


@interface _CDInteractionFeedbackLogger : NSObject



+(id)aggdKeyForAdviceSource:(NSUInteger)arg0 ;
+(id)aggdKeyForPresentationStyle:(NSUInteger)arg0 ;
+(void)logFeedbackItemSelected:(id)arg0 adviceSource:(NSUInteger)arg1 presentationStyle:(NSUInteger)arg2 itemsShown:(id)arg3 bundleID:(id)arg4 ;


@end


#endif