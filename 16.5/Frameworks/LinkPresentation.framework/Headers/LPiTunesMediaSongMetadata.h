// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPITUNESMEDIASONGMETADATA_H
#define LPITUNESMEDIASONGMETADATA_H

@class NSString, NSArray, NSURL;
@protocol LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataBackwardCompatibility, LPLinkMetadataStoreTransformer, LPLinkMetadataStatusTransformer, LPLinkMetadataSourceApplicationTransformer;


#import "LPSpecializationMetadata.h"
#import "LPImage.h"
#import "LPArtworkMetadata.h"
#import "LPLyricExcerptMetadata.h"

@interface LPiTunesMediaSongMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataBackwardCompatibility, LPLinkMetadataStoreTransformer, LPLinkMetadataStatusTransformer, LPLinkMetadataSourceApplicationTransformer>



@property (copy, nonatomic) NSString *album; // ivar: _album
@property (copy, nonatomic) NSString *artist; // ivar: _artist
@property (retain, nonatomic) LPImage *artwork; // ivar: _artwork
@property (copy, nonatomic) LPArtworkMetadata *artworkMetadata; // ivar: _artworkMetadata
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) LPLyricExcerptMetadata *lyricExcerpt; // ivar: _lyricExcerpt
@property (copy, nonatomic) NSString *lyrics; // ivar: _lyrics
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSArray *offers; // ivar: _offers
@property (copy, nonatomic) NSURL *previewURL; // ivar: _previewURL
@property (copy, nonatomic) NSString *storeFrontIdentifier; // ivar: _storeFrontIdentifier
@property (copy, nonatomic) NSString *storeIdentifier; // ivar: _storeIdentifier
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+(id)statusForText:(id)arg0 ;
+(id)transcriptBoldTextFont;
-(BOOL)canGeneratePresentationPropertiesForURL:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)actionURLForTransformer:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)inlinePlaybackInformationForURL:(id)arg0 ;
-(id)presentationPropertiesForTransformer:(id)arg0 ;
-(id)previewImageForTransformer:(id)arg0 ;
-(id)previewSummaryForTransformer:(id)arg0 ;
-(id)sourceApplicationMetadataForTransformer:(id)arg0 ;
-(id)statusForTransformer:(id)arg0 ;
-(id)storeIdentifierForTransformer:(id)arg0 ;
-(void)_enumerateAsynchronousFields:(id)arg0 ;
-(void)destroyForTransformer:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)initializeForTransformer:(id)arg0 ;
-(void)populateMetadataForBackwardCompatibility:(id)arg0 ;


@end


#endif