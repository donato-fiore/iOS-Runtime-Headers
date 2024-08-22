// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSTRIALSERVICE_H
#define VSTRIALSERVICE_H

@class NSArray, NSLock, TRIClient;
@protocol OS_dispatch_queue, TRINotificationToken;

#import <Foundation/Foundation.h>


@interface VSTrialService : NSObject

@property (retain, nonatomic) NSArray *cachedResources; // ivar: _cachedResources
@property (retain, nonatomic) NSArray *cachedVoices; // ivar: _cachedVoices
@property (retain, nonatomic) NSLock *clientRefreshLock; // ivar: _clientRefreshLock
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *downloadQueue; // ivar: _downloadQueue
@property (retain, nonatomic) TRIClient *triClient; // ivar: _triClient
@property (retain, nonatomic) NSObject<TRINotificationToken> *trialNotificationToken; // ivar: _trialNotificationToken


+(id)defaultDownloadOptions;
+(id)sharedService;
+(id)versionFactorNameWithFactorName:(id)arg0 ;
-(id)_directoryOfFactorName:(id)arg0 ;
-(id)_fileOfFactorName:(id)arg0 ;
-(id)definedVoiceResourcesWithLanguage:(id)arg0 ;
-(id)definedVoicesWithLanguage:(id)arg0 name:(id)arg1 type:(NSInteger)arg2 footprint:(NSInteger)arg3 ;
-(id)init;
-(id)selectVoiceResourceWithLanguage:(id)arg0 ;
-(id)selectVoiceWithLanguage:(id)arg0 name:(id)arg1 type:(NSInteger)arg2 footprint:(NSInteger)arg3 ;
// -(void)_downloadFactorName:(id)arg0 withOptions:(id)arg1 progress:(id)arg2 completion:(unk)arg3  ;
-(void)_removeAssetWithFactorName:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)downloadNamespaceImmediatelyIfNeededWithOption:(id)arg0 completion:(id)arg1 ;
// -(void)downloadVoice:(id)arg0 withOptions:(id)arg1 progress:(id)arg2 completion:(unk)arg3  ;
// -(void)downloadVoiceResource:(id)arg0 withOptions:(id)arg1 progress:(id)arg2 completion:(unk)arg3  ;
-(void)refreshTrialClient;
-(void)removeVoice:(id)arg0 completion:(id)arg1 ;
-(void)removeVoiceResource:(id)arg0 completion:(id)arg1 ;


@end


#endif