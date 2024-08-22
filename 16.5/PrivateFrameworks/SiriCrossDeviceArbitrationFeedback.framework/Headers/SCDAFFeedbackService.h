// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCDAFFEEDBACKSERVICE_H
#define SCDAFFEEDBACKSERVICE_H

@class NSString;
@protocol _TtP34SiriCrossDeviceArbitrationFeedback23FeedbackServiceDelegate_, SCDAFFeedbackServiceDelegate, _TtP34SiriCrossDeviceArbitrationFeedback7Globals_;

#import <Foundation/Foundation.h>

#import "_TtC34SiriCrossDeviceArbitrationFeedback19FeedbackServiceImpl.h"

@interface SCDAFFeedbackService : NSObject <_TtP34SiriCrossDeviceArbitrationFeedback23FeedbackServiceDelegate_>



@property (weak, nonatomic) NSObject<SCDAFFeedbackServiceDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) _TtC34SiriCrossDeviceArbitrationFeedback19FeedbackServiceImpl *feedbackService; // ivar: _feedbackService
@property (retain, nonatomic) NSObject<_TtP34SiriCrossDeviceArbitrationFeedback7Globals_> *globals; // ivar: _globals
@property (copy, nonatomic) NSString *localDeviceAssistantIdentifier; // ivar: _localDeviceAssistantIdentifier


+(id)sharedService;
-(BOOL)isUserFeedbackFeatureEnabled;
-(NSInteger)_actionFromSCDAFFeedbackAction:(NSInteger)arg0 ;
-(NSInteger)_scdaFeedbackActionFrom:(NSInteger)arg0 ;
-(id)_init;
-(id)initWithServiceImpl:(id)arg0 globals:(id)arg1 ;
-(void)handleAssistantDismissed;
-(void)handleNotificationAction:(NSInteger)arg0 ;
-(void)handleNotificationSCDAFAction:(NSInteger)arg0 ;
-(void)handleReceivedArbitrationParticipation:(id)arg0 ;


@end


#endif