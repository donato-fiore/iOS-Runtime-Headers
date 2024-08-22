// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFARBITRATIONPARTICIPATIONCONTROLLER_H
#define AFARBITRATIONPARTICIPATIONCONTROLLER_H

@class NSString, NSMutableDictionary, NSMutableArray;
@protocol AFArbitrationEventUpdatesDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AFSettingsConnection.h"

@interface AFArbitrationParticipationController : NSObject <AFArbitrationEventUpdatesDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *participationsForUserFeedback; // ivar: _participationsForUserFeedback
@property (retain, nonatomic) NSMutableArray *participationsPublished; // ivar: _participationsPublished
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) AFSettingsConnection *settingsConnection; // ivar: _settingsConnection
@property (readonly) Class superclass;


-(id)init;
-(void)_publishFeedbackArbitrationRecord;
-(void)_publishFeedbackArbitrationRecordForNearMiss;
-(void)_updateUserFeedbackParticipationAllAdvertisements:(id)arg0 session:(id)arg1 ownRecord:(id)arg2 won:(BOOL)arg3 triggerType:(id)arg4 lastActivationTime:(CGFloat)arg5 requestStartDate:(id)arg6 voiceTriggerDate:(id)arg7 scoreBoosters:(id)arg8 deviceClass:(unsigned char)arg9 ;
-(void)arbitrationDidUpdateWithContext:(id)arg0 session:(id)arg1 completion:(id)arg2 ;
-(void)arbitrationEndedAdvertising:(id)arg0 ;
-(void)arbitrationEndedTask:(id)arg0 ;
-(void)arbitrationSessionWillStart:(id)arg0 ;
-(void)dealloc;
-(void)requestWillPresentUsefulUserResult:(id)arg0 ;


@end


#endif