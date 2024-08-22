// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PROJECTPLACEHOLDER_H
#define PROJECTPLACEHOLDER_H

@class NSDate, NSString, NSMutableArray, NSMutableDictionary, NSMetadataQuery;
@protocol ProjectDelegate, NSFilePresenter;

#import <Foundation/Foundation.h>

#import "Project.h"

@interface ProjectPlaceholder : NSObject <ProjectDelegate>

 {
    NSDate *m_modDate;
    int m_duration;
    int m_frameRate;
    int m_currentTime;
    NSString *m_themeID;
    NSString *m_displayName;
    int m_isReadOnly;
    NSUInteger m_bytesToDownload;
    NSUInteger m_bytesComplete;
}


@property (retain, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL downloadStarted; // ivar: _downloadStarted
@property (retain, nonatomic) NSMutableArray *essentialNrURLS; // ivar: _essentialNrURLS
@property (retain, nonatomic) NSString *exportedTrashPath; // ivar: m_exportedTrashPath
@property (nonatomic) NSObject<NSFilePresenter> *filePresenter; // ivar: _filePresenter
@property BOOL inihibitCoordinatedWrites; // ivar: _inihibitCoordinatedWrites
@property (nonatomic) BOOL isInCloud; // ivar: _isInCloud
@property (retain, nonatomic) NSMutableDictionary *nonresidentURLs; // ivar: _nonresidentURLs
@property (retain, nonatomic) NSString *path; // ivar: m_path
@property (readonly, nonatomic) NSString *persistedStorageName;
@property (readonly, nonatomic) Project *project; // ivar: m_project
@property BOOL projectPreviewNeedsToBeRegenerated; // ivar: _projectPreviewNeedsToBeRegenerated
@property BOOL restartCloudDownload; // ivar: _restartCloudDownload
@property (retain, nonatomic) NSDate *theaterSavedDate; // ivar: m_theaterSavedDate
@property (retain, nonatomic) NSString *theaterUUID; // ivar: m_theaterUUID
@property (readonly, nonatomic) NSString *themeID;
@property (readonly, nonatomic, getter=isTrailer) BOOL trailer;
@property (retain, nonatomic) NSString *trashPath; // ivar: m_trashPath
@property (retain, nonatomic) NSMetadataQuery *ubiquitousQuery; // ivar: _ubiquitousQuery
@property BOOL unsynched; // ivar: _unsynched


+(id)documentPathForNewProject:(BOOL)arg0 ;
+(id)miroProjectPlaceholder;
+(id)tempProjectPath:(id)arg0 ;
+(id)tempProjectPlaceHolderAtPath:(id)arg0 ;
+(id)tempProjectPlaceHolderWithName:(id)arg0 ;
+(id)themeProjectPreviewPath:(id)arg0 ;
+(id)timelineProjectPlaceholderWithID:(id)arg0 name:(id)arg1 previewMode:(BOOL)arg2 ;
+(id)trailerPlaceholderWithID:(id)arg0 previewMode:(BOOL)arg1 ;
+(id)trashProjectPath:(id)arg0 ;
+(id)trashProjectPlaceHolderWithName:(id)arg0 ;
-(BOOL)checkForEmoji:(id)arg0 ;
-(BOOL)deletable;
-(BOOL)downloadEverything;
-(BOOL)hasMissingCloudAssets;
-(BOOL)isDuplicateProjectName:(id)arg0 ;
-(BOOL)isEssentialURL:(id)arg0 ;
-(BOOL)isMissingAssets;
-(BOOL)isReadOnly;
-(BOOL)lowOnSpace;
-(BOOL)renameTo:(id)arg0 ;
-(BOOL)updateFile;
-(CGFloat)percentDownloaded;
-(NSUInteger)movieFileSizeForPath:(id)arg0 preset:(id)arg1 ;
-(NSUInteger)sizeOfExportForPresets:(id)arg0 ;
-(id)assetsDirectory;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dateFormatter;
-(id)durationDictionary;
-(id)filePresenterForURL:(id)arg0 ;
-(id)holderFilePath;
-(id)init;
-(id)initAsUnpersistable;
-(id)initWithPath:(id)arg0 ;
-(id)legacyThumbnailImagePath;
-(id)loadPreviewProject;
-(id)loadProjectAndValidate:(BOOL)arg0 ;
-(id)modificationDate;
-(id)previewImagesCacheFolder;
-(id)theaterPosterImage;
-(id)thumbnailImage;
-(id)thumbnailImageForProject:(id)arg0 ;
-(id)validateProposedName:(id)arg0 minimumLength:(NSInteger)arg1 ;
-(id)videoPreviewImage;
-(id)videoPreviewImageAllowingLowQuality:(BOOL)arg0 lowQualityFetched:(*BOOL)arg1 ;
-(id)videoPreviewImagePathForSize:(struct CGSize )arg0 ;
-(int)currentTime;
-(int)durationInFrame;
-(int)frameRate;
-(void)addCloudDownloadProject;
-(void)addQueryObservers;
-(void)cacheItem:(id)arg0 downloadImmediately:(BOOL)arg1 ;
-(void)clearMicacheFolder;
-(void)configureFilePresenter;
-(void)coordinateMove:(id)arg0 ;
-(void)coordinateRemove:(id)arg0 ;
-(void)coordinateRenameFrom:(id)arg0 to:(id)arg1 renameHandler:(id)arg2 ;
-(void)coordinateWrite:(id)arg0 ;
// -(void)coordinateWrite:(id)arg0 withOptions:(unk)arg1  ;
-(void)dealloc;
-(void)didFinishDownload:(id)arg0 ;
-(void)didStart:(id)arg0 ;
-(void)didUpdate:(id)arg0 ;
-(void)disablePreviewContent;
-(void)downloadEssentials;
-(void)finishGathering:(id)arg0 ;
-(void)gathering:(id)arg0 ;
-(void)notifyLowSpace;
-(void)pauseDownloading;
-(void)projectDidInvalidateSharingInfo:(id)arg0 ;
-(void)projectWasChanged:(id)arg0 ;
-(void)projectWasSaved:(id)arg0 ;
-(void)queryTheCloud;
-(void)readFile;
-(void)rebuildNonEssentialCacheForProjectURL:(id)arg0 oldURL:(id)arg1 ;
-(void)removeCloudDownloadProject;
-(void)removeFilePresenter;
-(void)removeQueryObservers;
-(void)resetCloudQuery;
-(void)resync;
-(void)startCloudQuery;
-(void)startDownloading;
-(void)stopCloudQuery;
-(void)unloadAllProjectsExceptMe;
-(void)unloadProject;
-(void)updateCurrentTime;
-(void)updateImage:(id)arg0 atPath:(id)arg1 ;
-(void)updateWithMediaURL:(id)arg0 asset:(id)arg1 adjustments:(id)arg2 selectedRange:(id)arg3 ;
-(void)updateWithTrailerID:(id)arg0 previewMode:(BOOL)arg1 ;


@end


#endif