// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMSTILLIMAGELOCALPERSISTENCERESULT_H
#define CAMSTILLIMAGELOCALPERSISTENCERESULT_H

@class NSData, NSDate, NSError, NSURL, NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "CAMStillImageCaptureResult.h"

@interface CAMStillImageLocalPersistenceResult : NSObject

@property (readonly, nonatomic) NSData *adjustmentsData; // ivar: _adjustmentsData
@property (readonly, nonatomic) CAMStillImageCaptureResult *captureResult; // ivar: _captureResult
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSInteger imageOrientation; // ivar: _imageOrientation
@property (readonly, copy, nonatomic) NSURL *linkedDestinationURL; // ivar: _linkedDestinationURL
@property (readonly, copy, nonatomic) NSURL *localAdjustmentsURL; // ivar: _localAdjustmentsURL
@property (readonly, copy, nonatomic) NSURL *localDestinationURL; // ivar: _localDestinationURL
@property (readonly, copy, nonatomic) NSString *localDiagnosticsPath; // ivar: _localDiagnosticsPath
@property (readonly, copy, nonatomic) NSString *localFilteredPreviewPath; // ivar: _localFilteredPreviewPath
@property (readonly, copy, nonatomic) NSString *localPersistenceUUID; // ivar: _localPersistenceUUID
@property (readonly, copy, nonatomic) NSURL *localPrivateMetadataFileURL; // ivar: _localPrivateMetadataFileURL
@property (readonly, copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly, copy, nonatomic) NSString *uniformTypeIdentifier; // ivar: _uniformTypeIdentifier


-(id)initWithCaptureResult:(id)arg0 atURL:(id)arg1 linkedURL:(id)arg2 localAdjustmentsURL:(id)arg3 diagnosticsPath:(id)arg4 filteredPreviewPath:(id)arg5 withUUID:(id)arg6 creationDate:(id)arg7 uniformTypeIdentifier:(id)arg8 orientation:(NSInteger)arg9 metadata:(id)arg10 adjustmentsData:(id)arg11 localPrivateMetadataFileURL:(id)arg12 error:(id)arg13 ;


@end


#endif