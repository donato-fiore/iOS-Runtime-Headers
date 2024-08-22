// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMMUTABLESTILLIMAGECAPTUREREQUEST_H
#define CAMMUTABLESTILLIMAGECAPTUREREQUEST_H

@class NSString, NSURL, NSArray, CLHeading, CLLocation;
@protocol CAMMutableCaptureRequestPersistence, CAMMutableCaptureRequestLocation, CAMMutableCaptureRequestPower, CAMMutableCaptureRequestOrigin, CAMMutableCaptureRequestEncodingBehavior, CAMStillImageCaptureRequestDelegate;


#import "CAMStillImageCaptureRequest.h"
#import "CAMAnalyticsCaptureEvent.h"
#import "CAMSemanticStyle.h"
#import "CAMTextRegionResult.h"

@interface CAMMutableStillImageCaptureRequest : CAMStillImageCaptureRequest <CAMMutableCaptureRequestPersistence, CAMMutableCaptureRequestLocation, CAMMutableCaptureRequestPower, CAMMutableCaptureRequestOrigin, CAMMutableCaptureRequestEncodingBehavior>



@property (copy, nonatomic) NSString *EV0IrisIdentifier;
@property (copy, nonatomic) NSURL *EV0LocalSpatialOverCaptureVideoDestinationURL;
@property (copy, nonatomic) NSURL *EV0LocalVideoDestinationURL;
@property (copy, nonatomic) NSString *EV0PersistenceUUID;
@property (copy, nonatomic) NSString *EV0VideoPersistenceUUID;
@property (retain, nonatomic) NSArray *adjustmentFilters;
@property (retain, nonatomic) CAMAnalyticsCaptureEvent *analyticsEvent;
@property (nonatomic) NSInteger aspectRatioCrop;
@property (nonatomic) unsigned int assertionIdentifier;
@property (copy, nonatomic) NSString *burstIdentifier;
@property (nonatomic) NSInteger captureDevice;
@property (nonatomic, getter=isCaptureMirrored) BOOL captureMirrored;
@property (nonatomic) NSInteger captureMode;
@property (nonatomic) NSInteger captureOrientation;
@property (nonatomic) NSInteger ctmCaptureType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSUInteger deferredPersistenceOptions;
@property (weak, nonatomic) NSObject<CAMStillImageCaptureRequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGSize desiredPreviewSize;
@property (nonatomic) NSInteger effectFilterType;
@property (nonatomic) NSInteger flashMode;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger hdrMode;
@property (retain, nonatomic) CLHeading *heading;
@property (copy, nonatomic) NSString *irisIdentifier;
@property (nonatomic) NSInteger irisMode;
@property (nonatomic) NSInteger lightingEffectType;
@property (copy, nonatomic) NSURL *localCTMSpatialOverCaptureVideoDestinationURL;
@property (copy, nonatomic) NSURL *localCTMVideoDestinationURL;
@property (copy, nonatomic) NSURL *localDestinationURL;
@property (copy, nonatomic) NSURL *localSpatialOverCaptureVideoDestinationURL;
@property (copy, nonatomic) NSURL *localVideoDestinationURL;
@property (retain, nonatomic) CLLocation *location;
@property (nonatomic) CGFloat loggingVideoZoomFactor;
@property (nonatomic) NSInteger loggingZoomInteractionType;
@property (nonatomic) NSInteger lowLightMode;
@property (nonatomic) NSUInteger maximumBurstLength;
@property (nonatomic) NSInteger origin;
@property (retain, nonatomic) NSArray *originalFilters;
@property (nonatomic) NSInteger persistenceOptions;
@property (copy, nonatomic) NSString *persistenceUUID;
@property (nonatomic) NSInteger photoEncodingBehavior;
@property (nonatomic) NSInteger photoQualityPrioritization;
@property (nonatomic) NSInteger pressType;
@property (retain, nonatomic) CAMSemanticStyle *semanticStyle;
@property (nonatomic) unsigned short sessionIdentifier;
@property (nonatomic) BOOL shouldDelayRemotePersistence;
@property (nonatomic) BOOL shouldExtractDiagnosticsFromMetadata;
@property (nonatomic) BOOL shouldPersistDiagnosticsToSidecar;
@property (nonatomic) BOOL stillDuringVideo;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger temporaryPersistenceOptions;
@property (copy, nonatomic) NSString *textAnalysisIdentifier;
@property (copy, nonatomic) CAMTextRegionResult *textAnalysisRegion;
@property (copy, nonatomic) NSString *timelapseIdentifier;
@property (nonatomic) NSUInteger userInitiationTime;
@property (nonatomic) NSInteger videoEncodingBehavior;
@property (copy, nonatomic) NSString *videoPersistenceUUID;
@property (nonatomic) BOOL wantsAudioForCapture;
@property (nonatomic) BOOL wantsAutoDualCameraFusion;
@property (nonatomic) BOOL wantsHighResolutionStills;
@property (nonatomic) BOOL wantsPortraitEffect;
@property (nonatomic) BOOL wantsSemanticSceneFilter;
@property (nonatomic) BOOL wantsSpatialOverCapture;
@property (nonatomic) BOOL wantsSquareCrop;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)setAspectRatio:(NSInteger)arg0 ;
-(void)setCapturedFromPhotoBooth:(BOOL)arg0 ;


@end


#endif