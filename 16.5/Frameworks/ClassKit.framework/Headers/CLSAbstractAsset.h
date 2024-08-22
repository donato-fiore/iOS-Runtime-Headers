// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSABSTRACTASSET_H
#define CLSABSTRACTASSET_H

@class NSURL, NSMutableArray, UTType, NSString, NSError, NSDate;
@protocol CLSAssetDownloadProgressNotifiable, CLSAssetDownloadObservable, NSCopying;


#import "CLSObject.h"

@interface CLSAbstractAsset : CLSObject <CLSAssetDownloadProgressNotifiable, CLSAssetDownloadObservable, NSCopying>

 {
    NSURL *_URL;
    NSURL *_thumbnailURL;
    BOOL _URLIsSecurityScoped;
    BOOL _downloaded;
    NSMutableArray *_downloadObservers;
    NSInteger _schoolworkSyncStatus;
    UTType *_fileUTType;
    NSString *_title;
    NSInteger _displayOrder;
    atomic_flag _thumbnailURLRequested;
    atomic_flag _URLRequested;
    atomic_flag _streamingURLRequested;
    NSMutableArray *_pendingURLCompletions;
    NSMutableArray *_pendingStreamingURLCompletions;
    NSMutableArray *_pendingThumbnailURLCompletions;
}


@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *brItemID; // ivar: _brItemID
@property (copy, nonatomic) NSString *brOwnerName; // ivar: _brOwnerName
@property (copy, nonatomic) NSString *brShareName; // ivar: _brShareName
@property (copy, nonatomic) NSString *brZoneName; // ivar: _brZoneName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger displayOrder;
@property (copy, nonatomic) NSError *downloadError; // ivar: _downloadError
@property (nonatomic, getter=isDownloaded) BOOL downloaded;
@property (nonatomic) CGFloat durationInSeconds; // ivar: _durationInSeconds
@property (nonatomic) NSInteger fileSizeInBytes; // ivar: _fileSizeInBytes
@property (copy, nonatomic) UTType *fileUTType;
@property (copy, nonatomic) NSString *filenameExtension; // ivar: _filenameExtension
@property (nonatomic) CGFloat fractionDownloaded; // ivar: _fractionDownloaded
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isOriginal) BOOL original; // ivar: _original
@property (copy, nonatomic) NSString *originalFilename; // ivar: _originalFilename
@property (copy, nonatomic) NSString *ownerPersonID; // ivar: _ownerPersonID
@property (readonly, nonatomic) Class parentEntityClass;
@property (nonatomic) NSInteger parentEntityType; // ivar: _parentEntityType
@property (copy, nonatomic) NSString *relativePathWithinContainer; // ivar: _relativePathWithinContainer
@property (nonatomic) NSInteger schoolworkSyncStatus;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSURL *thumbnailURL;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) NSInteger type; // ivar: _type
@property (copy, nonatomic) NSString *ubiquitousContainerName; // ivar: _ubiquitousContainerName
@property (retain, nonatomic) NSDate *urlExpirationDate; // ivar: _urlExpirationDate


+(BOOL)supportsSecureCoding;
-(BOOL)devModeOn;
-(BOOL)hasNotBeenRereferencedByServer;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValidFileURL:(id)arg0 isThumbnail:(BOOL)arg1 ;
-(BOOL)isValidStreamingURL:(id)arg0 ;
-(BOOL)validateObject:(*id)arg0 ;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)downloadObservers;
-(id)filenameForCKContentStoreCache;
-(id)initWithCoder:(id)arg0 ;
-(id)thumbnailFilenameForCKContentStoreCache;
-(void)addDownloadObserver:(id)arg0 ;
-(void)addToPendingStreamingURLCompletions:(id)arg0 ;
-(void)addToPendingThumbnailURLCompletions:(id)arg0 ;
-(void)addToPendingURLCompletions:(id)arg0 ;
-(void)becomeChildOf:(id)arg0 ;
-(void)clientRemote_downloadCompleted:(BOOL)arg0 error:(id)arg1 ;
-(void)clientRemote_downloadProgressFraction:(CGFloat)arg0 error:(id)arg1 ;
-(void)clientRemote_invalidate;
-(void)cloudKitAssetUrlSuitableForOpeningWithCompletion:(id)arg0 ;
-(void)cloudKitThumbnailUrlSuitableForOpeningWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)driveAssetUrlSuitableForOpeningWithCompletion:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWithObject:(id)arg0 ;
-(void)queued_notifyDownloadCompletion;
-(void)queued_notifyDownloadProgressFraction:(CGFloat)arg0 ;
-(void)removeDownloadObserver:(id)arg0 ;
-(void)thumbnailURLSuitableForOpeningWithCompletion:(id)arg0 ;
-(void)urlSuitableForOpeningWithCompletion:(id)arg0 ;
-(void)urlSuitableForStreamingWithCompletion:(id)arg0 ;
-(void)willSaveObject;


@end


#endif