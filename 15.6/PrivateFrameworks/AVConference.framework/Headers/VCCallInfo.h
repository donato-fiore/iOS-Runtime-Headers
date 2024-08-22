// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCCALLINFO_H
#define VCCALLINFO_H

@class NSString;

#import <Foundation/Foundation.h>

#import "SDPMini.h"

@interface VCCallInfo : NSObject {
    BOOL is4x;
    CGFloat firstDegradedMeasure;
    CGFloat videoDegradedThreshold;
    CGFloat _videoNearDegradedThreshold;
}


@property (copy, nonatomic) NSString *OSVersion; // ivar: _osVersion
@property (nonatomic) unsigned int auNumber; // ivar: auNumber
@property unsigned int callID; // ivar: callID
@property (nonatomic) unsigned int cellBandwidth; // ivar: cellBandwidth
@property (copy, nonatomic) NSString *deviceType; // ivar: _deviceType
@property (copy, nonatomic) NSString *frameworkVersion; // ivar: _frameworkVersion
@property (readonly, nonatomic) BOOL isHDVideoSupported;
@property (readonly, nonatomic) BOOL isIOS; // ivar: isIOS
@property (nonatomic) BOOL isPreLionOS; // ivar: isPreLionOS
@property (nonatomic) BOOL isVideoQualityDegraded; // ivar: isVideoQualityDegraded
@property (nonatomic) BOOL isVideoQualityNearDegraded; // ivar: _isVideoQualityNearDegraded
@property (nonatomic) unsigned int maxBandwidth; // ivar: maxBandwidth
@property (copy, nonatomic) NSString *participantID; // ivar: participantID
@property (readonly, nonatomic) BOOL requiresImplicitFeatureString;
@property (retain, nonatomic) SDPMini *sdp; // ivar: sdp
@property (retain, nonatomic) NSString *sdpString; // ivar: sdpString
@property (readonly) BOOL supportsDynamicContentsRectWithAspectPreservation;
@property (nonatomic) BOOL supportsDynamicMaxBitrate; // ivar: supportsDynamicMaxBitrate
@property (nonatomic) BOOL supportsSKEOptimization; // ivar: supportsSKEOptimization
@property (readonly, nonatomic) BOOL supportsSpecialAACBundle; // ivar: supportsSpecialAACBundle
@property (nonatomic) unsigned char u8Version; // ivar: u8Version
@property (readonly, nonatomic) BOOL useNewPLCalc; // ivar: useNewPLCalc
@property (readonly, nonatomic) BOOL usesInitialFECImplementation; // ivar: usesInitialFECImplementation
@property (nonatomic) BOOL videoIsPaused; // ivar: videoIsPaused
@property (nonatomic) unsigned int visibleRectCropping; // ivar: visibleRectCropping


+(unsigned char)getVCCurrentVersion;
-(BOOL)supportSDPCompression;
-(BOOL)updateWithLastDecodedFrameTime:(CGFloat)arg0 time:(CGFloat)arg1 ;
-(id)init;
-(struct VoiceIOFarEndVersionInfo )audioVersionInfo:(BOOL)arg0 ;
-(void)dealloc;
-(void)setUserAgent:(id)arg0 ;


@end


#endif