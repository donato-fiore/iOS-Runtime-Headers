// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUICDEFAULTVOICEPREVIEWER_H
#define SUICDEFAULTVOICEPREVIEWER_H

@class AFAudioPowerUpdater, NSMutableSet, NSString;
@protocol AFAudioPowerUpdaterDelegate, SUICVoicePreviewing, SUICVoicePreviewingDelegate;

#import <Foundation/Foundation.h>


@interface SUICDefaultVoicePreviewer : NSObject <AFAudioPowerUpdaterDelegate, SUICVoicePreviewing>

 {
    AFAudioPowerUpdater *_outputAudioPowerUpdater;
    NSMutableSet *previewSessions;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<SUICVoicePreviewingDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_beginAudioPowerUpdatesIfNecessary;
-(void)_endAudioPowerUpdates;
-(void)audioPowerUpdaterDidUpdate:(id)arg0 averagePower:(float)arg1 peakPower:(float)arg2 ;
-(void)dealloc;
-(void)previewVoice:(id)arg0 completion:(id)arg1 ;
-(void)stopVoicePreview;


@end


#endif