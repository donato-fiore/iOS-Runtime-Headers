// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXSETTINGSVOICEASSETMANAGER_H
#define AXSETTINGSVOICEASSETMANAGER_H

@class NSPointerArray, AVSpeechSynthesizer, NSString;
@protocol AVSpeechSynthesizerDelegate;

#import <Foundation/Foundation.h>


@interface AXSettingsVoiceAssetManager : NSObject <AVSpeechSynthesizerDelegate>

 {
    *__SCNetworkReachability _reachability;
    NSPointerArray *_delegates;
    AVSpeechSynthesizer *_samplePlayer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)allowedToDownloadVoiceAssets;
-(BOOL)isAssetManagedBySiriForVoiceId:(id)arg0 ;
-(id)_currentDelegates;
-(id)init;
-(id)mobileAssetDownloadQueue;
-(id)mobileAssetWorkQueue;
-(void)_updateAllowedToDownload;
-(void)addDelegate:(id)arg0 ;
-(void)dealloc;
-(void)playSample:(id)arg0 completion:(id)arg1 ;
-(void)removeDelegate:(id)arg0 ;
-(void)speechSynthesizer:(id)arg0 didFinishSpeechUtterance:(id)arg1 ;


@end


#endif