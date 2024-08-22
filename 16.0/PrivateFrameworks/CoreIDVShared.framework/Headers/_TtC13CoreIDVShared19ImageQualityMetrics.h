// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC13COREIDVSHARED19IMAGEQUALITYMETRICS_H
#define _TTC13COREIDVSHARED19IMAGEQUALITYMETRICS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC13CoreIDVShared19ImageQualityMetrics : NSObject <NSSecureCoding>

 {
    ? blurriness;
    ? exposure;
    ? cardDistortion;
    ? faceToImageRatio;
    ? faceCenteredRatio;
    ? headPitch;
    ? headRoll;
    ? headYaw;
    ? blinkingConfidence;
    ? prescriptionConfidence;
    ? sunglassesConfidence;
    ? facemaskConfidence;
    ? headgearConfidence;
    ? captureTime;
    ? faceCaptureQuality;
    ? faceConfidences;
    ? numFaces;
    ? luxLevel;
    ? skinTone;
    ? pdf417Detected;
    ? isAAMVACompliant;
    ? isAutoCaptured;
    ? issuerNumber;
    ? documentType;
    ? originalVertices;
    ? targetVertices;
    ? fuzzyMatchAssessment;
    ? modelDecision;
    ? modelVersion;
    ? exploration;
    ? rescanCount;
    ? errorCode;
}


@property (nonatomic, readonly) NSString *debugDescription;


+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif