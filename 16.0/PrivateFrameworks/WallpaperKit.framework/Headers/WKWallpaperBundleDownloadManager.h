// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKWALLPAPERBUNDLEDOWNLOADMANAGER_H
#define WKWALLPAPERBUNDLEDOWNLOADMANAGER_H

@class NSMutableDictionary, NSError, NSNumber, NSString;
@protocol OS_dispatch_queue, WKWallpaperBundleDownloadManagerDelegate;

#import <Foundation/Foundation.h>


@interface WKWallpaperBundleDownloadManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *_activeDownloads; // ivar: __activeDownloads
@property (retain, nonatomic) NSError *_catalogDownloadError; // ivar: __catalogDownloadError
@property (retain, nonatomic) NSNumber *_catalogDownloadResult; // ivar: __catalogDownloadResult
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_loadingQueue; // ivar: __loadingQueue
@property (retain, nonatomic) NSMutableDictionary *_localAssetLookup; // ivar: __localAssetLookup
@property (readonly, copy, nonatomic) NSString *assetDownloadIdentifier; // ivar: _assetDownloadIdentifier
@property (weak, nonatomic) NSObject<WKWallpaperBundleDownloadManagerDelegate> *delegate; // ivar: _delegate


+(id)defaultManager;
-(id)_startCatalogDownload;
-(id)initWithAssetDownloadIdentifier:(id)arg0 ;
-(id)localWallpaperRepresentingWithIdentifier:(id)arg0 wallpaperName:(id)arg1 ;
-(void)cancelDownloadForWallpaperRepresenting:(id)arg0 withCompletion:(id)arg1 ;
-(void)downloadWallpaperRepresentingIfNeeded:(id)arg0 progress:(id)arg1 withCompletion:(id)arg2 ;


@end


#endif