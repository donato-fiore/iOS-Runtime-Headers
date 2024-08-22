// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPEOPLEFACECROPMANAGER_H
#define PXPEOPLEFACECROPMANAGER_H

@class NSCache, NSMutableDictionary, NSString;
@protocol PXPhotoLibraryUIChangeObserver;

#import <Foundation/Foundation.h>


@interface PXPeopleFaceCropManager : NSObject <PXPhotoLibraryUIChangeObserver>

 {
    NSCache *_faceCropCache;
    os_unfair_lock_s _faceCropCacheLock;
    NSMutableDictionary *_faceCropRequestsByRequestIDs;
    os_unfair_lock_s _faceCropRequestsByRequestIDsLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(CGFloat)_cornerRadiusForCornerStyle:(NSInteger)arg0 pixelTargetSize:(struct CGSize )arg1 ;
+(CGFloat)_cropFactorValueForCropFactor:(NSInteger)arg0 ;
+(id)_compressionQueue;
+(id)_cropQueue;
+(id)_faceCropManagerLog;
+(id)_fetchQueue;
+(id)sharedManager;
+(struct CGRect )_normalizedFaceCropRectForFace:(id)arg0 cropFactor:(NSInteger)arg1 ;
+(struct CGRect )_rectWithAspectRatioFittingAroundEyeLevelForAspectRatio:(CGFloat)arg0 pixelFaceCrop:(struct CGRect )arg1 eyeLinePoint:(struct CGPoint )arg2 ;
+(struct CGSize )_constrainedSizeForDesiredSize:(struct CGSize )arg0 ;
-(BOOL)isRequestActiveWithRequestID:(int)arg0 ;
-(id)_cachedResultForOptions:(id)arg0 ;
-(id)init;
-(id)prepareForPhotoLibraryChange:(id)arg0 ;
-(int)_prepareFaceCropRequestWithOptions:(id)arg0 resultHandler:(id)arg1 ;
-(int)requestFaceCropForOptions:(id)arg0 resultHandler:(id)arg1 ;
-(void)_cacheResult:(id)arg0 ;
-(void)_cleanupForImage:(id)arg0 request:(id)arg1 ;
-(void)_compressImage:(id)arg0 request:(id)arg1 resultHandler:(id)arg2 ;
-(void)_cropImage:(id)arg0 request:(id)arg1 resultHandler:(id)arg2 ;
-(void)_emptyFaceCropCache;
-(void)_executeFaceCropRequest:(id)arg0 resultHandler:(id)arg1 ;
-(void)_fetchFaceAndAssetIfNecessaryForOptions:(id)arg0 completion:(id)arg1 ;
-(void)_handleImage:(id)arg0 info:(id)arg1 faceCropRequest:(id)arg2 resultHandler:(id)arg3 ;
-(void)_invalidateCacheForPerson:(id)arg0 wantsNotificationPosted:(BOOL)arg1 ;
-(void)cancelRequestForRequestID:(int)arg0 ;
-(void)invalidateCacheForPerson:(id)arg0 ;


@end


#endif