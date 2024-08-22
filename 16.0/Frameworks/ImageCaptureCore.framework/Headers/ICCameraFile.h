// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICCAMERAFILE_H
#define ICCAMERAFILE_H

@class NSMutableDictionary, NSString, NSNumber, NSDate, NSDictionary, NSProgress, NSMutableArray, NSData;


#import "ICCameraItem.h"
#import "ICCameraFile.h"

@interface ICCameraFile : ICCameraItem {
    *CGImage _originalThumbnail;
    *CGImage _thumbnail;
    NSMutableDictionary *_metadata;
    NSString *_debugType;
    NSString *_debugBadge;
    NSNumber *_fileIsJPEG;
    NSNumber *_fileIsHEIC;
}


@property (nonatomic) BOOL burstFavorite; // ivar: _burstFavorite
@property (nonatomic) BOOL burstPicked; // ivar: _burstPicked
@property (copy, nonatomic) NSString *burstUUID; // ivar: _burstUUID
@property (copy, nonatomic) NSString *createdFilename; // ivar: _createdFilename
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (copy, nonatomic) NSDate *exifCreationDate; // ivar: _exifCreationDate
@property (copy, nonatomic) NSDate *exifModificationDate; // ivar: _exifModificationDate
@property (copy, nonatomic) NSDate *fileCreationDate; // ivar: _fileCreationDate
@property (copy, nonatomic) NSDate *fileModificationDate; // ivar: _fileModificationDate
@property (nonatomic) NSInteger fileSize; // ivar: _fileSize
@property (readonly, nonatomic) NSString *fingerprint;
@property (nonatomic) BOOL firstPicked; // ivar: _firstPicked
@property (copy, nonatomic) NSString *gpsString; // ivar: _gpsString
@property (copy, nonatomic) NSString *groupUUID; // ivar: _groupUUID
@property (nonatomic) NSInteger height; // ivar: _height
@property (nonatomic) BOOL highFramerate; // ivar: _highFramerate
@property (readonly) NSString *mediaBase;
@property (retain, nonatomic) NSDictionary *mediaData; // ivar: _mediaData
@property (nonatomic) NSUInteger mediaMetadata; // ivar: _mediaMetadata
@property NSUInteger oUUID; // ivar: _oUUID
@property (readonly, nonatomic) unsigned int objectHandle; // ivar: _objectHandle
@property (nonatomic) NSUInteger orientation;
@property (nonatomic) BOOL orientationOverridden; // ivar: _orientationOverridden
@property (copy, nonatomic) NSString *originalFilename; // ivar: _originalFilename
@property *CGImage originalThumbnail;
@property (copy, nonatomic) NSString *originatingAssetID; // ivar: _originatingAssetID
@property (retain, nonatomic) ICCameraFile *pairedRawImage; // ivar: _pairedRawImage
@property (copy, nonatomic) NSString *privFingerprint; // ivar: _privFingerprint
@property (nonatomic) BOOL privHasMetadata; // ivar: _privHasMetadata
@property (nonatomic) BOOL privHasThumbnail; // ivar: _privHasThumbnail
@property (copy, nonatomic) NSString *privMediaBase; // ivar: _privMediaBase
@property (nonatomic) NSUInteger privOrientation; // ivar: _privOrientation
@property (copy, nonatomic) NSString *privSpatialOverCaptureGroupID; // ivar: _privSpatialOverCaptureGroupID
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (copy, nonatomic) NSString *relatedUUID; // ivar: _relatedUUID
@property (readonly, nonatomic) BOOL retrievedMetadata; // ivar: _retrievedMetadata
@property (readonly, nonatomic) BOOL retrievedThumbnail;
@property (retain, nonatomic) NSMutableArray *sidecarFiles; // ivar: _sidecarFiles
@property (readonly, nonatomic) NSString *spatialOverCaptureGroupID;
@property (retain, nonatomic) NSMutableDictionary *subImages; // ivar: _subImages
@property (copy, nonatomic) NSData *thumbnailData; // ivar: _thumbnailData
@property (nonatomic) BOOL timeLapse; // ivar: _timeLapse
@property NSUInteger uTime; // ivar: _uTime
@property (nonatomic) BOOL useExtensionIcon; // ivar: _useExtensionIcon
@property (nonatomic) NSInteger width; // ivar: _width


-(BOOL)convertedFamily;
-(BOOL)hasMetadata;
-(BOOL)hasThumbnail;
-(BOOL)isAudio;
-(BOOL)isConverted;
-(BOOL)isData;
-(BOOL)isDataUniversal;
-(BOOL)isEdited:(NSUInteger)arg0 ;
-(BOOL)isEditedConverted;
-(BOOL)isEditedOriginal;
-(BOOL)isEditedUniversal;
-(BOOL)isHEIC;
-(BOOL)isImage;
-(BOOL)isJPEG;
-(BOOL)isLegacy;
-(BOOL)isMovie;
-(BOOL)isNonRawImage;
-(BOOL)isOriginal;
-(BOOL)isSidecar;
-(BOOL)isUniversal;
-(BOOL)isUntouched:(NSUInteger)arg0 ;
-(BOOL)originalFamily;
-(BOOL)partOfFamily:(NSUInteger)arg0 ;
-(BOOL)setMetadata:(id)arg0 ;
-(BOOL)universalFamily;
-(NSInteger)compareDate:(id)arg0 ;
-(NSInteger)compareUUID:(id)arg0 ;
-(id)base;
-(id)debugBadge;
-(id)debugIdentity;
-(id)debugType;
-(id)description;
-(id)initWithName:(id)arg0 parentFolder:(id)arg1 device:(id)arg2 ;
-(id)metadata;
-(id)requestDownloadWithOptions:(id)arg0 completion:(id)arg1 ;
-(id)thumbnailDataUsingOrientation:(id)arg0 andSourceThumbnailData:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(struct CGImage *)thumbnail;
-(void)addSidecarFile:(id)arg0 ;
-(void)cacheThumbnailData:(id)arg0 ;
-(void)dealloc;
-(void)flagAsSidecar;
-(void)flagMediaMetadata:(NSUInteger)arg0 ;
-(void)flushMetadataCache;
-(void)flushThumbnailCache;
-(void)requestCloseStreamData;
-(void)requestMetadata;
-(void)requestMetadataDictionaryWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)requestMetadataWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)requestOpenStreamData;
-(void)requestReadDataAtOffset:(NSInteger)arg0 length:(NSInteger)arg1 completion:(id)arg2 ;
-(void)requestStreamDataAtOffset:(NSInteger)arg0 length:(NSInteger)arg1 completion:(id)arg2 ;
-(void)requestThumbnail;
-(void)requestThumbnailDataWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)requestThumbnailWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)setHasMetadata:(BOOL)arg0 ;
-(void)setHasThumbnail:(BOOL)arg0 ;
-(void)setKeywordPropertiesFromDict:(id)arg0 ;
-(void)setUTI:(id)arg0 ;


@end


#endif