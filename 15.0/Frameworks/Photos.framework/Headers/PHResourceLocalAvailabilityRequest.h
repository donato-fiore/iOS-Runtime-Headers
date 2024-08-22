// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHRESOURCELOCALAVAILABILITYREQUEST_H
#define PHRESOURCELOCALAVAILABILITYREQUEST_H

@class NSMutableDictionary, NSMutableArray, NSArray, NSString, NSProgress;
@protocol NSProgressReporting;

#import <Foundation/Foundation.h>

#import "PHAsset.h"

@interface PHResourceLocalAvailabilityRequest : NSObject <NSProgressReporting>

 {
    NSMutableDictionary *_progressByRequestIdentifier;
    id *_downloadCompletionHandler;
}


@property (readonly, nonatomic) NSMutableArray *_activeAssetResourcesRequest; // ivar: __activeAssetResourcesRequest
@property (retain, nonatomic, setter=_setAssetResources:) NSArray *_assetResources; // ivar: __assetResources
@property (nonatomic, getter=_isDownloadCancelled, setter=_setDownloadCancelled:) BOOL _downloadCancelled; // ivar: __downloadCancelled
@property (readonly) PHAsset *asset; // ivar: _asset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSProgress *progress; // ivar: _progress
@property (copy, nonatomic) id *progressChangeHandler; // ivar: _progressChangeHandler
@property (nonatomic, setter=_setProgressFraction:) CGFloat progressFraction; // ivar: _progressFraction
@property (readonly) NSInteger requestType; // ivar: _requestType
@property (readonly) Class superclass;


+(BOOL)setValuesInDictionary:(id)arg0 fromDictionary:(id)arg1 keysToCopy:(id)arg2 ;
+(id)_resourceInfoForAsset:(id)arg0 resourcesToShare:(id)arg1 includeAllAssetResources:(BOOL)arg2 fulfillOnDemandResources:(BOOL)arg3 error:(*id)arg4 ;
+(id)_resourcesToShareForAsset:(id)arg0 error:(*id)arg1 ;
+(id)_resourcesToShareForAsset:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)fetchResourcesToShareForAsset:(id)arg0 requestOptions:(id)arg1 error:(*id)arg2 ;
+(id)indexesForAssetsRequiringResourceRetrieval:(id)arg0 requestType:(NSInteger)arg1 ;
+(id)indexesForAssetsRequiringResourceRetrieval:(id)arg0 requestType:(NSInteger)arg1 options:(id)arg2 ;
+(id)indexesForAssetsWithoutThumbnails:(id)arg0 requestType:(NSInteger)arg1 ;
+(id)originalsAndFullSizeResourcesToShareForAsset:(id)arg0 fromAvailableResources:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
+(id)resourceInfoForAsset:(id)arg0 requestType:(NSInteger)arg1 error:(*id)arg2 ;
+(id)resourceInfoKeysForResourceTypesForPhotos;
+(id)resourceInfoKeysForResourceTypesForVideos;
+(id)singularResourcesToShareForAsset:(id)arg0 fromAvailableResources:(id)arg1 options:(id)arg2 useOriginalResources:(BOOL)arg3 knownUnsupported:(BOOL)arg4 error:(*id)arg5 ;
+(id)utiKeysForURLKeys;
-(NSInteger)resourceAvailabilityForOptions:(id)arg0 resourceInfo:(*id)arg1 ;
-(id)init;
-(id)initWithAsset:(id)arg0 requestType:(NSInteger)arg1 ;
-(void)_cancelActiveAssetResourceRequests;
-(void)_didFinishDownloadWithSuccess:(BOOL)arg0 resourceInfo:(id)arg1 error:(id)arg2 ;
-(void)_fetchResourcesForDuplicatingAsset:(id)arg0 options:(id)arg1 networkAccessAllowed:(BOOL)arg2 handler:(id)arg3 ;
-(void)_fetchResourcesForPickerAsset:(id)arg0 options:(id)arg1 networkAccessAllowed:(BOOL)arg2 handler:(id)arg3 ;
-(void)_fetchResourcesForSharingAsset:(id)arg0 options:(id)arg1 networkAccessAllowed:(BOOL)arg2 handler:(id)arg3 ;
-(void)_fetchResourcesWithOptions:(id)arg0 networkAccessAllowed:(BOOL)arg1 handler:(id)arg2 ;
-(void)_handleCompletionOfAssetResourceDataRequestWithId:(int)arg0 error:(id)arg1 ;
-(void)_simulateFetchResourcesWithDuration:(CGFloat)arg0 success:(BOOL)arg1 networkAccessAllowed:(BOOL)arg2 queue:(id)arg3 handler:(id)arg4 ;
-(void)_updateCombinedProgressWithValue:(CGFloat)arg0 forRequestIdentifier:(id)arg1 networkAccessAllowed:(BOOL)arg2 ;
-(void)cancelRetrievalRequest;
-(void)fetchResourceAvailabilityWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)retrieveRequiredResourcesWithOptions:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif