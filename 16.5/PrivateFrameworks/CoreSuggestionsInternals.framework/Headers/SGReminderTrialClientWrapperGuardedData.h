// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGREMINDERTRIALCLIENTWRAPPERGUARDEDDATA_H
#define SGREMINDERTRIALCLIENTWRAPPERGUARDEDDATA_H

@class NSNumber, NSDictionary;

#import <Foundation/Foundation.h>


@interface SGReminderTrialClientWrapperGuardedData : NSObject {
    BOOL _confirmationOptional;
    BOOL _triggerOptional;
    BOOL _actionVerbOptional;
    NSNumber *_messagesBannerLimit;
    NSDictionary *_reminderOverrides;
    NSDictionary *_reminderEnrichments;
    NSDictionary *_reminderInputMapping;
    NSDictionary *_reminderOutputMapping;
}






@end


#endif