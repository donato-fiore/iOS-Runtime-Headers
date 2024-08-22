// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMCVCSTILLIMAGERESULTCOORDINATOR_H
#define CAMCVCSTILLIMAGERESULTCOORDINATOR_H

@class NSMutableSet, NSMutableDictionary, NSSet, NSString;
@protocol CAMCVCStillImageResultCoordinatorDelegate;

#import <Foundation/Foundation.h>


@interface CAMCVCStillImageResultCoordinator : NSObject

@property (readonly, nonatomic, getter=_isDelayingForcedDispatch) BOOL _delayingForcedDispatch;
@property (nonatomic, setter=_setDidReceiveForceRemainingDispatchesIfPossible:) BOOL _didReceiveForceRemainingDispatchesIfPossible; // ivar: __didReceiveForceRemainingDispatchesIfPossible
@property (readonly, nonatomic) NSMutableSet *_dispatchedResultSpecifiers; // ivar: __dispatchedResultSpecifiers
@property (readonly, nonatomic) NSMutableSet *_handledResultSpecifiers; // ivar: __handledResultSpecifiers
@property (readonly, nonatomic) NSMutableDictionary *_pendingAssetAdjustments; // ivar: __pendingAssetAdjustments
@property (readonly, nonatomic) NSMutableDictionary *_pendingPhotoProperties; // ivar: __pendingPhotoProperties
@property (readonly, nonatomic) NSMutableDictionary *_pendingVideoProperties; // ivar: __pendingVideoProperties
@property (readonly, nonatomic) NSMutableSet *_photoResultSpecifiersDelayingForcedDispatch; // ivar: __photoResultSpecifiersDelayingForcedDispatch
@property (readonly, nonatomic) NSMutableSet *_receivedPhotos; // ivar: __receivedPhotos
@property (readonly, nonatomic) NSMutableSet *_receivedVideos; // ivar: __receivedVideos
@property (readonly, nonatomic) NSMutableSet *_videoResultSpecifiersDelayingForcedDispatch; // ivar: __videoResultSpecifiersDelayingForcedDispatch
@property (readonly, nonatomic) NSSet *allExpectedResultSpecifiers; // ivar: _allExpectedResultSpecifiers
@property (readonly, nonatomic) BOOL allowMultipleCaptures; // ivar: _allowMultipleCaptures
@property (readonly, weak, nonatomic) NSObject<CAMCVCStillImageResultCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic, getter=isExpectingPairedVideo) BOOL expectingPairedVideo; // ivar: _expectingPairedVideo
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL shouldReturnFilteredPhotosAsSingleAsset; // ivar: _shouldReturnFilteredPhotosAsSingleAsset


-(BOOL)_attemptDispatchForPairWithFilteredResultSpecifiers:(NSUInteger)arg0 unfilteredResultSpecifiers:(NSUInteger)arg1 forceRemainingDispatches:(BOOL)arg2 ;
-(BOOL)_attemptDispatchForResultSpecifiers:(NSUInteger)arg0 forceRemainingDispatches:(BOOL)arg1 ;
-(BOOL)_isWaitingOnResultSpecifiers:(NSUInteger)arg0 ;
-(id)_errorForResultSpecifiers:(NSUInteger)arg0 allowMissingVideo:(BOOL)arg1 ;
-(id)_errorWithDescription:(id)arg0 code:(NSInteger)arg1 ;
-(id)initWithDelegate:(id)arg0 identifier:(id)arg1 allExpectedResultSpecifiers:(id)arg2 isExpectingPairedVideo:(BOOL)arg3 allowMultipleCaptures:(BOOL)arg4 shouldReturnFilteredPhotosAsSingleAsset:(BOOL)arg5 ;
-(void)_dispatchPendingPropertiesForced:(BOOL)arg0 ;
-(void)delayForcedDispatchForPhotoResultSpecifiers:(NSUInteger)arg0 ;
-(void)delayForcedDispatchForVideoResultSpecifiers:(NSUInteger)arg0 ;
-(void)forceRemainingDispatchesIfPossible;
-(void)updatePhotoProperties:(id)arg0 assetAdjustments:(id)arg1 forResultSpecifiers:(NSUInteger)arg2 ;
-(void)updateVideoProperties:(id)arg0 forResultSpecifiers:(NSUInteger)arg1 ;


@end


#endif