// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMCAPTUREREQUEST_H
#define CAMCAPTUREREQUEST_H

@class NSArray, NSString, CLHeading, NSURL, CLLocation, NSDictionary;
@protocol NSCopying, CAMDistinctPersistenceCopying;

#import <Foundation/Foundation.h>

#import "CAMAnalyticsCaptureEvent.h"

@interface CAMCaptureRequest : NSObject <NSCopying, CAMDistinctPersistenceCopying>



@property (readonly, nonatomic) CAMAnalyticsCaptureEvent *analyticsEvent; // ivar: _analyticsEvent
@property (readonly, nonatomic) unsigned int assertionIdentifier; // ivar: _assertionIdentifier
@property (readonly, nonatomic) NSInteger captureDevice; // ivar: _captureDevice
@property (readonly, nonatomic) NSInteger captureDevicePosition;
@property (readonly, nonatomic, getter=isCaptureMirrored) BOOL captureMirrored; // ivar: _captureMirrored
@property (readonly, nonatomic) NSInteger captureMode; // ivar: _captureMode
@property (readonly, nonatomic) NSInteger captureOrientation; // ivar: _captureOrientation
@property (readonly, nonatomic) BOOL capturedFromPhotoBooth; // ivar: _capturedFromPhotoBooth
@property (readonly, copy, nonatomic) NSArray *contactIDsInProximity; // ivar: _contactIDsInProximity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUInteger deferredPersistenceOptions; // ivar: _deferredPersistenceOptions
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CLHeading *heading; // ivar: _heading
@property (readonly, copy, nonatomic) NSURL *localDestinationURL; // ivar: _localDestinationURL
@property (readonly, nonatomic) CLLocation *location; // ivar: _location
@property (readonly, nonatomic) NSInteger origin; // ivar: _origin
@property (readonly, nonatomic) NSInteger persistenceOptions; // ivar: _persistenceOptions
@property (readonly, copy, nonatomic) NSString *persistenceUUID; // ivar: _persistenceUUID
@property (readonly, nonatomic) NSInteger photoEncodingBehavior; // ivar: _photoEncodingBehavior
@property (readonly, nonatomic) NSInteger pressType; // ivar: _pressType
@property (readonly, nonatomic) unsigned short sessionIdentifier; // ivar: _sessionIdentifier
@property (readonly, copy, nonatomic) NSDictionary *sharedLibraryDiagnostics; // ivar: _sharedLibraryDiagnostics
@property (readonly, nonatomic) NSInteger sharedLibraryMode; // ivar: _sharedLibraryMode
@property (readonly, nonatomic) BOOL shouldDelayRemotePersistence; // ivar: _shouldDelayRemotePersistence
@property (readonly, nonatomic) BOOL shouldExtractDiagnosticsFromMetadata; // ivar: _shouldExtractDiagnosticsFromMetadata
@property (readonly, nonatomic) BOOL shouldPersistDiagnosticsToSidecar; // ivar: _shouldPersistDiagnosticsToSidecar
@property (readonly, nonatomic) BOOL shouldPersistToIncomingDirectory;
@property (readonly, nonatomic) BOOL shouldProtectPersistence;
@property (readonly, nonatomic) BOOL shouldProtectPersistenceForVideo;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger temporaryPersistenceOptions; // ivar: _temporaryPersistenceOptions
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) NSInteger videoEncodingBehavior; // ivar: _videoEncodingBehavior


+(BOOL)shouldPersistToIncomingDirectoryWithPersistenceOptions:(NSInteger)arg0 temporaryPersistenceOptions:(NSInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)distinctPersistenceCopy;
-(id)init;
-(id)initWithRequest:(id)arg0 distinctPersistence:(BOOL)arg1 includeAnalytics:(BOOL)arg2 ;
-(id)initWithType:(NSInteger)arg0 ;


@end


#endif