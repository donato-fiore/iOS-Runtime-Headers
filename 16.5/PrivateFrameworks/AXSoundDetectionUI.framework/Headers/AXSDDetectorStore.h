// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXSDDETECTORSTORE_H
#define AXSDDETECTORSTORE_H

@class NSPointerArray, NSString, NSMutableDictionary, NSMutableArray;
@protocol AXSDUltronModelAssetManagerDelegate;

#import <Foundation/Foundation.h>

#import "AXUltronModelAssetManager.h"

@interface AXSDDetectorStore : NSObject <AXSDUltronModelAssetManagerDelegate>

 {
    NSPointerArray *_observers;
    AXUltronModelAssetManager *_assetManager;
    BOOL _detectorsReady;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *detectors; // ivar: _detectors
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *purgedDetectors; // ivar: _purgedDetectors
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger totalDownloadSize;
@property (readonly, nonatomic) NSInteger totalUnarchivedFileSize;


+(id)sharedInstance;
-(BOOL)areDetectorsReady;
-(BOOL)hasInProgressDownloads;
-(BOOL)isAssetCatalogInstalled;
-(NSUInteger)numberOfObservers;
-(id)_addDetectorForAXAsset:(id)arg0 ;
-(id)allDetectors;
-(id)allDetectorsByIdentifier;
-(id)customDetectors;
-(id)detectorWithAssetID:(id)arg0 ;
-(id)detectorWithIdentifier:(id)arg0 ;
-(id)detectorWithName:(id)arg0 ;
-(id)enabledDetectors;
-(id)init;
-(id)installedDetectors;
-(id)supportedDetectors;
-(id)unInstalledDetectors;
-(void)_downloadAssetsFromDetectors:(id)arg0 ;
-(void)_enumerateObserversWithBlock:(id)arg0 ;
-(void)_notifyObserversAvailableDetectorsDidUpdate:(id)arg0 ;
-(void)_notifyObserversDetectorsAreReady;
-(void)_notifyObserversDetectorsDownloadProgress:(NSInteger)arg0 totalSizeExpected:(NSInteger)arg1 remainingTimeExpected:(CGFloat)arg2 isStalled:(BOOL)arg3 ;
-(void)_notifyObserversDetectorsDownloadProgress:(NSInteger)arg0 totalSizeExpected:(NSInteger)arg1 remainingTimeExpected:(CGFloat)arg2 isStalled:(BOOL)arg3 error:(id)arg4 ;
-(void)_notifyObserversDetectorsNeedUpdate:(id)arg0 toDetectors:(id)arg1 ;
-(void)_notifyObserversDidFinishRefreshingDetectors:(id)arg0 wasSuccessful:(BOOL)arg1 error:(id)arg2 ;
-(void)_purgeAssetsFromDetectors:(id)arg0 ;
-(void)_reloadCustomDetectors;
-(void)_removeCustomDetectors;
-(void)_toggleDetectorsBasedOnSettingsChange;
-(void)addObserver:(id)arg0 ;
-(void)assetManager:(id)arg0 didFinishRefreshingAssets:(id)arg1 wasSuccessful:(BOOL)arg2 error:(id)arg3 ;
-(void)assetManager:(id)arg0 totalSizeExpected:(NSInteger)arg1 downloadProgressTotalWritten:(NSInteger)arg2 remainingTimeExpected:(CGFloat)arg3 isStalled:(BOOL)arg4 ;
-(void)assetsNotReadyForUltronManager:(id)arg0 ;
-(void)assetsReadyForUltronManager:(id)arg0 ;
-(void)disableDetector:(id)arg0 ;
-(void)disableDetectorWithIdentifier:(id)arg0 ;
-(void)downloadDetectors;
-(void)enableDetector:(id)arg0 ;
-(void)loadDetectors;
-(void)purgeDetectors;
-(void)removeObserver:(id)arg0 ;
-(void)stopDownloadOfDetectors;


@end


#endif