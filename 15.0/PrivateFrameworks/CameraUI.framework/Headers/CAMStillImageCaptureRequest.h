// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMSTILLIMAGECAPTUREREQUEST_H
#define CAMSTILLIMAGECAPTUREREQUEST_H

@class NSString, NSURL, NSArray;
@protocol CAMCaptureAdjustmentProvider, CAMBurstIdentifierProvider, NSCopying, NSMutableCopying, CAMBurstRequest, CAMIrisRequest, CAMTimelapseRequest, CAMStillImageCaptureRequestDelegate;


#import "CAMCaptureRequest.h"
#import "CAMSemanticStyle.h"
#import "CAMTextRegionResult.h"

@interface CAMStillImageCaptureRequest : CAMCaptureRequest <CAMCaptureAdjustmentProvider, CAMBurstIdentifierProvider, NSCopying, NSMutableCopying, CAMBurstRequest, CAMIrisRequest, CAMTimelapseRequest>

 {
    NSInteger _aspectRatio;
}


@property (readonly, nonatomic, getter=isCTMVideo) BOOL CTMVideo;
@property (readonly, copy, nonatomic) NSString *EV0IrisIdentifier; // ivar: _EV0IrisIdentifier
@property (readonly, copy, nonatomic) NSURL *EV0LocalSpatialOverCaptureVideoDestinationURL; // ivar: _EV0LocalSpatialOverCaptureVideoDestinationURL
@property (readonly, copy, nonatomic) NSURL *EV0LocalVideoDestinationURL; // ivar: _EV0LocalVideoDestinationURL
@property (readonly, copy, nonatomic) NSString *EV0PersistenceUUID; // ivar: _EV0PersistenceUUID
@property (readonly, copy, nonatomic) NSString *EV0VideoPersistenceUUID; // ivar: _EV0VideoPersistenceUUID
@property (readonly, nonatomic) NSArray *adjustmentFilters; // ivar: _adjustmentFilters
@property (readonly, nonatomic) NSInteger aspectRatioCrop; // ivar: _aspectRatioCrop
@property (readonly, copy, nonatomic) NSString *burstIdentifier; // ivar: _burstIdentifier
@property (readonly, nonatomic) NSInteger ctmCaptureType; // ivar: _ctmCaptureType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<CAMStillImageCaptureRequestDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGSize desiredPreviewSize; // ivar: _desiredPreviewSize
@property (readonly, nonatomic) NSInteger effectFilterType; // ivar: _effectFilterType
@property (readonly, nonatomic) NSInteger flashMode; // ivar: _flashMode
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger hdrMode; // ivar: _hdrMode
@property (readonly, copy, nonatomic) NSString *irisIdentifier; // ivar: _irisIdentifier
@property (readonly, nonatomic) NSInteger irisMode; // ivar: _irisMode
@property (readonly, nonatomic) NSInteger lightingEffectType; // ivar: _lightingEffectType
@property (readonly, copy, nonatomic) NSURL *localCTMSpatialOverCaptureVideoDestinationURL; // ivar: _localCTMSpatialOverCaptureVideoDestinationURL
@property (readonly, copy, nonatomic) NSURL *localCTMVideoDestinationURL; // ivar: _localCTMVideoDestinationURL
@property (readonly, copy, nonatomic) NSURL *localSpatialOverCaptureVideoDestinationURL; // ivar: _localSpatialOverCaptureVideoDestinationURL
@property (readonly, copy, nonatomic) NSURL *localVideoDestinationURL; // ivar: _localVideoDestinationURL
@property (readonly, nonatomic) CGFloat loggingVideoZoomFactor; // ivar: _loggingVideoZoomFactor
@property (readonly, nonatomic) NSInteger loggingZoomInteractionType; // ivar: _loggingZoomInteractionType
@property (readonly, nonatomic) NSInteger lowLightMode; // ivar: _lowLightMode
@property (readonly, nonatomic) NSUInteger maximumBurstLength; // ivar: _maximumBurstLength
@property (readonly, nonatomic) NSArray *originalFilters; // ivar: _originalFilters
@property (readonly, nonatomic) NSInteger photoQualityPrioritization; // ivar: _photoQualityPrioritization
@property (readonly, nonatomic) CAMSemanticStyle *semanticStyle; // ivar: _semanticStyle
@property (readonly, nonatomic) BOOL stillDuringVideo; // ivar: _stillDuringVideo
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *textAnalysisIdentifier; // ivar: _textAnalysisIdentifier
@property (readonly, copy, nonatomic) CAMTextRegionResult *textAnalysisRegion; // ivar: _textAnalysisRegion
@property (readonly, copy, nonatomic) NSString *timelapseIdentifier; // ivar: _timelapseIdentifier
@property (readonly, nonatomic) NSUInteger userInitiationTime; // ivar: _userInitiationTime
@property (readonly, copy, nonatomic) NSString *videoPersistenceUUID; // ivar: _videoPersistenceUUID
@property (readonly, nonatomic) BOOL wantsAudioForCapture; // ivar: _wantsAudioForCapture
@property (readonly, nonatomic) BOOL wantsAutoDualCameraFusion; // ivar: _wantsAutoDualCameraFusion
@property (readonly, nonatomic) BOOL wantsHighResolutionStills; // ivar: _wantsHighResolutionStills
@property (readonly, nonatomic) BOOL wantsPortraitEffect; // ivar: _wantsPortraitEffect
@property (readonly, nonatomic) BOOL wantsSemanticSceneFilter; // ivar: _wantsSemanticSceneFilter
@property (readonly, nonatomic) BOOL wantsSpatialOverCapture; // ivar: _wantsSpatialOverCapture
@property (readonly, nonatomic) BOOL wantsSquareCrop; // ivar: _wantsSquareCrop


-(BOOL)hasAdjustments;
-(BOOL)isEV0LocalVideoDestinationURL:(id)arg0 ;
-(BOOL)isLocalSpatialOverCaptureVideoDestinationURL:(id)arg0 ;
-(BOOL)shouldProtectPersistenceForVideo;
-(id)captureRequest;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithRequest:(id)arg0 distinctPersistence:(BOOL)arg1 ;
-(id)irisIdentifierForEV0:(BOOL)arg0 ;
-(id)irisLocalSpatialOverCaptureVideoDestinationForEV0:(BOOL)arg0 ;
-(id)irisLocalVideoDestinationURLForEV0:(BOOL)arg0 ;
-(id)irisStillImagePersistenceUUIDForEV0:(BOOL)arg0 ;
-(id)irisVideoPersistenceUUIDForEV0:(BOOL)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif