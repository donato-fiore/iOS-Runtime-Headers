// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PROJECT_H
#define PROJECT_H

@class NSMutableDictionary, NSString, NSMutableArray, NSDictionary, PVEffect, NSArray, NSDate, NSUndoManager;
@protocol PVImageDelegate, PVStabilizationDelegate, NSKeyedUnarchiverDelegate, ProjectDelegate;

#import <Foundation/Foundation.h>

#import "FIFOCache.h"
#import "ProjectAssetManager.h"
#import "TitleDefinition.h"

@interface Project : NSObject <PVImageDelegate, PVStabilizationDelegate, NSKeyedUnarchiverDelegate>

 {
    NSMutableDictionary *m_project;
    BOOL m_dirty;
    int m_isEditingCount;
    int m_duration;
    int m_editListDuration;
    NSString *m_identifier;
    NSMutableDictionary *m_contentModesForOrientation;
    NSMutableArray *m_projectChangeLogs;
    FIFOCache *m_kenBurnsImageCache;
    int m_suspendMusicValidate;
    int m_suspendUpdateAnchors;
    BOOL m_needsToUpdateAnchors;
    int m_kenBurnsAcceptability;
    NSDictionary *m_editedRanges;
    BOOL m_validate;
    NSMutableArray *m_unusedBkgdAudioClips;
    NSMutableArray *m_deletedMediaFiles;
    CGSize m_currentSize;
    int m_exportHeight;
    BOOL m_missingKBSourceImage;
    NSString *m_displayName;
    int m_frameRate;
    FIFOCache *m_trailerShotCache;
    int m_suspendSave;
}


@property (nonatomic) BOOL allowOriginalMusicForNoneTheme;
@property (nonatomic) BOOL allowsSplits; // ivar: _allowsSplits
@property (readonly, nonatomic) int aspect;
@property (readonly, nonatomic) CGFloat aspectHorizontal;
@property (nonatomic) CGFloat aspectRatio;
@property (readonly, nonatomic) CGFloat aspectSquare;
@property (readonly, nonatomic) CGFloat aspectVertical;
@property (retain, nonatomic) ProjectAssetManager *assetManager; // ivar: _assetManager
@property (readonly, nonatomic) NSString *assetsDirectory;
@property (retain, nonatomic) NSString *audioTimePitchAlgorithm;
@property (retain, nonatomic) NSMutableArray *backgroundAudioClips;
@property (nonatomic) int currentTime; // ivar: m_currentTime
@property (retain, nonatomic) NSMutableArray *cutaways;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) TitleDefinition *defaultTitle; // ivar: _defaultTitle
@property (copy, nonatomic) NSString *defaultTransitionType;
@property (nonatomic) NSObject<ProjectDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSMutableArray *deletedMediaFiles; // ivar: _deletedMediaFiles
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) int durationForAllAssets; // ivar: m_durationForAllAssets
@property (retain, nonatomic) NSMutableArray *editList;
@property (nonatomic) CGSize explicitOutputSize; // ivar: _explicitOutputSize
@property (readonly, nonatomic) BOOL exportAt60fps;
@property (readonly, nonatomic) NSString *exportDirectory;
@property (nonatomic) BOOL fadeInFromBlack;
@property (nonatomic) BOOL fadeOutToBlack;
@property (nonatomic) BOOL fadeSongForce; // ivar: _fadeSongForce
@property (nonatomic) CGFloat fadeToBlackDuration; // ivar: _fadeToBlackDuration
@property (nonatomic) CGFloat fadeToBlackStartTime; // ivar: _fadeToBlackStartTime
@property (retain, nonatomic) PVEffect *filterEffect;
@property (retain, nonatomic) NSString *filterEffectID;
@property (readonly, nonatomic) unsigned int filterSeed;
@property (retain, nonatomic) NSMutableArray *foregroundAudioClips;
@property (nonatomic) NSUInteger frameRateMode;
@property (nonatomic) BOOL hasBeenModified; // ivar: m_hasBeenModified
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) BOOL isExportingPlist; // ivar: _isExportingPlist
@property (nonatomic) BOOL isMiro; // ivar: _isMiro
@property (readonly, nonatomic) BOOL isSimpleProject;
@property (retain, nonatomic) NSArray *lastArchiveNameAndDate; // ivar: _lastArchiveNameAndDate
@property (copy, nonatomic) NSDate *modificationDate; // ivar: m_modDate
@property (nonatomic) BOOL modifiedSincePublish; // ivar: m_modifiedSincePublish
@property (copy, nonatomic) NSString *path; // ivar: m_path
@property (readonly, nonatomic) NSString *persistedStorageName;
@property (readonly, nonatomic) BOOL playbackAt60fps;
@property (retain, nonatomic) NSMutableDictionary *projectDictionary;
@property (readonly, nonatomic) int projectID; // ivar: m_projectID
@property (readonly, nonatomic) NSString *projectVersion;
@property (nonatomic) BOOL readOnly; // ivar: m_readOnly
@property (retain, nonatomic) NSArray *savedEditList; // ivar: _savedEditList
@property (retain, nonatomic) NSDictionary *stabilizationDict; // ivar: stabilizationDict
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *temporaryUniqueIdentifier;
@property (retain, nonatomic) NSString *themeID;
@property (readonly, nonatomic, getter=isTrailer) BOOL trailer;
@property (retain, nonatomic) NSMutableDictionary *trailerDict;
@property (readonly, nonatomic) NSUndoManager *undoManager; // ivar: m_undoManager
@property (nonatomic) BOOL useThemeAudio;


+(BOOL)trailerIsSuitableForThisDevice:(id)arg0 ;
+(id)assetsDirectory:(id)arg0 ;
+(id)defaultProjectImage;
+(id)firstClipDictInEditListOfProjectPlist:(id)arg0 ;
+(id)projectFilePathFromProjectPath:(id)arg0 forWriting:(BOOL)arg1 ;
+(id)projectHolderPathFromProjectPath:(id)arg0 forWriting:(BOOL)arg1 ;
+(id)projectWithSingleMovieClip:(id)arg0 ;
+(struct CGSize )exportImageSize:(struct CGSize )arg0 ;
+(struct CGSize )playBackImageSize:(struct CGSize )arg0 ;
+(struct CGSize )sizeForMaxPixels:(CGFloat)arg0 sourceSize:(struct CGSize )arg1 ;
+(struct CGSize )sizeForRenderIntent:(int)arg0 sourceSize:(struct CGSize )arg1 ;
+(struct CGSize )thumbImageSize:(struct CGSize )arg0 ;
+(void)findSharedMediaItems:(id)arg0 inProjectPlist:(id)arg1 addingToResultsMap:(*id)arg2 ;
+(void)replaceProjectsURL:(id)arg0 withURL:(id)arg1 inProjectPlist:(id)arg2 ;
+(void)setProjectClass:(Class)arg0 ;
-(BOOL)canDetachAudioFromClip:(id)arg0 ;
-(BOOL)canDuplicateClip:(id)arg0 ;
-(BOOL)canMoveAudioToForegroundFromClip:(id)arg0 ;
-(BOOL)canSplitClip:(id)arg0 atTime:(int)arg1 ;
-(BOOL)clip:(id)arg0 isInUseAtTime:(int)arg1 ;
-(BOOL)clipsOnlyHaveAudioCharacteristics;
-(BOOL)compareTimingMethodsForStabilizationConfigLookup:(id)arg0 forTime:(struct ? )arg1 frameData:(struct __CVBuffer *)arg2 irisMovieClip:(id)arg3 ;
-(BOOL)containsSufficient60fpsContent;
-(BOOL)didStabilize:(id)arg0 time:(struct ? )arg1 frameData:(struct __CVBuffer *)arg2 inputSize:(struct CGSize )arg3 cleanAperture:(struct CGRect )arg4 centeredCleanAperture:(struct CGRect )arg5 cleanApertureOriginZero:(struct CGRect )arg6 cropRect:(struct CGRect )arg7 homography:(struct ? )arg8 homographyMatrix4x4:(struct ? )arg9 userContext:(id)arg10 ;
-(BOOL)has1080Content:(id)arg0 clipType:(int)arg1 onlyMovies:(BOOL)arg2 ;
-(BOOL)has2160PContent:(id)arg0 clipType:(int)arg1 onlyMovies:(BOOL)arg2 ;
-(BOOL)hasAnyExportedFile;
-(BOOL)hasHEVCContent:(id)arg0 clipType:(int)arg1 onlyMovies:(BOOL)arg2 ;
-(BOOL)hasKBOnly;
-(BOOL)hasMissingAssets;
-(BOOL)insertClip:(id)arg0 atTime:(int)arg1 ;
-(BOOL)insertClip:(id)arg0 atTime:(int)arg1 adjustOtherClips:(BOOL)arg2 ;
-(BOOL)insertMovieClip:(id)arg0 afterClip:(id)arg1 ;
-(BOOL)isDirty;
-(BOOL)isEditing;
-(BOOL)isEmpty;
-(BOOL)isExporting;
-(BOOL)isImageValid:(id)arg0 renderingIntent:(int)arg1 size:(struct CGSize *)arg2 ;
-(BOOL)isMovie:(id)arg0 usedInList:(id)arg1 ;
-(BOOL)isMovieUsed:(id)arg0 ;
-(BOOL)isURL:(id)arg0 usedInList:(id)arg1 ;
-(BOOL)miroContainsSufficient60fpsContent;
-(BOOL)moveClipsAfterTime:(int)arg0 duration:(int)arg1 ;
-(BOOL)okToDeleteFile:(id)arg0 ;
-(BOOL)regenerateImagesIfNecessaryForIdentifierURL:(id)arg0 kbInfo:(id)arg1 exportOnly:(BOOL)arg2 ;
-(BOOL)rename:(id)arg0 to:(id)arg1 withPath:(id)arg2 ;
-(BOOL)renameTo:(id)arg0 ;
-(BOOL)resumeSave;
-(BOOL)save;
-(BOOL)saveToPath:(id)arg0 ;
-(BOOL)shouldCopyImages;
-(BOOL)use1080Pcontent:(BOOL)arg0 ;
-(BOOL)use2160Pcontent:(BOOL)arg0 ;
-(BOOL)useClipWithRotation;
-(BOOL)useHEVCcontent:(BOOL)arg0 ;
-(BOOL)usesOriginalNoneThemeMusic;
-(CGFloat)durationInSeconds;
-(CGFloat)durationOfEditListClipInSeconds:(id)arg0 ;
-(CGFloat)durationSecondsFromFrameTime:(int)arg0 ;
-(CGFloat)secondsFromProjectTime:(int)arg0 ;
-(NSInteger)compareModificationDates:(id)arg0 ;
-(NSInteger)indexOfEditListClipAtTime:(int)arg0 ;
-(NSUInteger)bytesNeededForExport:(id)arg0 ;
-(NSUInteger)bytesNeededForMultipleExports:(id)arg0 ;
-(NSUInteger)clipIndexInArray:(id)arg0 atTime:(int)arg1 ;
-(NSUInteger)estimatedBundleSizeIncludingExternalAssets:(BOOL)arg0 bundleSize:(*NSUInteger)arg1 externalMap:(*id)arg2 ;
-(NSUInteger)estimatedSizeOfPassThroughExport;
-(NSUInteger)numberOfDetectedFacesInKenBurnsClip:(id)arg0 ;
-(float)maxSourceFrameRate;
-(id)_detectedFacesInImage:(id)arg0 clip:(id)arg1 ;
-(id)_keyForRenderingIntent:(int)arg0 ;
-(id)addAutomaticTransitions;
-(id)anchoredSegmentsIgnoringClip:(id)arg0 clipType:(int)arg1 ;
-(id)audioClipsAnchoredToClip:(id)arg0 ;
-(id)availableAnchoredRangesIgnoringClip:(id)arg0 clipType:(int)arg1 ;
-(id)backgroundAudioClipsInUseAtTime:(int)arg0 ;
-(id)cacheKeyForAssetsLibraryURL:(id)arg0 renderingIntent:(int)arg1 ;
-(id)cacheKeyForFileURL:(id)arg0 renderingIntent:(int)arg1 ;
-(id)cacheKeyForIdentifierURL:(id)arg0 renderingIntent:(int)arg1 ;
-(id)cacheKeyForKenBurnsIdentifierURL:(id)arg0 renderingIntent:(int)arg1 ;
-(id)cacheKeyForPhotosIdentifierURL:(id)arg0 renderingIntent:(int)arg1 ;
-(id)clipAfterClip:(id)arg0 ;
-(id)clipAfterClip:(id)arg0 inClips:(id)arg1 ;
-(id)clipAfterTransitionClip:(id)arg0 ;
-(id)clipBeforeClip:(id)arg0 ;
-(id)clipBeforeClip:(id)arg0 inClips:(id)arg1 ;
-(id)clipBeforeTransitionClip:(id)arg0 ;
-(id)clips;
-(id)clipsAnchoredToClip:(id)arg0 ;
-(id)clipsForClipType:(int)arg0 ;
-(id)clipsInUseAtTime:(int)arg0 ;
-(id)clipsOfType:(int)arg0 inUseAtTime:(int)arg1 ;
-(id)clipsOfType:(int)arg0 inUseFromTime:(int)arg1 toTime:(int)arg2 ;
-(id)convertToPlist;
-(id)copyMediaClipsOmittingFirstClip:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)cutawaysAnchoredToClip:(id)arg0 ;
-(id)cutawaysInUseAtTime:(int)arg0 ;
-(id)detachMovieAudioFromClip:(id)arg0 ;
-(id)detectedFaceRectsInKenBurnsClip:(id)arg0 ;
-(id)detectedFacesInKenBurnsClip:(id)arg0 ;
-(id)duplicateClip:(id)arg0 ;
-(id)editInfo;
-(id)editListClipInUseAtTime:(int)arg0 ;
-(id)editListClipInUseAtTime:(int)arg0 timeFromPreviousEdit:(*int)arg1 ;
-(id)editListClipInUseNearTime:(int)arg0 ;
-(id)editedRangeList;
-(id)endEditing;
-(id)expandedEditList;
-(id)exportPresetForATV;
-(id)exportPresetForPlugin;
-(id)exportedFilePath:(id)arg0 ;
-(id)fileNameFromPreset:(id)arg0 ;
-(id)filePathForCacheKey:(id)arg0 ;
-(id)filePathForIdentifierURL:(id)arg0 renderingIntent:(int)arg1 ;
-(id)firstClip;
-(id)firstMovieClip;
-(id)foregroundAudioClipsInUseAtTime:(int)arg0 ;
-(id)hasExportedFile:(id)arg0 ;
-(id)hasExportedFileForFullScreen:(BOOL)arg0 ;
-(id)imageAtTime:(int)arg0 withSize:(struct CGSize )arg1 ;
-(id)imageForIdentifierURL:(id)arg0 renderingIntent:(int)arg1 ;
-(id)imageMatchingCurrentDeviceSizeForIdentifierURL:(id)arg0 sourceSize:(struct CGSize )arg1 renderingIntent:(int)arg2 ;
-(id)init;
-(id)initWithContentsOfFile:(id)arg0 ;
-(id)initWithContentsOfFile:(id)arg0 validate:(BOOL)arg1 ;
-(id)initWithValidState:(BOOL)arg0 ;
-(id)keyframeTimes;
-(id)keyframeTimesForClips:(id)arg0 ;
-(id)keyframeTimesForEditListClips:(id)arg0 ;
-(id)lastClip;
-(id)lastContentModeForOrientation:(NSInteger)arg0 ;
-(id)loadFromProjectData:(id)arg0 ;
-(id)localExportDirectory;
-(id)markFacesInImage:(id)arg0 highAccuracy:(BOOL)arg1 ;
-(id)md5StringFromData:(id)arg0 ;
-(id)mediaClipsInfoOmittingFirstClip:(BOOL)arg0 ;
-(id)moveTitleToBlack:(id)arg0 ;
-(id)nextClipOfType:(int)arg0 afterClip:(id)arg1 ;
-(id)nonEditListClipsIn:(id)arg0 inUseAtTime:(int)arg1 ;
-(id)nonTransitionClipBeforeClip:(id)arg0 ;
-(id)plistAsDataWithError:(*id)arg0 ;
-(id)previousClipOfType:(int)arg0 beforeClip:(id)arg1 ;
-(id)replaceURL:(id)arg0 inMovie:(id)arg1 andEditItem:(id)arg2 withURL:(id)arg3 ;
-(id)replaceURL:(id)arg0 withURL:(id)arg1 ;
-(id)restoredAnchoredClips:(id)arg0 ;
-(id)saveAnchoredClipsInList:(id)arg0 ;
-(id)saveBackgroundAudioClips;
-(id)saveCutaways;
-(id)saveForegroundAudioClips;
-(id)saveImageOfAssetRepresentation:(id)arg0 ;
-(id)saveImageOfAssetRepresentation:(id)arg0 renderingIntent:(int)arg1 ;
-(id)savePlaybackImageOfAssetRepresentation:(id)arg0 ;
-(id)saveThumbnailOfAssetRepresentation:(id)arg0 ;
-(id)scaleAndSaveImageToProject:(id)arg0 cacheKey:(id)arg1 renderingIntent:(int)arg2 ;
-(id)scaleDownOrRotateIfNeeded:(id)arg0 ;
-(id)simpleEditInfo;
-(id)splitClip:(id)arg0 atTime:(int)arg1 ;
-(id)thumbnailImage;
-(id)thumbnailTrailerKeyForURL:(id)arg0 index:(int)arg1 time:(int)arg2 size:(struct CGSize )arg3 ;
-(id)thumbnailTrailerShotForURL:(id)arg0 index:(int)arg1 time:(int)arg2 size:(struct CGSize )arg3 ;
-(id)timedStabilizationConfigForTime:(struct ? )arg0 frameData:(struct __CVBuffer *)arg1 userContext:(id)arg2 ;
-(id)timedStabilizationConfigInArray:(id)arg0 useNewMethod:(BOOL)arg1 forTime:(struct ? )arg2 frameData:(struct __CVBuffer *)arg3 irisMovieClip:(id)arg4 frameIndex:(*NSInteger)arg5 ;
-(id)trailerShotCacheDirectory;
-(id)usedTrackNames;
-(id)videoPreviewImageOfSize:(struct CGSize )arg0 ;
-(int)allowedTransitionDuration:(int)arg0 ;
-(int)anchoredSlotAtTime:(int)arg0 duration:(int)arg1 inRange:(struct _NSRange )arg2 ;
-(int)availableSpaceEndingAtTime:(int)arg0 ignoringClip:(id)arg1 clipType:(int)arg2 ;
-(int)availableSpaceStartingAtTime:(int)arg0 ignoringClip:(id)arg1 clipType:(int)arg2 ;
-(int)clipDurationGoodFor60fps:(id)arg0 ;
-(int)convertClipStartTimeToProjectTime:(id)arg0 ;
-(int)displayedDurationOfClip:(id)arg0 ;
-(int)duration;
-(int)maxAllowedDurationOfTransition:(id)arg0 simple:(*int)arg1 ;
-(int)minClipDurationForLeftEatDuration:(int)arg0 rightEatDuration:(int)arg1 totalDuration:(BOOL)arg2 ;
-(int)minTotalDurationOfClip:(id)arg0 ;
-(int)minimumClipDurationForValidation;
-(int)movieOrKBDurationGoodFor60fps:(id)arg0 ;
-(int)naturalFrameRate;
-(int)nearestAnchoredSlotAtTime:(int)arg0 duration:(int)arg1 ignoringClip:(id)arg2 clipType:(int)arg3 ;
-(int)numberOfNewsIntroTitlesUsed:(id)arg0 matchesClip:(*BOOL)arg1 ;
-(int)snapToGuideTimeWithin:(float)arg0 ofProjectTime:(int)arg1 ignoringClip:(id)arg2 forceSnap:(*BOOL)arg3 ;
-(int)snapToGuideTimeWithinInEditListWithStartOrEndPointsWithin:(float)arg0 ofProjectTime:(int)arg1 ignoringClip:(id)arg2 ;
-(int)startOffsetForClip:(id)arg0 ;
-(int)startOffsetForEditListClip:(id)arg0 ;
-(int)startOffsetForEditListIndex:(NSInteger)arg0 ;
-(int)timeForNearestEdgeOfClip:(id)arg0 projectTime:(int)arg1 ;
-(struct CGImage *)imageForURL:(id)arg0 renderingIntent:(int)arg1 ;
-(struct CGRect )adjustKBRect:(struct CGRect )arg0 toContainRect:(struct CGRect )arg1 withinImageSize:(struct CGSize )arg2 ;
-(struct CGRect )horizontallyClampedKenBurnsRect:(struct CGRect )arg0 imageSize:(struct CGSize )arg1 ;
-(struct CGRect )rectEnclosingAllFacesInKenBurnsClip:(id)arg0 ;
-(struct CGRect )rectFromKenBurnsPosition:(struct ? )arg0 outputAspectRatio:(float)arg1 image:(id)arg2 ;
-(struct CGRect )verticallyClampedKenBurnsRect:(struct CGRect )arg0 imageSize:(struct CGSize )arg1 ;
-(struct CGSize )applyAspectRatioTo16by9Size:(struct CGSize )arg0 ;
-(struct CGSize )naturalSize;
-(struct _NSRange )availableAnchoredRangeAtTime:(int)arg0 ignoringClip:(id)arg1 clipType:(int)arg2 ;
-(unsigned int)numberOfForegroundAudioTracks;
-(void)_addPanAndZoomForKenBurnsClip:(id)arg0 image:(id)arg1 ;
-(void)_enumerateMediaClipsUsingBlock:(id)arg0 ;
-(void)addForegroundAudioClips:(id)arg0 withAnchor:(id)arg1 ;
-(void)addPanAndZoomForKenBurnsClip:(id)arg0 ;
-(void)adjustDurationForKBClip:(id)arg0 imageSize:(struct CGSize )arg1 ;
-(void)appendVideoClip:(id)arg0 ;
-(void)audioOffsetBoundsForClip:(id)arg0 minStart:(*int)arg1 maxStart:(*int)arg2 minEnd:(*int)arg3 maxEnd:(*int)arg4 ;
-(void)audioOffsetsForClip:(id)arg0 startOffset:(*int)arg1 endOffset:(*int)arg2 ;
-(void)audioRangeForClip:(id)arg0 start:(*int)arg1 end:(*int)arg2 ;
-(void)beginUndoGroup:(id)arg0 ;
-(void)captureContentsOfClip:(id)arg0 needsDisplay:(BOOL)arg1 ;
-(void)checkForReadOnlyCookie;
-(void)cleanupMalformedAudioPaths:(id)arg0 ;
-(void)cleanupProjectDictionary:(id)arg0 ;
-(void)cleanupUnusedMediaFiles;
-(void)convertPlistToCustomObjects:(id)arg0 ;
-(void)createSubDirectories;
-(void)dealloc;
-(void)deleteAllExportedFiles;
-(void)deleteExportedFile:(id)arg0 ;
-(void)deleteMediaFileAtURL:(id)arg0 ;
-(void)detachTransitions;
-(void)didExport;
-(void)didFinishTrimmingClip;
-(void)didInitWithContentsOfFile;
-(void)endEditingOfTrailer;
-(void)endUndoGroup;
-(void)fixupShotThumbnailFileNameAfterImport;
-(void)flushMajorChanges;
-(void)flushThumbnailTrailerShot;
-(void)markDirty;
-(void)markDirty:(BOOL)arg0 ;
-(void)moveClipsInArray:(id)arg0 afterTime:(int)arg1 duration:(int)arg2 ;
-(void)moveClipsInArray:(id)arg0 afterTime:(int)arg1 duration:(int)arg2 except:(id)arg3 ;
-(void)nextKenBurnsStart:(struct ? *)arg0 end:(struct ? *)arg1 ;
-(void)noteClipsChangedInLog:(id)arg0 ;
-(void)prepareForCloudPersistence;
-(void)reattachTransitions;
-(void)rebuildFingerprints:(BOOL)arg0 ;
-(void)regenerateKBimageFilesIfNecessary:(BOOL)arg0 ;
-(void)removeAnchorForClip:(id)arg0 ;
-(void)removeClip:(id)arg0 releaseAnchor:(BOOL)arg1 ;
-(void)removePanAndZoomForKenBurnsClip:(id)arg0 ;
-(void)replaceClip:(id)arg0 withClip:(id)arg1 ;
-(void)replacePhotosToKenBurnsURLs;
-(void)restoreBackgroundAudioClips:(id)arg0 ;
-(void)restoreCutaways:(id)arg0 ;
-(void)restoreForegroundAudioClips:(id)arg0 ;
-(void)resumeMusicValidate;
-(void)resumeUpdateAnchors;
-(void)saveClipAssetToProject:(id)arg0 withCompletionHandler:(id)arg1 ;
// -(void)saveClipAssetToProject:(id)arg0 withCompletionHandler:(id)arg1 excludedRenderingIntents:(unk)arg2  ;
-(void)saveClipImageToProject:(id)arg0 clip:(id)arg1 ;
-(void)saveThumbnailTrailerShot:(id)arg0 forURL:(id)arg1 index:(int)arg2 time:(int)arg3 size:(struct CGSize )arg4 ;
-(void)setKenBurnsImage:(id)arg0 forCacheKey:(id)arg1 renderingIntent:(int)arg2 ;
-(void)setLastContentMode:(NSInteger)arg0 forOrientation:(NSInteger)arg1 ;
-(void)setupUndo;
-(void)sizeChanged;
-(void)startEditing;
-(void)suspendMusicValidate;
-(void)suspendSave;
-(void)suspendUpdateAnchors;
-(void)trailerIsSavingToPath:(id)arg0 ;
-(void)undoProjectChanges:(id)arg0 ;
-(void)updateAnchors;
-(void)updateAnchorsForClip:(id)arg0 ;
-(void)updateAnchorsIfNeeded;
-(void)updateClipsForCapriWithKonaProject:(id)arg0 ;
-(void)updateModificationDate;
-(void)updateTrailerMovieNameFieldsFromUnformattedString:(id)arg0 ;
-(void)validate;
-(void)validateBackgroundAudioTracks;
-(void)validateCutaways;
-(void)validateEditListTrack;
-(void)validateForegroundAudioTracks;
-(void)validateMusic;
-(void)willBeginTrimmingClip:(id)arg0 ;
-(void)willStartExport:(id)arg0 ;
-(void)zeroOutPanAndZoomForMultiUpClip:(id)arg0 ;


@end


#endif