// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHMEDIAFORMATCONVERSIONSOURCE_H
#define PHMEDIAFORMATCONVERSIONSOURCE_H

@class NSString;


#import "PHMediaFormatConversionContent.h"

@interface PHMediaFormatConversionSource : PHMediaFormatConversionContent

@property NSInteger accessibilityDescriptionMetadataStatus; // ivar: _accessibilityDescriptionMetadataStatus
@property NSInteger captionMetadataStatus; // ivar: _captionMetadataStatus
@property BOOL containsHEIFImage; // ivar: _containsHEIFImage
@property (readonly) BOOL containsHEVCVideo;
@property BOOL containsProResVideoWithFormatEligibleForTranscoding; // ivar: _containsProResVideoWithFormatEligibleForTranscoding
@property BOOL containsVideoWithFormatEligibleForTranscoding; // ivar: _containsVideoWithFormatEligibleForTranscoding
@property BOOL didCheckForLivePhotoPairingIdentifier; // ivar: _didCheckForLivePhotoPairingIdentifier
@property CGSize imageDimensions; // ivar: _imageDimensions
@property (retain, nonatomic) NSString *livePhotoPairingIdentifier; // ivar: _livePhotoPairingIdentifier
@property NSInteger locationMetadataStatus; // ivar: _locationMetadataStatus
@property BOOL preflighted; // ivar: _preflighted
@property (copy) NSString *renderOriginatingSignature; // ivar: _renderOriginatingSignature
@property (retain) id *transcodingEligibleVideoTrackFormatDescription; // ivar: _transcodingEligibleVideoTrackFormatDescription


+(Class)requestClass;
+(id)imageSourceForFileURL:(id)arg0 ;
+(id)imageSourceForFileURL:(id)arg0 dimensions:(struct CGSize )arg1 ;
+(id)sourceForFileURL:(id)arg0 ;
+(id)sourceForFileURL:(id)arg0 mediaType:(NSInteger)arg1 imageDimensions:(struct CGSize )arg2 ;
+(id)videoSourceForFileURL:(id)arg0 ;
-(BOOL)determineMediaTypeFromPathExtensionWithError:(*id)arg0 ;
-(BOOL)imageSourceMetadataByTraversingKeys:(id)arg0 metadataValue:(*id)arg1 ;
-(BOOL)isHDR;
-(BOOL)preflightWithError:(*id)arg0 ;
-(BOOL)valueExistsInDictionary:(id)arg0 byTraversingKeys:(id)arg1 value:(*id)arg2 ;
-(NSInteger)imageSourceAccessibilityDescriptionMetadataStatus;
-(NSInteger)imageSourceCaptionMetadataStatus;
-(NSInteger)imageSourceLocationMetadataStatus;
-(NSInteger)videoSourceAccessibilityDescriptionMetadataStatus;
-(NSInteger)videoSourceCaptionMetadataStatus;
-(NSInteger)videoSourceLocationMetadataStatus;
-(void)checkForAccessibilityDescriptionData;
-(void)checkForCaptionData;
-(void)checkForHEIFImage;
-(void)checkForLivePhotoPairingIdentifier;
-(void)checkForLocationData;
-(void)checkForVideoEligibleForTranscoding;
-(void)markAccessibilityDescriptionMetadataAsCheckedWithStatus:(NSInteger)arg0 ;
-(void)markCaptionMetadataAsCheckedWithStatus:(NSInteger)arg0 ;
-(void)markLivePhotoPairingIdentifierAsCheckedWithValue:(id)arg0 ;
-(void)markLocationMetadataAsCheckedWithStatus:(NSInteger)arg0 ;


@end


#endif