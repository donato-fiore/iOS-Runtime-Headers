// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PROJECTASSETMANAGER_H
#define PROJECTASSETMANAGER_H

@class NSArray, NSString, NSDictionary, NSSet;
@protocol PHAssetRepresentationDownloadObserver, ProjectAssetManagerDelegate;

#import <Foundation/Foundation.h>

#import "Project.h"
#import "MBProjectClipsLoader.h"

@interface ProjectAssetManager : NSObject <PHAssetRepresentationDownloadObserver>



@property (nonatomic) BOOL automaticallyStartDownloads; // ivar: _automaticallyStartDownloads
@property (nonatomic) BOOL cacheRepairableEditItems; // ivar: _cacheRepairableEditItems
@property (retain, nonatomic) NSArray *cachedRepairableEditItems; // ivar: _cachedRepairableEditItems
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ProjectAssetManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat downloadProgress; // ivar: _downloadProgress
@property (nonatomic, getter=isDownloading) BOOL downloading; // ivar: _downloading
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *movieMatches; // ivar: _movieMatches
@property NSUInteger numberOfCompletedWorkItems; // ivar: _numberOfCompletedWorkItems
@property NSUInteger numberOfWorkItems; // ivar: _numberOfWorkItems
@property (retain, nonatomic) NSSet *offlineAssetRepresentations; // ivar: _offlineAssetRepresentations
@property (weak, nonatomic) Project *project; // ivar: _project
@property (retain, nonatomic) MBProjectClipsLoader *sharedClipsLoader; // ivar: _sharedClipsLoader
@property (readonly) Class superclass;


-(BOOL)hasMismatchedAssets;
-(BOOL)hasMismatchedDurationAssets;
-(BOOL)hasMissingAssets;
-(BOOL)hasModifiedAssets;
-(BOOL)hasOfflineAssets;
-(BOOL)hasProjectAssetForIdentifierURL:(id)arg0 ;
-(NSUInteger)numberOfAssetsMatchingCriteria:(NSInteger)arg0 ;
-(NSUInteger)numberOfMismatchedAssets;
-(NSUInteger)numberOfMissingAssets;
-(NSUInteger)numberOfOfflineAssets;
-(id)assetURLsMatchingCriteria:(NSInteger)arg0 breakOnFirst:(BOOL)arg1 ;
-(id)editItemsMatchingCriteria:(NSInteger)arg0 breakOnFirst:(BOOL)arg1 ;
-(id)fetchOptionsForEditItem:(id)arg0 creationDateTolerance:(CGFloat)arg1 ;
-(id)filePathForAdjustedVideoIdentifierURL:(id)arg0 ;
-(id)initWithProject:(id)arg0 ;
-(id)localOriginalImageForIdentifierURL:(id)arg0 ;
-(id)matchLibraryAssets;
-(id)matchLocalMovies;
-(id)matchingAssetsForEditItem:(id)arg0 creationDateTolerance:(CGFloat)arg1 ;
-(id)mismatchedDurationEditItems;
-(id)mismatchedEditItems;
-(id)missingEditItems;
-(id)offlineEditItems;
-(id)originalImageForIdentifierURL:(id)arg0 ;
-(id)predicateForCreationDate:(id)arg0 tolerance:(CGFloat)arg1 ;
-(id)predicateForDuration:(CGFloat)arg0 ;
-(id)projectOriginalImageForIdentifierURL:(id)arg0 ;
-(id)repairableEditItems;
-(void)_updateDownloadProgress;
-(void)cancelDownloads;
-(void)connectivityDidChange:(id)arg0 ;
-(void)dealloc;
-(void)downloadOfAssetRepresentation:(id)arg0 didProgress:(CGFloat)arg1 ;
-(void)downloadOfflineAssetsIfNecessary;
-(void)downloadStateOfAssetRepresentationDidChange:(id)arg0 previousState:(NSUInteger)arg1 currentState:(NSUInteger)arg2 ;
-(void)hasAssetsInPhotosTrash:(id)arg0 ;
-(void)postProgressNotification;
-(void)projectDidFinishAllEditing:(id)arg0 ;
-(void)repairEditItems:(id)arg0 ;
-(void)repairMismatchedAssets;
-(void)repairMissingAssets;
-(void)updateDownloadProgress;


@end


#endif