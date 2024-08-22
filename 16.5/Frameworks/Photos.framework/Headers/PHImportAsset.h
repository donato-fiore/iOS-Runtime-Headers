// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHIMPORTASSET_H
#define PHIMPORTASSET_H

@class NSDictionary, NSString, NSNumber, UTType, NSDate, NSSet, NSMutableDictionary, NSData, AVAssetImageGenerator, PFMetadata, NSMutableArray, NSArray, NSTimeZone, NSURL;
@protocol PHImportDuplicateCheckerItem, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PHImportSource.h"
#import "PHImportAsset.h"
#import "PHImportAssetFilePresenter.h"

@interface PHImportAsset : NSObject <PHImportDuplicateCheckerItem>

 {
    PHImportSource *_strongSource;
    os_unfair_lock_s _metadataLock;
    NSDictionary *_userMetadata;
    NSDictionary *_userInfo;
    NSString *_basenameForOriginalAdjustment;
}


@property (readonly, nonatomic) NSString *accessibilityDescription;
@property (readonly, nonatomic) NSUInteger approximateBytesRequiredToImport;
@property (readonly, nonatomic) NSString *assetDescription;
@property (readonly, nonatomic) NSUInteger assetSizeIncludingRelatedAssets;
@property (retain, nonatomic) PHImportAsset *audioAsset; // ivar: _audioAsset
@property (readonly) id *avchdAssetId; // ivar: _avchdAssetId
@property (retain, nonatomic) PHImportAsset *base; // ivar: _base
@property (readonly, nonatomic) NSNumber *bitrate;
@property (retain, nonatomic) PHImportAsset *burstPick; // ivar: _burstPick
@property (readonly, nonatomic) NSString *burstUUID;
@property (readonly, nonatomic) NSString *cameraMake;
@property (readonly, nonatomic) NSString *cameraModel;
@property (readonly, nonatomic) BOOL canDelete;
@property (readonly, nonatomic) BOOL canReference; // ivar: _canReference
@property (readonly, nonatomic) NSString *codec;
@property (retain, nonatomic) UTType *contentType; // ivar: _contentType
@property (nonatomic) NSUInteger copyMethod; // ivar: _copyMethod
@property (retain, nonatomic) NSString *createdFileName; // ivar: _createdFileName
@property (readonly, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDictionary *customAssetProperties; // ivar: _customAssetProperties
@property (readonly) NSDate *dateKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSNumber *digitalZoomRatio;
@property (readonly, nonatomic) NSSet *duplicateAssets; // ivar: _duplicateAssets
@property unsigned char duplicateStateConfidence; // ivar: _duplicateStateConfidence
@property (retain) NSMutableDictionary *duplicates; // ivar: _duplicates
@property (readonly, nonatomic) NSNumber *durationTimeInterval;
@property (readonly, nonatomic) CGSize exifPixelSize;
@property (readonly, nonatomic) NSNumber *exposureBias;
@property (readonly, nonatomic) NSNumber *exposureTime;
@property (readonly, nonatomic) NSNumber *fNumber;
@property (retain, nonatomic) NSDate *fileCreationDate; // ivar: _fileCreationDate
@property (retain, nonatomic) NSData *fileData; // ivar: _fileData
@property (retain, nonatomic) NSString *fileExtension; // ivar: _fileExtension
@property (nonatomic) unsigned char fileLocation; // ivar: _fileLocation
@property (retain, nonatomic) NSDate *fileModificationDate; // ivar: _fileModificationDate
@property (retain, nonatomic) NSString *fileName; // ivar: _fileName
@property (retain, nonatomic) PHImportAssetFilePresenter *filePresenter; // ivar: _filePresenter
@property (nonatomic) NSUInteger fileSize; // ivar: _fileSize
@property (readonly) id *fingerprint;
@property (readonly, nonatomic) NSNumber *flashFired;
@property (readonly, nonatomic) NSNumber *focalLength;
@property (readonly, nonatomic) NSNumber *focalLengthIn35mm;
@property (readonly, nonatomic) NSString *formattedCameraModel;
@property (readonly, nonatomic) NSNumber *fps;
@property (readonly, nonatomic) BOOL hasAudioAttachment;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AVAssetImageGenerator *imageGenerator; // ivar: _imageGenerator
@property (nonatomic) CGSize imageSize; // ivar: _imageSize
@property (retain, nonatomic) NSString *importIdentifier; // ivar: _importIdentifier
@property (readonly, nonatomic) BOOL isAVCHD;
@property (readonly, nonatomic) BOOL isAudio;
@property (readonly, nonatomic) BOOL isBurst;
@property BOOL isDuplicate; // ivar: _isDuplicate
@property (readonly, nonatomic) BOOL isGIF;
@property (readonly, nonatomic) BOOL isGrouped;
@property (readonly, nonatomic) BOOL isHDR;
@property (readonly, nonatomic) BOOL isHEIF;
@property (readonly, nonatomic) BOOL isImage;
@property (readonly, nonatomic) BOOL isJPEG;
@property (readonly, nonatomic) BOOL isJPEG2000;
@property (readonly, nonatomic) BOOL isJpegPlusRAW;
@property (readonly, nonatomic) BOOL isLivePhoto;
@property (readonly, nonatomic) BOOL isMovie;
@property (readonly, nonatomic) BOOL isPDF;
@property (readonly, nonatomic) BOOL isPNG;
@property (readonly, nonatomic) BOOL isPSD;
@property (readonly, nonatomic) BOOL isRAW;
@property (readonly, nonatomic) BOOL isSDOF;
@property (readonly, nonatomic) BOOL isSidecar;
@property (readonly, nonatomic) BOOL isSloMo;
@property (readonly, nonatomic) BOOL isTIFF;
@property (readonly, nonatomic) BOOL isTagged;
@property (readonly, nonatomic) BOOL isTimelapse;
@property (readonly, nonatomic) BOOL isViewable;
@property (readonly, nonatomic) NSNumber *iso;
@property (readonly, nonatomic) NSSet *keywordTitles;
@property (retain, nonatomic) PHImportAsset *largeMovieRender; // ivar: _largeMovieRender
@property (retain, nonatomic) PHImportAsset *largeRender; // ivar: _largeRender
@property (retain) NSDate *lastDuplicateCheck; // ivar: _lastDuplicateCheck
@property (readonly, nonatomic) NSString *lensModel;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *loadSidecars; // ivar: _loadSidecars
@property (retain, nonatomic) PFMetadata *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSNumber *meteringMode;
@property (retain, nonatomic) PHImportAsset *miniRender; // ivar: _miniRender
@property (readonly) id *nameKey;
@property (readonly, nonatomic) unsigned int orientation;
@property (readonly, nonatomic) CGSize orientedPixelSize;
@property (readonly) id *originatingAssetID;
@property (readonly, nonatomic) NSString *parentFolderPath;
@property (retain, nonatomic) PHImportAsset *rawAsset; // ivar: _rawAsset
@property (readonly, nonatomic) NSObject *redactedFileNameDescription;
@property (retain, nonatomic) NSMutableArray *relatedBurstAssets; // ivar: _relatedBurstAssets
@property (readonly, nonatomic) id *representedObject;
@property (nonatomic) NSUInteger resourceSubType; // ivar: _resourceSubType
@property (nonatomic) NSInteger resourceType; // ivar: _resourceType
@property (readonly, nonatomic) NSNumber *sampleRate;
@property (readonly, nonatomic) NSArray *sidecarAssets;
@property (retain, nonatomic) NSMutableDictionary *sidecarAssetsByType; // ivar: _sidecarAssetsByType
@property (nonatomic) BOOL sidecarsLoaded; // ivar: _sidecarsLoaded
@property (readonly) id *sizeKey;
@property (readonly, weak, nonatomic) PHImportSource *source; // ivar: _source
@property (retain, nonatomic) PHImportAsset *spatialOverCapture; // ivar: _spatialOverCapture
@property (readonly) Class superclass;
@property (retain, nonatomic) PHImportAsset *thumbnailRender; // ivar: _thumbnailRender
@property (nonatomic) CGSize thumbnailSize; // ivar: _thumbnailSize
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSNumber *trackFormat;
@property (readonly, nonatomic) CGSize transformedPixelSize;
@property (nonatomic) BOOL treatAsUnsupportedRAW; // ivar: _treatAsUnsupportedRAW
@property (retain, nonatomic) NSURL *url; // ivar: _url
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid
@property (retain, nonatomic) PHImportAsset *videoComplement; // ivar: _videoComplement
@property (readonly, nonatomic) NSNumber *whiteBalance;


+(BOOL)directoryExists:(id)arg0 ;
+(BOOL)fileExists:(id)arg0 ;
+(BOOL)isOriginalAdjustmentData:(id)arg0 ;
+(BOOL)isValidAsSidecar:(id)arg0 ;
+(id)assetFileForURL:(id)arg0 source:(id)arg1 ;
+(id)assetFileForURL:(id)arg0 source:(id)arg1 withUuid:(id)arg2 ;
+(id)loadDatesForAssetSequence:(id)arg0 atEnd:(id)arg1 ;
+(id)loadDatesForAssets:(id)arg0 atEnd:(id)arg1 ;
+(void)determineIfTIFFIsRAW:(id)arg0 url:(id)arg1 ;
+(void)logImageDateFileDateDifferencesForAsset:(id)arg0 ;
-(BOOL)_loadMetadataIfNecessaryForURL:(id)arg0 detail:(unsigned char)arg1 ;
-(BOOL)canPreserveFolderStructure;
-(BOOL)configureWithContentType:(id)arg0 supportedMediaType:(unsigned char)arg1 ;
-(BOOL)hasAdjustments;
-(BOOL)isAppropriateForUI;
-(BOOL)isBase;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToImportAsset:(id)arg0 ;
-(BOOL)isOriginalAdjustmentData;
-(BOOL)isPrimary;
-(BOOL)isRender;
-(BOOL)isRepresentation;
-(BOOL)isSpatialOverCapture;
-(BOOL)isValidForReference;
-(BOOL)isVideoComplementOf:(id)arg0 ;
-(BOOL)performAdditionalLivePhotoChecksOnImageAsset:(id)arg0 ;
-(BOOL)shouldPreserveUUID;
-(NSUInteger)relatedBytes;
-(NSUInteger)sidecarAssetBytes;
-(id)adjustmentSidecar;
-(id)checkForSidecarWithExtension:(id)arg0 ;
-(id)copyFromURL:(id)arg0 toURL:(id)arg1 ;
-(id)descriptionWithPrefix:(id)arg0 ;
-(id)duplicateAssetsForLibrary:(id)arg0 ;
-(id)groupingUUID;
-(id)importRecordForPrimaryAsset;
-(id)initWithSource:(id)arg0 ;
-(id)initWithSource:(id)arg0 url:(id)arg1 type:(id)arg2 supportedMediaType:(unsigned char)arg3 uuid:(id)arg4 ;
-(id)livePhotoPairingIdentifier;
-(id)makeImportIdentifier;
-(id)originalAdjustmentSidecar;
-(id)relatedAssets;
-(id)sidecarInfoDictionaries;
-(id)sidecarInfoDictionary;
-(id)slmSidecar;
-(id)stripMarkerFromName:(id)arg0 markerLocation:(NSUInteger)arg1 ;
-(id)thumbnailForSize:(NSUInteger)arg0 atEnd:(id)arg1 ;
-(id)thumbnailForSize:(NSUInteger)arg0 priority:(unsigned char)arg1 atEnd:(id)arg2 ;
-(id)userInfo;
-(id)userMetadata;
-(id)validateMetadataForImportRecord:(id)arg0 ;
-(id)xmpSidecar;
-(struct CGImage *)avThumbnailOfSize:(NSUInteger)arg0 canceler:(id)arg1 error:(*id)arg2 ;
-(struct CGImage *)imageThumbnailOfSize:(NSUInteger)arg0 canceler:(id)arg1 error:(*id)arg2 ;
-(struct CGImage *)removeBlackBarsFromExifThumbnail:(struct CGImage *)arg0 fullSize:(struct CGSize )arg1 ;
-(struct CGSize )cgImageSize;
-(struct CGSize )cropEXIFThumbSize:(struct CGSize )arg0 originalSize:(struct CGSize )arg1 ;
-(void)_accessMetadata:(id)arg0 ;
-(void)_addRelatedRecordsToRecord:(id)arg0 primaryRecord:(id)arg1 ;
-(void)_loadSidecarFiles;
-(void)addBurstAsset:(id)arg0 ;
-(void)addSidecarAsset:(id)arg0 ;
-(void)configureSidecarTypeForExtension:(id)arg0 ;
-(void)copyToURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadMetadataAsync:(id)arg0 ;
-(void)loadMetadataSync;
-(void)loadSidecarFiles;
-(void)removeSidecarAsset:(id)arg0 ;
-(void)setUserInfo:(id)arg0 ;
-(void)setUserMetadata:(id)arg0 ;
-(void)takeAsVideoComplement:(id)arg0 ;
-(void)thumbnailUsingRequest:(id)arg0 atEnd:(id)arg1 ;
-(void)updateIsRAW:(BOOL)arg0 contentType:(id)arg1 ;


@end


#endif