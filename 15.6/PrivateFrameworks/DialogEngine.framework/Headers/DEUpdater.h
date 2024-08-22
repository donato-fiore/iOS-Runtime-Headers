// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DEUPDATER_H
#define DEUPDATER_H

@class NSURL, NSString, NSDate;

#import <Foundation/Foundation.h>

#import "DEManifest.h"
#import "DEWorkQueues.h"
#import "DEUpdaterState.h"

@interface DEUpdater : NSObject

@property (retain, nonatomic) NSURL *builtinDir; // ivar: _builtinDir
@property (retain, nonatomic) DEManifest *builtinManifest; // ivar: _builtinManifest
@property (nonatomic) BOOL disableManifestSync; // ivar: _disableManifestSync
@property (retain, nonatomic) NSString *distribution; // ivar: _distribution
@property (retain, nonatomic) NSURL *downloadURLPrefix; // ivar: _downloadURLPrefix
@property (nonatomic) BOOL foregroundManifestSync; // ivar: _foregroundManifestSync
@property (retain, nonatomic) DEManifest *latestManifest; // ivar: _latestManifest
@property (nonatomic) BOOL logToCoreAnalytics; // ivar: _logToCoreAnalytics
@property BOOL manifestSyncing; // ivar: _manifestSyncing
@property (retain, nonatomic) NSURL *overlayBase; // ivar: _overlayBase
@property (nonatomic) CGFloat publicationErrorTTL; // ivar: _publicationErrorTTL
@property (retain, nonatomic) NSDate *publicationErrorTime; // ivar: _publicationErrorTime
@property (retain, nonatomic) NSURL *publicationURL; // ivar: _publicationURL
@property (retain, nonatomic) DEWorkQueues *queues; // ivar: _queues
@property (retain, nonatomic) DEUpdaterState *state; // ivar: _state
@property (retain, nonatomic) NSURL *storageBase; // ivar: _storageBase
@property (retain, nonatomic) DEWorkQueues *syncQueues; // ivar: _syncQueues
@property (retain, nonatomic) NSURL *tmpBase; // ivar: _tmpBase
@property (retain, nonatomic) NSURL *updateDir; // ivar: _updateDir


+(BOOL)copyFrom:(id)arg0 to:(id)arg1 ;
+(BOOL)hasDefaultURLs:(id)arg0 publicationURL:(id)arg1 downloadURLPrefix:(id)arg2 ;
+(BOOL)manifestExists:(id)arg0 ;
+(BOOL)package:(id)arg0 src:(id)arg1 contents:(id)arg2 summary:(id)arg3 dest:(id)arg4 manifestDest:(id)arg5 overrides:(id)arg6 dirDownloadType:(NSUInteger)arg7 keyId:(NSUInteger)arg8 privateKey:(id)arg9 updating:(id)arg10 publicationURL:(id)arg11 downloadURLPrefix:(id)arg12 ;
+(BOOL)package:(id)arg0 src:(id)arg1 contents:(id)arg2 summary:(id)arg3 dest:(id)arg4 manifestDest:(id)arg5 overrides:(id)arg6 keyId:(NSUInteger)arg7 privateKey:(id)arg8 updating:(id)arg9 ;
+(BOOL)packageDirectory:(id)arg0 src:(id)arg1 contents:(id)arg2 summary:(id)arg3 dest:(id)arg4 manifestDest:(id)arg5 downloadType:(NSUInteger)arg6 keyId:(NSUInteger)arg7 privateKey:(id)arg8 updating:(id)arg9 ;
+(BOOL)prepareDistribution:(id)arg0 disabled:(BOOL)arg1 in:(id)arg2 tag:(id)arg3 keyId:(NSUInteger)arg4 privateKey:(id)arg5 ;
+(BOOL)putDirectoryManifest:(id)arg0 src:(id)arg1 contents:(id)arg2 summary:(id)arg3 downloadType:(NSUInteger)arg4 ;
+(BOOL)putManifest:(id)arg0 src:(id)arg1 contents:(id)arg2 summary:(id)arg3 overrides:(id)arg4 ;
+(BOOL)putManifest:(id)arg0 src:(id)arg1 contents:(id)arg2 summary:(id)arg3 overrides:(id)arg4 dirDownloadType:(NSUInteger)arg5 ;
+(BOOL)updatesExistFor:(id)arg0 updateDir:(id)arg1 ;
+(id)appendPublicationName:(id)arg0 ;
+(id)getDefaultCategory;
+(id)getDispatchQueue;
+(id)getDownloadURLPrefix:(id)arg0 ;
+(id)getManifestName;
+(id)getPublicationPath:(id)arg0 category:(id)arg1 ;
+(id)getPublicationPath:(id)arg0 category:(id)arg1 URLVersion:(NSUInteger)arg2 ;
+(id)getPublicationURL:(id)arg0 ;
+(id)getPublicationURL:(id)arg0 prefixURL:(id)arg1 category:(id)arg2 ;
+(id)getURLParams:(id)arg0 ;
+(id)getURLParams:(id)arg0 URLVersion:(NSUInteger)arg1 ;
+(id)getURLParams:(id)arg0 URLVersion:(NSUInteger)arg1 manifest:(id)arg2 ;
+(id)getUpdateDirFor:(id)arg0 base:(id)arg1 ;
+(id)getUpdatedURLFor:(id)arg0 updateDir:(id)arg1 ;
+(id)getVersionSeed:(NSUInteger)arg0 ;
+(id)loadPublication:(id)arg0 defaultTag:(id)arg1 allowAllKeys:(BOOL)arg2 ;
+(id)summarize:(id)arg0 filter:(id)arg1 ;
+(void)clearURLParamsCache;
+(void)remove:(id)arg0 from:(id)arg1 ;
-(BOOL)applyUpdate;
-(BOOL)checkManifest:(id)arg0 manifestURL:(id)arg1 ;
-(BOOL)directoryDistributionValid;
-(BOOL)individualDistributionValid;
-(BOOL)isDirectoryDistribution;
-(BOOL)linkToOverlay:(id)arg0 from:(id)arg1 replace:(BOOL)arg2 ;
-(BOOL)linkToOverlay:(id)arg0 from:(id)arg1 replace:(BOOL)arg2 shouldSymlink:(BOOL)arg3 ;
-(BOOL)loadState;
-(BOOL)matches:(id)arg0 filter:(id)arg1 ;
-(BOOL)nameKnown:(id)arg0 blockRequired:(*BOOL)arg1 ;
-(BOOL)prepareBuiltinManifest:(BOOL)arg0 filter:(id)arg1 ;
-(BOOL)saveState;
-(BOOL)syncNeeded;
-(BOOL)updateIsReady;
-(id)chooseOverlayBase;
-(id)chooseURLFor:(id)arg0 version:(id)arg1 versionFound:(*BOOL)arg2 ;
-(id)find:(id)arg0 downloadType:(NSUInteger)arg1 status:(*id)arg2 ;
-(id)find:(id)arg0 status:(*id)arg1 ;
-(id)findDirectory:(BOOL)arg0 downloadType:(NSUInteger)arg1 status:(*id)arg2 ;
-(id)findDirectory:(BOOL)arg0 status:(*id)arg1 ;
-(id)findDirectoryLocally:(BOOL)arg0 status:(*id)arg1 ;
-(id)findLocally:(id)arg0 status:(*id)arg1 ;
-(id)getDownloadURLFor:(id)arg0 encryptedVersion:(id)arg1 ;
-(id)getLatestManifestAsset:(id)arg0 ;
-(id)getLatestManifestVersion;
-(id)getOutOfDateVersion:(id)arg0 ;
-(id)getStorageURLFor:(id)arg0 version:(id)arg1 ;
-(id)getVersionFor:(id)arg0 ;
-(id)getVersionFor:(id)arg0 encryptedVersion:(*id)arg1 ;
-(id)init;
-(id)initPlaceholder;
-(id)initWithBuiltinDir:(id)arg0 ;
-(id)initWithBuiltinDir:(id)arg0 filter:(id)arg1 ;
-(id)initWithBuiltinDir:(id)arg0 updateDir:(id)arg1 ;
-(id)initWithPublicationURL:(id)arg0 downloadURLPrefix:(id)arg1 builtinDir:(id)arg2 ;
-(id)initWithPublicationURL:(id)arg0 downloadURLPrefix:(id)arg1 builtinDir:(id)arg2 updateDir:(id)arg3 filter:(id)arg4 ;
-(id)prepared:(id)arg0 version:(id)arg1 ;
-(id)store:(id)arg0 version:(id)arg1 encryptedVersion:(id)arg2 from:(id)arg3 src:(id)arg4 ;
-(void)checkOverlay:(id)arg0 version:(id)arg1 ;
-(void)find:(id)arg0 block:(id)arg1 ;
-(void)find:(id)arg0 downloadType:(NSUInteger)arg1 block:(id)arg2 ;
-(void)findDirectory:(BOOL)arg0 block:(id)arg1 ;
-(void)findDirectory:(BOOL)arg0 downloadType:(NSUInteger)arg1 block:(id)arg2 ;
-(void)findDirectoryLocally:(BOOL)arg0 block:(id)arg1 ;
-(void)findLocally:(id)arg0 block:(id)arg1 ;
-(void)prepare:(id)arg0 version:(id)arg1 encryptedVersion:(id)arg2 linkIfLatest:(BOOL)arg3 publication:(id)arg4 block:(id)arg5 ;
-(void)prepareLatestManifest;
-(void)removeFromOverlay:(id)arg0 ;
-(void)removeFromStorage:(id)arg0 ;
-(void)runSyncBlock:(id)arg0 ;
-(void)setUpdatesExist;
-(void)sync:(id)arg0 block:(id)arg1 ;
-(void)unorderedPrepare:(id)arg0 version:(id)arg1 encryptedVersion:(id)arg2 linkIfLatest:(BOOL)arg3 publication:(id)arg4 block:(id)arg5 ;
-(void)unorderedSync:(id)arg0 block:(id)arg1 ;
// -(void)unorderedUpdate:(id)arg0 block:(id)arg1 syncBlock:(unk)arg2 syncInForeground:(id)arg3  ;
-(void)update:(id)arg0 block:(id)arg1 ;


@end


#endif