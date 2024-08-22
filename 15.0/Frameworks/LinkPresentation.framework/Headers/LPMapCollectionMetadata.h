// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LPMAPCOLLECTIONMETADATA_H
#define LPMAPCOLLECTIONMETADATA_H

@class NSArray, NSString;
@protocol LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataFallbackIconTransformer, LPLinkMetadataBackwardCompatibility;


#import "LPSpecializationMetadata.h"
#import "LPImage.h"

@interface LPMapCollectionMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataFallbackIconTransformer, LPLinkMetadataBackwardCompatibility>



@property (copy, nonatomic) NSArray *addresses; // ivar: _addresses
@property (retain, nonatomic) LPImage *darkImage; // ivar: _darkImage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) LPImage *icon; // ivar: _icon
@property (retain, nonatomic) LPImage *image; // ivar: _image
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) unsigned int numberOfItems; // ivar: _numberOfItems
@property (retain, nonatomic) LPImage *publisherIcon; // ivar: _publisherIcon
@property (copy, nonatomic) NSString *publisherName; // ivar: _publisherName
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(BOOL)canGeneratePresentationPropertiesForURL:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_bottomLine;
-(id)_resolvedImage;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fallbackIconForTransformer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)presentationPropertiesForTransformer:(id)arg0 ;
-(id)previewImageForTransformer:(id)arg0 ;
-(id)previewSummaryForTransformer:(id)arg0 ;
-(void)_enumerateAsynchronousFields:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)populateMetadataForBackwardCompatibility:(id)arg0 ;


@end


#endif