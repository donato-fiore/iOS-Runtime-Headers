// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFASSETBUNDLE_H
#define PFASSETBUNDLE_H

@class NSString, NSURL, NSSet, NSDate, NSTimeZone, NSMutableDictionary, NSDictionary;

#import <Foundation/Foundation.h>


@interface PFAssetBundle : NSObject

@property (copy, nonatomic) NSString *accessibilityDescription;
@property (readonly, nonatomic) NSURL *adjustmentBasePairedVideoURL; // ivar: _adjustmentBasePairedVideoURL
@property (readonly, nonatomic) NSURL *adjustmentBasePhotoURL; // ivar: _adjustmentBasePhotoURL
@property (readonly, nonatomic) NSURL *adjustmentBaseVideoURL; // ivar: _adjustmentBaseVideoURL
@property (readonly, nonatomic) NSURL *adjustmentDataURL; // ivar: _adjustmentDataURL
@property (readonly, nonatomic) NSURL *alternatePhotoURL; // ivar: _alternatePhotoURL
@property (copy, nonatomic) NSString *assetDescription;
@property (copy, nonatomic) NSString *assetTitle;
@property (readonly, nonatomic) NSURL *audioURL; // ivar: _audioURL
@property (readonly, nonatomic) BOOL didReadOriginalPairedVideoMetadata; // ivar: _didReadOriginalPairedVideoMetadata
@property (readonly, nonatomic) NSURL *fullSizePairedVideoURL; // ivar: _fullSizePairedVideoURL
@property (readonly, nonatomic) NSURL *fullSizePhotoURL; // ivar: _fullSizePhotoURL
@property (readonly, nonatomic) NSURL *fullSizeVideoURL; // ivar: _fullSizeVideoURL
@property (copy, nonatomic) NSSet *keywordTitles;
@property (readonly, nonatomic) NSDate *libraryCreationDate;
@property (readonly, nonatomic) NSTimeZone *libraryCreationDateTimeZone;
@property (retain, nonatomic) id *libraryLocation;
@property (readonly, nonatomic) ? livePhotoImageDisplayTime;
@property (nonatomic) ? livePhotoOriginalImageDisplayTime; // ivar: _livePhotoOriginalImageDisplayTime
@property (copy, nonatomic) NSString *livePhotoOriginalPairingIdentifier; // ivar: _livePhotoOriginalPairingIdentifier
@property (nonatomic) ? livePhotoOriginalVideoDuration; // ivar: _livePhotoOriginalVideoDuration
@property (readonly, copy, nonatomic) NSString *livePhotoPairingIdentifier;
@property (readonly, nonatomic) NSUInteger mediaSubtypes;
@property (readonly, nonatomic) NSInteger mediaType;
@property (readonly, copy, nonatomic) NSMutableDictionary *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSURL *originalAdjustmentDataURL; // ivar: _originalAdjustmentDataURL
@property (copy, nonatomic) NSString *originalFilename;
@property (readonly, nonatomic) NSURL *pairedVideoURL; // ivar: _pairedVideoURL
@property (readonly, nonatomic) NSURL *photoURL; // ivar: _photoURL
@property (readonly, nonatomic) NSInteger playbackStyle;
@property (readonly, nonatomic) NSUInteger playbackVariation;
@property (copy, nonatomic) NSDictionary *propertyList; // ivar: _propertyList
@property (readonly, nonatomic) NSUInteger reframeVariation;
@property (readonly, nonatomic) NSURL *spatialOvercapturePairedVideoURL; // ivar: _spatialOvercapturePairedVideoURL
@property (readonly, nonatomic) NSURL *spatialOvercapturePhotoURL; // ivar: _spatialOvercapturePhotoURL
@property (nonatomic) BOOL spatialOvercaptureResourcesPurgeable;
@property (readonly, nonatomic) NSURL *spatialOvercaptureVideoURL; // ivar: _spatialOvercaptureVideoURL
@property (readonly, nonatomic) unsigned short videoComplementVisibilityState;
@property (readonly, nonatomic) NSURL *videoURL; // ivar: _videoURL


+(BOOL)fileName:(id)arg0 matchesRegex:(id)arg1 ;
+(BOOL)isValidDCFFileName:(id)arg0 ;
+(id)contentType;
+(id)currentFormatVersion;
+(id)insertAuxiliaryResourceTypeMarker:(id)arg0 intoFileName:(id)arg1 ;
-(BOOL)_pathExtension:(id)arg0 matchesType:(id)arg1 error:(*id)arg2 ;
-(BOOL)_verifyFileSourceExistsAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)_writeFileAtURL:(id)arg0 toDirectory:(id)arg1 withUpdatedFilename:(id)arg2 updateManifest:(id)arg3 bundlePathKey:(id)arg4 verifyUTIType:(struct __CFString *)arg5 error:(*id)arg6 ;
-(BOOL)_writeFileAtURL:(id)arg0 toDirectory:(id)arg1 withUpdatedFilename:(id)arg2 writtenFileURL:(*id)arg3 error:(*id)arg4 ;
-(BOOL)_writeFileAtURL:(id)arg0 toDirectory:(id)arg1 writtenFileURL:(*id)arg2 error:(*id)arg3 ;
-(BOOL)isMediaSubtype:(NSUInteger)arg0 ;
-(BOOL)linkOrCopyURL:(id)arg0 toURL:(id)arg1 forceCopy:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)writeAllResourceURLsToDirectoryAtURL:(id)arg0 updatingManifest:(id)arg1 error:(*id)arg2 ;
-(BOOL)writeToBundleAtURL:(id)arg0 error:(*id)arg1 ;
-(id)createAssetBundleWritingErrorWithDescription:(id)arg0 ;
-(id)dcfCompliantFilenameBaseForWritingResourceFiles;
-(id)generateCustomFilenamesByPathKey;
-(id)init;
-(id)initWithAssetBundleAtURL:(id)arg0 ;
-(id)initWithOriginalPhotoURL:(id)arg0 alternatePhotoURL:(id)arg1 fullSizePhotoURL:(id)arg2 adjustmentBaseFullSizePhotoURL:(id)arg3 spatialOvercapturePhotoURL:(id)arg4 originalPairedVideoURL:(id)arg5 fullSizePairedVideoURL:(id)arg6 adjustmentBaseFullSizePairedVideoURL:(id)arg7 spatialOvercapturePairedVideoURL:(id)arg8 fullSizeVideoURL:(id)arg9 adjustmentsURL:(id)arg10 originalAdjustmentsURL:(id)arg11 mediaSubtypes:(NSUInteger)arg12 playbackStyle:(NSInteger)arg13 playbackVariation:(NSUInteger)arg14 videoComplementVisibilityState:(unsigned short)arg15 reframeVariation:(NSUInteger)arg16 ;
-(id)initWithOriginalVideoURL:(id)arg0 fullSizeRenderedVideoURL:(id)arg1 adjustmentBaseVideoURL:(id)arg2 spatialOvercaptureVideoURL:(id)arg3 adjustmentsURL:(id)arg4 originalAdjustmentsURL:(id)arg5 mediaSubtypes:(NSUInteger)arg6 playbackStyle:(NSInteger)arg7 playbackVariation:(NSUInteger)arg8 reframeVariation:(NSUInteger)arg9 ;
-(id)initWithPropertyList:(id)arg0 ;
-(id)urlsByPathKey;
-(id)writeDowngradedRepresentationToDirectory:(id)arg0 error:(*id)arg1 ;
-(id)writeFolderRepresentationToDirectory:(id)arg0 error:(*id)arg1 ;
-(void)_readLivePhotoVideoMetadataIfNeeded;


@end


#endif