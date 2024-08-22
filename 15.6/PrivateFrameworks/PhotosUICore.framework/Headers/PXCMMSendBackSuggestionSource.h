// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCMMSENDBACKSUGGESTIONSOURCE_H
#define PXCMMSENDBACKSUGGESTIONSOURCE_H

@class PHMomentShare;
@protocol OS_dispatch_queue;


#import "PXObservable.h"
#import "PXAssetsDataSource.h"
#import "PXCMMContext.h"
#import "PXCMMSendBackSuggestion.h"

@interface PXCMMSendBackSuggestionSource : PXObservable {
    NSObject<OS_dispatch_queue> *_fetchQueue;
    NSUInteger _sourceType;
    BOOL _hasInitiatedFetchRequest;
}


@property (readonly, nonatomic) PXAssetsDataSource *assetsDataSource; // ivar: _assetsDataSource
@property (readonly, nonatomic) PHMomentShare *originatingMomentShare; // ivar: _originatingMomentShare
@property (readonly, nonatomic) PXCMMContext *sendBackContext; // ivar: _sendBackContext
@property (readonly, nonatomic) BOOL shouldShowBanner; // ivar: _shouldShowBanner
@property (readonly, nonatomic) PXCMMSendBackSuggestion *suggestion; // ivar: _suggestion


+(id)_assetsInDateRanges:(id)arg0 ;
+(id)_filterAssets:(id)arg0 byLocations:(id)arg1 maxDistanceMeters:(CGFloat)arg2 ;
+(id)_sendBackFetchResultUsingOverlappingTimeFromStartDate:(id)arg0 endDate:(id)arg1 ;
+(id)_sendBackFetchResultUsingTimeLocationMatching:(id)arg0 ;
+(id)new;
+(id)sendBackContextOverlappingTimeFromStartDate:(id)arg0 endDate:(id)arg1 sourceType:(NSUInteger)arg2 ;
+(id)sendBackContextTimeLocationMatching:(id)arg0 sourceType:(NSUInteger)arg1 ;
-(BOOL)_existingOverlappingMomentSharesFromOwnerForAssetCollection:(id)arg0 ;
-(id)_allMetadataAssets;
-(id)_createSendBackContext;
-(id)_fetchSuggestedParticipantsForAssetCollection:(id)arg0 ;
-(id)_sendBackFetchResultUsingPhotosGraph;
-(id)init;
-(id)initWithAssetsDataSource:(id)arg0 sourceType:(NSUInteger)arg1 originatingMomentShare:(id)arg2 ;
-(id)mutableChangeObject;
-(id)sendBackContextPhotosGraphBasedWithSourceType:(NSUInteger)arg0 ;
-(void)_fetchQueue_fetchSuggestedSendBackContext;
-(void)_fetchSuggestedSendBackContext;
-(void)performChanges:(id)arg0 ;
-(void)startLoading;


@end


#endif