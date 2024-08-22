// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPMAPCOLLECTIONPUBLISHERMETADATA_H
#define LPMAPCOLLECTIONPUBLISHERMETADATA_H

@class NSString;
@protocol LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataFallbackIconTransformer, LPLinkMetadataBackwardCompatibility;


#import "LPSpecializationMetadata.h"
#import "LPImage.h"

@interface LPMapCollectionPublisherMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataFallbackIconTransformer, LPLinkMetadataBackwardCompatibility>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) LPImage *icon; // ivar: _icon
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) unsigned int numberOfPublishedCollections; // ivar: _numberOfPublishedCollections
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(BOOL)canGeneratePresentationPropertiesForURL:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_guideCount;
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