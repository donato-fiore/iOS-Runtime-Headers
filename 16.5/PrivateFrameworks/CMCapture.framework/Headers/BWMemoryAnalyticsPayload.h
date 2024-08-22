// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWMEMORYANALYTICSPAYLOAD_H
#define BWMEMORYANALYTICSPAYLOAD_H

@class NSDate, NSString;
@protocol BWCoreAnalyticsPayload;

#import <Foundation/Foundation.h>


@interface BWMemoryAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

 {
    int _buttonMashRate0Counter;
    NSDate *_creationTime;
    BOOL _captureDevicePositionFront;
    BOOL _captureDevicePositionBack;
    BOOL _captureDeviceTypeBravo;
    BOOL _captureDeviceTypeLiDAR;
    BOOL _captureDeviceTypeOther;
    BOOL _captureDeviceTypePearl;
    BOOL _captureDeviceTypeSuperBravo;
    BOOL _captureDeviceTypeWideBravo;
    BOOL _capturePortTypeBackSuperWide;
    BOOL _capturePortTypeBackTelephoto;
    BOOL _capturePortTypeOther;
    BOOL _capturePortTypeBack;
    BOOL _captureResolutionDefault;
    BOOL _captureResolutionEnhanced;
    BOOL _captureResolutionUltraHigh;
    BOOL _captureTypeUB;
    BOOL _captureTypeDeepFusion;
    BOOL _captureTypeDigitalFlash;
    BOOL _captureTypeOther;
    BOOL _captureTypeWYSIWYG;
    unsigned int _maxButtonMashCount;
    unsigned int _captureCount;
}


@property (nonatomic) BOOL burst; // ivar: _burst
@property (copy, nonatomic) NSString *clientApplicationID; // ivar: _clientApplicationID
@property (nonatomic) BOOL clientIsCameraOrDerivative; // ivar: _clientIsCameraOrDerivative
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int deviceType; // ivar: _deviceType
@property (nonatomic) BOOL graphContainsDepthDataPipeline; // ivar: _graphContainsDepthDataPipeline
@property (nonatomic) BOOL graphContainsMovieFilePipeline; // ivar: _graphContainsMovieFilePipeline
@property (nonatomic) BOOL graphHasVideoDataOutput; // ivar: _graphHasVideoDataOutput
@property (nonatomic) BOOL greenGhostMitigation; // ivar: _greenGhostMitigation
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL intelligentDistortionCorrection; // ivar: _intelligentDistortionCorrection
@property (nonatomic) BOOL livePhoto; // ivar: _livePhoto
@property (nonatomic) NSUInteger peakFootprintDifference; // ivar: _peakFootprintDifference
@property (nonatomic) BOOL proRaw; // ivar: _proRaw
@property (nonatomic) BOOL proRawPlusProcessedPhotoEncoding; // ivar: _proRawPlusProcessedPhotoEncoding
@property (nonatomic) BOOL quickTakeVideo; // ivar: _quickTakeVideo
@property (nonatomic) BOOL scaledStillCaptureTaken; // ivar: _scaledStillCaptureTaken
@property (readonly) Class superclass;


-(id)eventDictionary;
-(id)eventName;
-(id)init;
-(void)addCaptureType:(int)arg0 ;
-(void)addDeviceType:(int)arg0 ;
-(void)addHighResolutionFlavor:(int)arg0 ;
-(void)addPortType:(id)arg0 ;
-(void)dealloc;
-(void)reset;
-(void)updateButtonMash:(BOOL)arg0 ;


@end


#endif