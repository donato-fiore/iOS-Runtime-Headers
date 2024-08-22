// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMMUTABLEVIDEOCAPTUREREQUEST_H
#define CAMMUTABLEVIDEOCAPTUREREQUEST_H

@class NSString, CLHeading, NSURL, CLLocation;
@protocol CAMMutableCaptureRequestPersistence, CAMMutableCaptureRequestLocation, CAMMutableCaptureRequestPower, CAMMutableCaptureRequestOrigin, CAMMutableCaptureRequestEncodingBehavior, CAMVideoCaptureRequestDelegate;


#import "CAMVideoCaptureRequest.h"
#import "CAMAnalyticsCaptureEvent.h"

@interface CAMMutableVideoCaptureRequest : CAMVideoCaptureRequest <CAMMutableCaptureRequestPersistence, CAMMutableCaptureRequestLocation, CAMMutableCaptureRequestPower, CAMMutableCaptureRequestOrigin, CAMMutableCaptureRequestEncodingBehavior>



@property (retain, nonatomic) CAMAnalyticsCaptureEvent *analyticsEvent;
@property (nonatomic) unsigned int assertionIdentifier;
@property (nonatomic) NSInteger captureDevice;
@property (nonatomic, getter=isCaptureMirrored) BOOL captureMirrored;
@property (nonatomic) NSInteger captureMode;
@property (nonatomic) NSInteger captureOrientation;
@property (nonatomic) NSInteger captureVideoConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSUInteger deferredPersistenceOptions;
@property (weak, nonatomic) NSObject<CAMVideoCaptureRequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CLHeading *heading;
@property (copy, nonatomic) NSURL *localDestinationURL;
@property (retain, nonatomic) CLLocation *location;
@property (nonatomic) CGFloat maximumRecordedDuration;
@property (nonatomic) NSInteger maximumRecordedFileSize;
@property (nonatomic) NSInteger origin;
@property (nonatomic) NSInteger persistenceOptions;
@property (copy, nonatomic) NSString *persistenceUUID;
@property (nonatomic) NSInteger photoEncodingBehavior;
@property (nonatomic) NSInteger pressType;
@property (nonatomic) NSInteger remainingDiskUsageThreshold;
@property (nonatomic) unsigned short sessionIdentifier;
@property (nonatomic) BOOL shouldDelayRemotePersistence;
@property (nonatomic) BOOL shouldExtractDiagnosticsFromMetadata;
@property (nonatomic) BOOL shouldGenerateVideoPreviewImage;
@property (nonatomic) BOOL shouldPersistDiagnosticsToSidecar;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger temporaryPersistenceOptions;
@property (nonatomic, getter=isTimelapse) BOOL timelapse;
@property (nonatomic) NSInteger torchMode;
@property (nonatomic) CGFloat userInitationTimestamp;
@property (nonatomic) NSInteger videoEncodingBehavior;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif