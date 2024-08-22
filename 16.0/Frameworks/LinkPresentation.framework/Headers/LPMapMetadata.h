// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPMAPMETADATA_H
#define LPMAPMETADATA_H

@class NSString, CNPostalAddress, NSNumber;
@protocol LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataFallbackIconTransformer, LPLinkMetadataBackwardCompatibility;


#import "LPSpecializationMetadata.h"
#import "LPImage.h"

@interface LPMapMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataFallbackIconTransformer, LPLinkMetadataBackwardCompatibility>



@property (copy, nonatomic) NSString *address; // ivar: _address
@property (copy, nonatomic) CNPostalAddress *addressComponents; // ivar: _addressComponents
@property (copy, nonatomic) NSString *category; // ivar: _category
@property (retain, nonatomic) LPImage *categoryIcon; // ivar: _categoryIcon
@property (retain, nonatomic) LPImage *darkImage; // ivar: _darkImage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *directionsDestinationAddress; // ivar: _directionsDestinationAddress
@property (copy, nonatomic) CNPostalAddress *directionsDestinationAddressComponents; // ivar: _directionsDestinationAddressComponents
@property (copy, nonatomic) NSString *directionsDestinationLocationName; // ivar: _directionsDestinationLocationName
@property (copy, nonatomic) NSString *directionsSourceAddress; // ivar: _directionsSourceAddress
@property (copy, nonatomic) CNPostalAddress *directionsSourceAddressComponents; // ivar: _directionsSourceAddressComponents
@property (copy, nonatomic) NSString *directionsSourceLocationName; // ivar: _directionsSourceLocationName
@property (copy, nonatomic) NSString *directionsType; // ivar: _directionsType
@property (retain, nonatomic) NSNumber *distance; // ivar: _distance
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) LPImage *image; // ivar: _image
@property (nonatomic) CLLocationCoordinate2D location; // ivar: _location
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *searchQuery; // ivar: _searchQuery
@property (readonly) Class superclass;
@property (retain, nonatomic) NSNumber *transportType; // ivar: _transportType


+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(BOOL)_isDirections;
-(BOOL)canGeneratePresentationPropertiesForURL:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_style;
-(id)_bottomLineForTwoUpForTransformer:(id)arg0 ;
-(id)_deduplicatedAddress;
-(id)_iconForTransport;
-(id)_resolvedImage;
-(id)_singleLineShortDescription;
-(id)_singleLineVerboseDescription;
-(id)_topLineForTransformer:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fallbackIconForTransformer:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)presentationPropertiesForTransformer:(id)arg0 ;
-(id)previewImageForTransformer:(id)arg0 ;
-(id)previewSummaryForTransformer:(id)arg0 ;
-(void)_enumerateAsynchronousFields:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)populateMetadataForBackwardCompatibility:(id)arg0 ;


@end


#endif