// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSVOICEPROFILERETRAINMANAGER_H
#define CSVOICEPROFILERETRAINMANAGER_H

@class NSString;
@protocol CSVoiceTriggerEnabledMonitorDelegate, CSSpeakerRecognitionAssetDownloadMonitorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSVoiceProfileRetrainManager : NSObject <CSVoiceTriggerEnabledMonitorDelegate, CSSpeakerRecognitionAssetDownloadMonitorDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(void)CSLanguageCodeUpdateMonitor:(id)arg0 didReceiveLanguageCodeChanged:(id)arg1 ;
-(void)CSSpeakerRecognitionAssetDownloadMonitor:(id)arg0 didInstallNewAsset:(BOOL)arg1 assetProviderType:(NSUInteger)arg2 ;
-(void)CSVoiceTriggerEnabledMonitor:(id)arg0 didReceiveEnabled:(BOOL)arg1 ;
-(void)_retrainingVoiceProfile:(id)arg0 voiceProfile:(id)arg1 asset:(id)arg2 ;
-(void)_runVoiceProfileRetrainerWithAsset:(id)arg0 withLanguageCode:(id)arg1 ;
-(void)_speakerRecognitionCleanupDuplicatedProfilesCallback;
-(void)_speakerRecognitionModelRetrainCallback;
-(void)triggerVoiceProfileRetrainingWithAsset:(id)arg0 ;


@end


#endif