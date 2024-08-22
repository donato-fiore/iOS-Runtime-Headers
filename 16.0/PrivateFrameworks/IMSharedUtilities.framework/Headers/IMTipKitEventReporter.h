// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMTIPKITEVENTREPORTER_H
#define IMTIPKITEVENTREPORTER_H


#import <Foundation/Foundation.h>


@interface IMTipKitEventReporter : NSObject



+(id)sharedInstance;
-(void)sendEvent:(id)arg0 ;
-(void)sendReceivedPhotoEvent;
-(void)sendSavePhotoEvent;
-(void)sendSentMessageEvent;
-(void)sendSetNameAndPhotoProfileEvent;
-(void)sendTapbackSendEvent;
-(void)trackTapbackSendEvent;


@end


#endif