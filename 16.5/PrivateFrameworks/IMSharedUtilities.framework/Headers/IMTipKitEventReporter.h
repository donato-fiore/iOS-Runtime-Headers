// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMTIPKITEVENTREPORTER_H
#define IMTIPKITEVENTREPORTER_H


#import <Foundation/Foundation.h>


@interface IMTipKitEventReporter : NSObject



+(id)sharedInstance;
-(void)sendBiomeSignal:(id)arg0 ;
-(void)sendCoreAnalyticsSilverEvent:(id)arg0 ;
-(void)sendFilterUnknownSenderStateChangedEvent;
-(void)sendJunkInboxOpenedEvent;
-(void)sendReceivedJunkEventIfNeeded;
-(void)sendReceivedPhotoEvent;
-(void)sendSavePhotoEvent;
-(void)sendSentMessageEvent;
-(void)sendSetNameAndPhotoProfileEvent;
-(void)sendTapbackSendEvent;
-(void)sendVoiceMessageAppOpenedEvent;


@end


#endif