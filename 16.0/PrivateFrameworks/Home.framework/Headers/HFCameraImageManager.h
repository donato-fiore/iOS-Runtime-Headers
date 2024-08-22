// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFCAMERAIMAGEMANAGER_H
#define HFCAMERAIMAGEMANAGER_H

@class HMCameraProfile, NSMutableDictionary, NSOperationQueue;
@protocol HFCameraTimelapseVideoDownloaderDelegate;

#import <Foundation/Foundation.h>

#import "HFCameraPosterFrameProvider.h"
#import "HFCameraClipVideoAssetOperationCache.h"
#import "HFCameraImageCache.h"

@interface HFCameraImageManager : NSObject <HFCameraTimelapseVideoDownloaderDelegate>



@property (retain, nonatomic) HFCameraPosterFrameProvider *cameraPosterFrameProvider; // ivar: _cameraPosterFrameProvider
@property (weak, nonatomic) HMCameraProfile *cameraProfile; // ivar: _cameraProfile
@property (retain, nonatomic) HFCameraClipVideoAssetOperationCache *fetchCache; // ivar: _fetchCache
@property (retain, nonatomic) NSMutableDictionary *generationObservers; // ivar: _generationObservers
@property (retain, nonatomic) HFCameraImageCache *imageCache; // ivar: _imageCache
@property (retain, nonatomic) NSMutableDictionary *imageObservers; // ivar: _imageObservers
@property (retain, nonatomic) NSMutableDictionary *inProgressOperations; // ivar: _inProgressOperations
@property (retain, nonatomic) NSMutableDictionary *offsetsForFile; // ivar: _offsetsForFile
@property (retain, nonatomic) NSOperationQueue *posterFrameQueue; // ivar: _posterFrameQueue
@property (retain, nonatomic) NSMutableDictionary *requestedFaceCropCache; // ivar: _requestedFaceCropCache
@property (retain, nonatomic) NSMutableDictionary *requestedHeroFrameCache; // ivar: _requestedHeroFrameCache
@property (retain, nonatomic) NSMutableDictionary *requestedPosterFrameCache; // ivar: _requestedPosterFrameCache
@property (nonatomic) CGSize videoSize; // ivar: _videoSize


+(id)clipIdentifierStringFromDate:(id)arg0 ;
+(id)sharedManager;
-(CGFloat)_timeScaleAdjustedOffset:(CGFloat)arg0 ;
-(id)cachedPosterFrameImageForClip:(id)arg0 offset:(CGFloat)arg1 requestor:(id)arg2 ;
-(id)faceCropForClip:(id)arg0 atOffset:(CGFloat)arg1 ;
-(id)faceCropForPersonName:(id)arg0 ;
-(id)faceCropImagesForClip:(id)arg0 atOffset:(CGFloat)arg1 ;
-(id)firstPosterFrameImageForClip:(id)arg0 ;
-(id)heroFrameImageForClip:(id)arg0 ;
-(id)imageObserversForKey:(id)arg0 ;
-(id)init;
-(id)keyForClip:(id)arg0 ;
-(id)keyForClip:(id)arg0 timeOffset:(CGFloat)arg1 ;
-(id)representativeImageForClip:(id)arg0 ;
-(struct CGSize )posterFrameSize;
-(void)_addPosterFrameImage:(id)arg0 forClip:(id)arg1 withOffset:(CGFloat)arg2 ;
-(void)_generateImagesForForTimelapseClip:(id)arg0 atLocation:(id)arg1 ;
-(void)_updateDemoObserversForImage:(id)arg0 forClip:(id)arg1 withOffset:(CGFloat)arg2 ;
-(void)addDemoPosterFrameImageObserver:(id)arg0 forClip:(id)arg1 atOffset:(CGFloat)arg2 ;
-(void)addFaceCropImageObserver:(id)arg0 forClip:(id)arg1 usingSignificantEvent:(id)arg2 ;
-(void)addHeroFrameImageObserver:(id)arg0 forClip:(id)arg1 ;
-(void)addPosterFrameImageObserver:(id)arg0 forClip:(id)arg1 atOffset:(CGFloat)arg2 ;
-(void)dealloc;
-(void)didDownloadVideoFileForTimelapseClip:(id)arg0 atLocation:(id)arg1 ;
-(void)failToFindHeroFrameForClip:(id)arg0 ;
-(void)failedToDownloadVideoFileForTimelapseClip:(id)arg0 ;
-(void)failedToFindFaceCropForClip:(id)arg0 withKey:(id)arg1 ;
-(void)foundVideoFileForTimelapseClip:(id)arg0 atLocation:(id)arg1 ;
-(void)generateDemoPosterFramesForAsset:(id)arg0 forClip:(id)arg1 ;
-(void)generateImageUsingAsset:(id)arg0 clip:(id)arg1 offset:(CGFloat)arg2 ;
-(void)generatePosterFrameImageForClip:(id)arg0 atOffset:(CGFloat)arg1 observer:(id)arg2 ;
-(void)getPosterFrameImage:(id)arg0 forClip:(id)arg1 atOffset:(CGFloat)arg2 ;
-(void)purgePosterFrames;
-(void)purgeVideoFiles;
-(void)removeFaceCropImageObserver:(id)arg0 forPersonName:(id)arg1 ;
-(void)removeHeroFrameImageObserver:(id)arg0 forClip:(id)arg1 ;
-(void)removePosterFrameImageObserver:(id)arg0 forClip:(id)arg1 atOffset:(CGFloat)arg2 ;
-(void)resetForCameraDismissal;


@end


#endif