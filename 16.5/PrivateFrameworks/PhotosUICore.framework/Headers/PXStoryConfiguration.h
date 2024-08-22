// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYCONFIGURATION_H
#define PXSTORYCONFIGURATION_H

@class NSString, PHAssetCollection, PHPhotoLibrary, NSArray, NSMutableDictionary;
@protocol NSCopying, PXStoryQueueParticipant, PXDisplayAssetCollection, PXAssetCollectionActionPerformerDelegate, PXDisplayAssetFetchResult, PXCloudCapabilitiesProvider, PXTapToRadarDiagnosticProvider, PXStoryDetailedSaliencyProducer, PXStoryErrorReporter, PXDisplayAsset, OS_os_log, PXStoryMusicCurationProvider, PFStoryRecipe, PXAnonymousViewController, PXStoryRelatedProducer, OS_dispatch_queue, PXStoryStyleProducer, PXStoryTimelineProducer, PXUserDefaultsDataSource;

#import <Foundation/Foundation.h>

#import "PXStoryErrorRepository.h"
#import "PXMediaProvider.h"
#import "PXStoryConfiguration.h"
#import "PXStorySongsConfiguration.h"
#import "PXVolumeController.h"

@interface PXStoryConfiguration : NSObject <NSCopying, PXStoryQueueParticipant>



@property (readonly, nonatomic) NSObject<PXDisplayAssetCollection> *assetCollection; // ivar: _assetCollection
@property (weak, nonatomic) NSObject<PXAssetCollectionActionPerformerDelegate> *assetCollectionActionPerformerDelegate; // ivar: _assetCollectionActionPerformerDelegate
@property (readonly, nonatomic) NSObject<PXDisplayAssetFetchResult> *assets; // ivar: _assets
@property (retain, nonatomic) NSObject<PXCloudCapabilitiesProvider> *cloudCapabilitiesProvider; // ivar: _cloudCapabilitiesProvider
@property (weak, nonatomic) NSObject<PXTapToRadarDiagnosticProvider> *containerTapToRadarDiagnosticsProvider; // ivar: _containerTapToRadarDiagnosticsProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<PXStoryDetailedSaliencyProducer> *detailedSaliencyProducer; // ivar: _detailedSaliencyProducer
@property (nonatomic) BOOL disableBufferingController; // ivar: _disableBufferingController
@property (readonly, nonatomic) NSObject<PXStoryErrorReporter> *errorReporter; // ivar: _errorReporter
@property (readonly, nonatomic) PXStoryErrorRepository *errorRepository; // ivar: _errorRepository
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger initialViewMode; // ivar: _initialViewMode
@property (readonly, nonatomic) BOOL isAppleMusicPreview;
@property (readonly, nonatomic) BOOL isExportPreview;
@property (readonly, nonatomic) BOOL isPresentedForAirPlay;
@property (readonly, nonatomic) BOOL isRelated;
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *keyAsset; // ivar: _keyAsset
@property (retain, nonatomic) NSString *launchType; // ivar: _launchType
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (nonatomic) NSUInteger logContext; // ivar: _logContext
@property (retain, nonatomic) PXMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (retain, nonatomic) NSObject<PXStoryMusicCurationProvider> *musicCurationProvider; // ivar: _musicCurationProvider
@property (nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) PXStoryConfiguration *parentConfiguration; // ivar: _parentConfiguration
@property (readonly, nonatomic) NSObject<PFStoryRecipe> *persistableRecipe; // ivar: _persistableRecipe
@property (readonly, nonatomic) PHAssetCollection *photoKitAssetCollection;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (weak, nonatomic) NSObject<PXAnonymousViewController> *presentingViewController; // ivar: _presentingViewController
@property (readonly, nonatomic) NSArray *referencePersons; // ivar: _referencePersons
@property (retain, nonatomic) NSObject<PXStoryRelatedProducer> *relatedProducer; // ivar: _relatedProducer
@property (readonly, nonatomic) BOOL shouldDismissAtEnd;
@property (retain, nonatomic) PXStorySongsConfiguration *songsConfiguration; // ivar: _songsConfiguration
@property (nonatomic) NSInteger songsProducerKind; // ivar: _songsProducerKind
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue; // ivar: _storyQueue
@property (retain, nonatomic) NSObject<PXStoryStyleProducer> *styleProducer; // ivar: _styleProducer
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<PXStoryTimelineProducer> *timelineProducer; // ivar: _timelineProducer
@property (retain, nonatomic) NSObject<PXUserDefaultsDataSource> *userDefaults; // ivar: _userDefaults
@property (readonly, nonatomic) NSMutableDictionary *userInfo; // ivar: _userInfo
@property (retain, nonatomic) PXVolumeController *volumeController; // ivar: _volumeController


-(id)copyForMusicPreviewWithCuratedSongs:(id)arg0 ;
-(id)copyWithAdditionalOptions:(NSUInteger)arg0 ;
-(id)copyWithAssetCollection:(id)arg0 ;
-(id)copyWithKeyAsset:(id)arg0 ;
-(id)copyWithParentConfiguration:(id)arg0 ;
-(id)copyWithStoryQueue:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAssetCollection:(id)arg0 ;
-(id)initWithAssetCollection:(id)arg0 assets:(id)arg1 keyAsset:(id)arg2 referencePersons:(id)arg3 persistableRecipe:(id)arg4 musicCurationProvider:(id)arg5 errorRepository:(id)arg6 queue:(id)arg7 parentConfiguration:(id)arg8 ;
-(id)initWithAssetCollection:(id)arg0 keyAsset:(id)arg1 ;
-(id)initWithAssetCollection:(id)arg0 keyAsset:(id)arg1 referencePersons:(id)arg2 ;
-(id)initWithAssets:(id)arg0 ;
-(id)initWithAssets:(id)arg0 keyAsset:(id)arg1 persistableRecipe:(id)arg2 ;
-(id)initWithPersistableRecipe:(id)arg0 ;
-(void)_copyPropertiesFromConfiguration:(id)arg0 ;


@end


#endif