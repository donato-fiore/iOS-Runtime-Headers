// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGREMINDERTRIALCLIENTWRAPPER_H
#define SGREMINDERTRIALCLIENTWRAPPER_H

@class _PASLock;


#import "SGTrialClientWrapper.h"

@interface SGReminderTrialClientWrapper : SGTrialClientWrapper {
    _PASLock *_lock;
}




+(id)sharedInstance;
-(BOOL)actionVerbOptional;
-(BOOL)confirmationOptional;
-(BOOL)triggerOptional;
-(id)baseModelName;
-(id)init;
-(id)messagesBannerLimit;
-(id)reminderEnrichments;
-(id)reminderInputMapping;
-(id)reminderOutputMapping;
-(id)reminderOverrides;
-(void)updateFactors;


@end


#endif