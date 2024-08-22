// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVVOICETRIGGERNOTIFICATIONFORWARDER_H
#define AVVOICETRIGGERNOTIFICATIONFORWARDER_H

@protocol VoiceTriggerNotificationInterface;

#import <Foundation/Foundation.h>


@interface AVVoiceTriggerNotificationForwarder : NSObject <VoiceTriggerNotificationInterface>



@property (nonatomic) NSObject<VoiceTriggerNotificationInterface> *target; // ivar: _target


-(void)siriClientRecordStateChangedNotification:(BOOL)arg0 recordingCount:(NSUInteger)arg1 ;
-(void)speakerMuteStateChangedNotification:(BOOL)arg0 ;
-(void)speakerStateChangedNotification:(id)arg0 ;
-(void)voiceTriggerNotification:(id)arg0 ;


@end


#endif