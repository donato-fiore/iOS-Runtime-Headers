// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMMUTABLEPANORAMACAPTUREREQUEST_H
#define CAMMUTABLEPANORAMACAPTUREREQUEST_H

@class NSArray, NSString, CLHeading, NSURL, CLLocation, NSDictionary;
@protocol CAMMutableCaptureRequestPersistence, CAMMutableCaptureRequestLocation, CAMMutableCaptureRequestPower, CAMMutableCaptureRequestOrigin, CAMMutableCaptureRequestEncodingBehavior, CAMMutableCaptureRequestLibrarySelection, CAMPanoramaCaptureRequestDelegate;


#import "CAMPanoramaCaptureRequest.h"
#import "CAMAnalyticsCaptureEvent.h"

@interface CAMMutablePanoramaCaptureRequest : CAMPanoramaCaptureRequest <CAMMutableCaptureRequestPersistence, CAMMutableCaptureRequestLocation, CAMMutableCaptureRequestPower, CAMMutableCaptureRequestOrigin, CAMMutableCaptureRequestEncodingBehavior, CAMMutableCaptureRequestLibrarySelection>



@property (retain, nonatomic) CAMAnalyticsCaptureEvent *analyticsEvent;
@property (nonatomic) unsigned int assertionIdentifier;
@property (nonatomic) NSInteger captureDevice;
@property (nonatomic) NSInteger captureMode;
@property (nonatomic) NSInteger captureOrientation;
@property (copy, nonatomic) NSArray *contactIDsInProximity;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSUInteger deferredPersistenceOptions;
@property (weak, nonatomic) NSObject<CAMPanoramaCaptureRequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CLHeading *heading;
@property (copy, nonatomic) NSURL *localDestinationURL;
@property (retain, nonatomic) CLLocation *location;
@property (nonatomic) CGFloat loggingVideoZoomFactor;
@property (nonatomic) NSInteger loggingZoomInteractionType;
@property (nonatomic) NSInteger origin;
@property (nonatomic) NSInteger persistenceOptions;
@property (copy, nonatomic) NSString *persistenceUUID;
@property (nonatomic) NSInteger photoEncodingBehavior;
@property (nonatomic) NSInteger pressType;
@property (nonatomic) unsigned short sessionIdentifier;
@property (copy, nonatomic) NSDictionary *sharedLibraryDiagnostics;
@property (nonatomic) NSInteger sharedLibraryMode;
@property (nonatomic) BOOL shouldDelayRemotePersistence;
@property (nonatomic) BOOL shouldExtractDiagnosticsFromMetadata;
@property (nonatomic) BOOL shouldPersistDiagnosticsToSidecar;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger temporaryPersistenceOptions;
@property (nonatomic) NSInteger videoEncodingBehavior;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif