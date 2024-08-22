// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHMEDIAFORMATCONVERSIONREQUEST_H
#define PHMEDIAFORMATCONVERSIONREQUEST_H

@class NSString, NSDate, NSTimeZone, PFMediaCapabilities, NSURL, NSError, NSUUID, CLLocation, NSProgress;
@protocol NSProgressReporting;

#import <Foundation/Foundation.h>

#import "PHMediaFormatConversionDestination.h"
#import "PHMediaFormatConversionCompositeRequest.h"
#import "PHMediaFormatConversionSource.h"

@interface PHMediaFormatConversionRequest : NSObject <NSProgressReporting>

 {
    CGFloat _formatConversionExpansionFactor;
}


@property (readonly, copy) NSString *accessibilityDescription; // ivar: _accessibilityDescription
@property (readonly) NSInteger accessibilityDescriptionMetadataBehavior; // ivar: _accessibilityDescriptionMetadataBehavior
@property (readonly) NSInteger backwardsCompatibilityStatus;
@property (readonly, copy) NSString *caption; // ivar: _caption
@property (readonly) NSInteger captionMetadataBehavior; // ivar: _captionMetadataBehavior
@property (readonly) NSDate *creationDate; // ivar: _creationDate
@property (readonly) NSInteger creationDateMetadataBehavior; // ivar: _creationDateMetadataBehavior
@property (readonly) NSTimeZone *creationDateTimeZone; // ivar: _creationDateTimeZone
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PHMediaFormatConversionDestination *destination; // ivar: _destination
@property (retain) PFMediaCapabilities *destinationCapabilities; // ivar: _destinationCapabilities
@property (retain) NSURL *directoryForTemporaryFiles; // ivar: _directoryForTemporaryFiles
@property (retain) NSError *error; // ivar: _error
@property (readonly) NSUInteger estimatedOutputFileLength;
@property BOOL forceFormatConversion; // ivar: _forceFormatConversion
@property (nonatomic) CGFloat formatConversionExpansionFactor;
@property (readonly) NSUInteger hash;
@property (readonly) NSUUID *identifier; // ivar: _identifier
@property (readonly) BOOL isCompositeRequest;
@property (copy) NSString *livePhotoPairingIdentifier; // ivar: _livePhotoPairingIdentifier
@property NSInteger livePhotoPairingIdentifierBehavior; // ivar: _livePhotoPairingIdentifierBehavior
@property (readonly) CLLocation *location; // ivar: _location
@property (readonly) NSInteger locationMetadataBehavior; // ivar: _locationMetadataBehavior
@property (readonly) NSString *outputFileType;
@property (retain) NSString *outputFilename; // ivar: _outputFilename
@property (readonly) NSString *outputPathExtension;
@property (weak) PHMediaFormatConversionCompositeRequest *parentRequest; // ivar: _parentRequest
@property (nonatomic) NSInteger passthroughConversionAdditionalByteCount; // ivar: _passthroughConversionAdditionalByteCount
@property BOOL preflighted; // ivar: _preflighted
@property (retain) NSProgress *progress; // ivar: _progress
@property (readonly) BOOL requiresFormatConversion;
@property (readonly) BOOL requiresMetadataChanges;
@property (readonly) BOOL requiresPassthroughConversion;
@property BOOL requiresSinglePassVideoConversion; // ivar: _requiresSinglePassVideoConversion
@property BOOL shouldExportAsHDR; // ivar: _shouldExportAsHDR
@property BOOL shouldPadOutputFileToEstimatedLength; // ivar: _shouldPadOutputFileToEstimatedLength
@property BOOL shouldStripLocation; // ivar: _shouldStripLocation
@property (copy) id *singlePassVideoConversionUpdateHandler; // ivar: _singlePassVideoConversionUpdateHandler
@property (retain) PHMediaFormatConversionSource *source; // ivar: _source
@property NSInteger status; // ivar: _status
@property (readonly) NSString *statusString;
@property (readonly) Class superclass;
@property NSInteger transferBehaviorUserPreference; // ivar: _transferBehaviorUserPreference
@property BOOL useTransferBehaviorUserPreference; // ivar: _useTransferBehaviorUserPreference
@property (retain) id *userInfo; // ivar: _userInfo


+(CGFloat)bitsPerPixelWithImageDimensions:(struct CGSize )arg0 fileLength:(NSUInteger)arg1 ;
+(CGFloat)heifToJPEGFactorForBitsPerPixel:(CGFloat)arg0 ;
+(CGFloat)heifToJPEGFactorWithImageDimensions:(struct CGSize )arg0 fileLength:(NSUInteger)arg1 ;
+(id)requestForSource:(id)arg0 destinationCapabilities:(id)arg1 error:(*id)arg2 ;
+(id)stringForRequestStatus:(NSInteger)arg0 ;
-(BOOL)prepareWithError:(*id)arg0 ;
-(BOOL)requiresAccessibilityDescriptionMetadataChange;
-(BOOL)requiresCaptionMetadataChange;
-(BOOL)requiresCreationDateMetadataChange;
-(BOOL)requiresLivePhotoPairingIdentifierChange;
-(BOOL)requiresLocationMetadataChange;
-(BOOL)userPreferenceProhibitsFormatConversion;
-(id)init;
-(void)didFinishProcessing;
-(void)enableSinglePassVideoEncodingWithUpdateHandler:(id)arg0 ;
-(void)markAsCancelled;
-(void)padOutputFileToEstimatedLength;
-(void)preflightWithConversionManager:(id)arg0 ;
-(void)setupProgress;
-(void)updateSinglePassVideoConversionStatus:(NSInteger)arg0 addedRange:(struct _NSRange )arg1 error:(id)arg2 ;


@end


#endif