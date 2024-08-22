// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSDOWNLOADSERVICE_H
#define VSDOWNLOADSERVICE_H

@class VSMobileAssetsManager, VSPreferencesInterface, NSLock;

#import <Foundation/Foundation.h>

#import "VSSiriServerConfiguration.h"

@interface VSDownloadService : NSObject

@property (retain, nonatomic) VSMobileAssetsManager *assetsManager; // ivar: _assetsManager
@property (retain, nonatomic) VSPreferencesInterface *preferenceInterface; // ivar: _preferenceInterface
@property (retain, nonatomic) VSSiriServerConfiguration *serverConfig; // ivar: _serverConfig
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (retain, nonatomic) NSLock *updateLock; // ivar: _updateLock


+(id)downloadQueue;
+(id)inProgressDownloadVoiceKeys;
+(void)addInProgressDownloadVoiceKey:(id)arg0 ;
+(void)removeInProgressDownloadVoiceKey:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 ;
-(id)initWithType:(NSUInteger)arg0 assetsManager:(id)arg1 ;
-(void)cancelDownloadForAssets:(id)arg0 ;
-(void)updateTrialVoiceResourceWithLanguage:(id)arg0 ;
-(void)updateVoiceIfNeeded:(id)arg0 ;
-(void)updateVoicesAndVoiceResources;


@end


#endif