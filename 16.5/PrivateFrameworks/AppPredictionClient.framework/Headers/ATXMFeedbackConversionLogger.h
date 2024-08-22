// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMFEEDBACKCONVERSIONLOGGER_H
#define ATXMFEEDBACKCONVERSIONLOGGER_H


#import <Foundation/Foundation.h>


@interface ATXMFeedbackConversionLogger : NSObject



+(void)logRecordedFeedbackWithEngagementType:(int)arg0 consumerSubType:(unsigned char)arg1 tracker:(id)arg2 ;
+(void)logUserInteractionFeedbackWithEngagementType:(int)arg0 consumerSubType:(unsigned char)arg1 tracker:(id)arg2 ;


@end


#endif