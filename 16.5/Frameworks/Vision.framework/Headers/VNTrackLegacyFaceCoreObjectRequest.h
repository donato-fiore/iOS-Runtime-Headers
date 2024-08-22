// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNTRACKLEGACYFACECOREOBJECTREQUEST_H
#define VNTRACKLEGACYFACECOREOBJECTREQUEST_H

@class NSNumber;


#import "VNTrackObjectRequest.h"

@interface VNTrackLegacyFaceCoreObjectRequest : VNTrackObjectRequest

@property (nonatomic) BOOL faceCoreEnhanceEyesAndMouthLocalization; // ivar: _faceCoreEnhanceEyesAndMouthLocalization
@property (nonatomic) BOOL faceCoreExtractBlink; // ivar: _faceCoreExtractBlink
@property (nonatomic) BOOL faceCoreExtractSmile; // ivar: _faceCoreExtractSmile
@property (nonatomic) float faceCoreKalmanFilter; // ivar: _faceCoreKalmanFilter
@property (retain, nonatomic) NSNumber *faceCoreMinFaceSize; // ivar: _faceCoreMinFaceSize
@property (retain, nonatomic) NSNumber *faceCoreNumberOfDetectionAngles; // ivar: _faceCoreNumberOfDetectionAngles


+(id)defaultProcessingDeviceForRevision:(NSUInteger)arg0 ;
+(id)supportedPrivateRevisions;
+(id)trackerTypeForRequestRevision:(NSUInteger)arg0 error:(*id)arg1 ;
+(unsigned int)frameCVPixelBufferFormatForRequestRevision:(NSUInteger)arg0 ;
-(id)initWithDetectedObjectObservation:(id)arg0 ;
-(void)populateDetectorProcessingOptions:(id)arg0 session:(id)arg1 ;


@end


#endif