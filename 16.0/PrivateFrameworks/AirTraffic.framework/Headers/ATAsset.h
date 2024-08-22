// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATASSET_H
#define ATASSET_H

@class NSString, NSDictionary, NSNumber, NSError, NSURL, NMSDownloadableItem, NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "ATStoreInfo.h"

@interface ATAsset : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL allowDownloadOnConstrainedNetwork; // ivar: _allowDownloadOnConstrainedNetwork
@property (nonatomic) NSInteger assetState; // ivar: _assetState
@property (retain, nonatomic) NSString *assetType; // ivar: _assetType
@property (nonatomic) BOOL bypassStore; // ivar: _bypassStore
@property (nonatomic) NSUInteger bytesRemaining; // ivar: _bytesRemaining
@property (nonatomic) BOOL canProxyUseCellularData; // ivar: _canProxyUseCellularData
@property (nonatomic) BOOL canUseCellularData; // ivar: _canUseCellularData
@property (retain, nonatomic) NSDictionary *clientParams; // ivar: _clientParams
@property (nonatomic) NSUInteger completedAssetParts; // ivar: _completedAssetParts
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (retain, nonatomic) NSString *dataclass; // ivar: _dataclass
@property (nonatomic) BOOL deviceWasChargingWhenEnqueued; // ivar: _deviceWasChargingWhenEnqueued
@property (nonatomic) BOOL downloadOnly; // ivar: _downloadOnly
@property (nonatomic) NSUInteger downloadPauseReason; // ivar: _downloadPauseReason
@property (nonatomic) float downloadProgress; // ivar: _downloadProgress
@property (retain, nonatomic) NSNumber *downloadSourceContainerId; // ivar: _downloadSourceContainerId
@property (nonatomic) NSInteger enqueueSource; // ivar: _enqueueSource
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSURL *icon; // ivar: _icon
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *infoPlist; // ivar: _infoPlist
@property (nonatomic) BOOL installOnly; // ivar: _installOnly
@property (nonatomic) float installProgress; // ivar: _installProgress
@property (nonatomic) BOOL installStarted; // ivar: _installStarted
@property (nonatomic, getter=isInstalled) BOOL installed; // ivar: _installed
@property (nonatomic) BOOL isDownload; // ivar: _isDownload
@property (nonatomic) BOOL isForeground; // ivar: _isForeground
@property (nonatomic) BOOL isPrioritized; // ivar: _isPrioritized
@property (nonatomic) BOOL isRestore; // ivar: _isRestore
@property (nonatomic) BOOL isRetry; // ivar: _isRetry
@property (nonatomic, getter=isLegacy) BOOL legacy; // ivar: _legacy
@property (nonatomic) BOOL lyricsEmbeddedInAsset; // ivar: _lyricsEmbeddedInAsset
@property (retain, nonatomic) NMSDownloadableItem *mediaItemDownloadInfo; // ivar: _mediaItemDownloadInfo
@property (retain, nonatomic) NSString *path; // ivar: _localPath
@property (nonatomic) BOOL powerRequired; // ivar: _powerRequired
@property (retain, nonatomic) NSString *prettyName; // ivar: _prettyName
@property (nonatomic) unsigned int priority; // ivar: _priority
@property (copy, nonatomic) id *progressBlock; // ivar: _progressBlock
@property (nonatomic) int protectionType; // ivar: _protectionType
@property (nonatomic) CGFloat queueDuration; // ivar: _queueDuration
@property (nonatomic) CGFloat queueStartTime; // ivar: _queueStartTime
@property (nonatomic) BOOL readyForStore; // ivar: _readyForStore
@property (retain, nonatomic) NSData *resumeData; // ivar: _resumeData
@property (retain, nonatomic) ATStoreInfo *storeInfo; // ivar: _storeInfo
@property (nonatomic) NSInteger storePID; // ivar: _storePID
@property (retain, nonatomic) NSString *storePlist; // ivar: _storePlist
@property (nonatomic) NSUInteger totalBytes; // ivar: _totalBytes
@property (nonatomic) CGFloat transferDuration; // ivar: _transferDuration
@property (nonatomic) CGFloat transferStartTime; // ivar: _transferStartTime
@property (retain, nonatomic) NSDictionary *variantOptions; // ivar: _variantOptions


+(BOOL)supportsSecureCoding;
+(id)assetWithSerializedAsset:(id)arg0 ;
+(id)downloadAssetWithIdentifier:(id)arg0 dataclass:(id)arg1 prettyName:(id)arg2 ;
+(id)iCloudRestoreAssetWithIdentifier:(id)arg0 dataclass:(id)arg1 assetType:(id)arg2 restorePath:(id)arg3 displayName:(id)arg4 ;
+(id)uploadAssetWithIdentifier:(id)arg0 dataclass:(id)arg1 sourcePath:(id)arg2 prettyName:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)assetParts;
-(NSUInteger)hash;
-(id)_ATAssetTypeFromDataClass:(id)arg0 ;
-(id)_variantDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 dataclass:(id)arg1 prettyName:(id)arg2 ;
-(id)serializedAsset;
-(id)shortDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif