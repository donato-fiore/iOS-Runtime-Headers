// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LPITUNESMEDIAPODCASTEPISODEMETADATA_H
#define LPITUNESMEDIAPODCASTEPISODEMETADATA_H

@class NSString, NSArray, NSDate;
@protocol LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataBackwardCompatibility, LPLinkMetadataStoreTransformer;


#import "LPSpecializationMetadata.h"
#import "LPImage.h"
#import "LPArtworkMetadata.h"

@interface LPiTunesMediaPodcastEpisodeMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataBackwardCompatibility, LPLinkMetadataStoreTransformer>



@property (copy, nonatomic) NSString *artist; // ivar: _artist
@property (retain, nonatomic) LPImage *artwork; // ivar: _artwork
@property (copy, nonatomic) LPArtworkMetadata *artworkMetadata; // ivar: _artworkMetadata
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *episodeName; // ivar: _episodeName
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *offers; // ivar: _offers
@property (copy, nonatomic) NSString *podcastName; // ivar: _podcastName
@property (copy, nonatomic) NSDate *releaseDate; // ivar: _releaseDate
@property (copy, nonatomic) NSString *storeFrontIdentifier; // ivar: _storeFrontIdentifier
@property (copy, nonatomic) NSString *storeIdentifier; // ivar: _storeIdentifier
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(BOOL)canGeneratePresentationPropertiesForURL:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)presentationPropertiesForTransformer:(id)arg0 ;
-(id)previewImageForTransformer:(id)arg0 ;
-(id)previewSummaryForTransformer:(id)arg0 ;
-(id)storeIdentifierForTransformer:(id)arg0 ;
-(void)_enumerateAsynchronousFields:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)populateMetadataForBackwardCompatibility:(id)arg0 ;


@end


#endif