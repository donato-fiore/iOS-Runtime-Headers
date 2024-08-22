// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC34SIRICROSSDEVICEARBITRATIONFEEDBACK19FEEDBACKSERVICEIMPL_H
#define _TTC34SIRICROSSDEVICEARBITRATIONFEEDBACK19FEEDBACKSERVICEIMPL_H

@protocol _TtP34SiriCrossDeviceArbitrationFeedback15FeedbackService_, _TtP34SiriCrossDeviceArbitrationFeedback23FeedbackServiceDelegate_, _TtP34SiriCrossDeviceArbitrationFeedback7Globals_;

#import <Foundation/Foundation.h>


@interface _TtC34SiriCrossDeviceArbitrationFeedback19FeedbackServiceImpl : NSObject <_TtP34SiriCrossDeviceArbitrationFeedback15FeedbackService_>

 {
    ? $__lazy_storage_$_userfeedbackController;
    ? $__lazy_storage_$_notificationService;
    ? $__lazy_storage_$_globals;
}


@property (nonatomic, retain) NSObject<_TtP34SiriCrossDeviceArbitrationFeedback23FeedbackServiceDelegate_> *delegate; // ivar: delegate
@property (nonatomic, retain) NSObject<_TtP34SiriCrossDeviceArbitrationFeedback7Globals_> *globals;


+(id)receivedArbitrationsDirectoryURL;
+(id)sharedService;
-(id)init;
-(void)add:(id)arg0 ;
-(void)handleAssistantDismissed;


@end


#endif