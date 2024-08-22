// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CACLANGUAGEASSETMANAGER_H
#define CACLANGUAGEASSETMANAGER_H

@class NSDictionary, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CACLanguageAssetManager : NSObject

@property (retain, nonatomic) NSDictionary *cachedInstallationStatus; // ivar: _cachedInstallationStatus
@property (retain, nonatomic) NSMutableDictionary *downloadErrorDictionary; // ivar: _downloadErrorDictionary
@property (retain, nonatomic) NSDictionary *downloadProgress; // ivar: _downloadProgress
@property (retain, nonatomic) NSMutableDictionary *downloadProgressDictionary; // ivar: _downloadProgressDictionary
@property (nonatomic) BOOL isInstallationStatusStale; // ivar: _isInstallationStatusStale
@property (nonatomic) BOOL isRegisteredForCallback; // ivar: _isRegisteredForCallback
@property (retain, nonatomic) NSMutableDictionary *lastReportedProgressDictionary; // ivar: _lastReportedProgressDictionary


+(id)downloadedLocaleIdentifiers;
+(id)downloadingLocaleIdentifiers;
+(id)sharedManager;
+(void)initialize;
-(NSUInteger)errorStatusForLanguage:(id)arg0 ;
-(id)downloadProgressForLanguage:(id)arg0 ;
-(id)init;
-(id)installationStatus;
-(id)purgeInstalledAsset;
-(id)supportedLocaleIdentifiers;
-(void)_downloadProgressCallback:(struct __CFDictionary *)arg0 ;
-(void)_handleErrorInDownloadForLanguage:(id)arg0 ;
-(void)_sendProgressNotificationIfNeededForLanguage:(id)arg0 ;
-(void)_updateInstallationStatusFromDownloadStatus:(struct __CFDictionary *)arg0 ;
-(void)cancelDownloadOfLanguage:(id)arg0 ;
-(void)markInstallationStatusStale;
-(void)registerForCallback;
-(void)startDownloadOfLanguage:(id)arg0 ;


@end


#endif