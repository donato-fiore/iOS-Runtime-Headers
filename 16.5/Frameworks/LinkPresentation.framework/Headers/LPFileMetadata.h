// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPFILEMETADATA_H
#define LPFILEMETADATA_H

@class NSDate, NSString;
@protocol LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataFallbackIconTransformer, LPLinkMetadataBackwardCompatibility, LPMultipleMetadataPresentationTransformer, LPLinkMetadataSharedObjectTransformer;


#import "LPSpecializationMetadata.h"
#import "LPImage.h"

@interface LPFileMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataFallbackIconTransformer, LPLinkMetadataBackwardCompatibility, LPMultipleMetadataPresentationTransformer, LPLinkMetadataSharedObjectTransformer>



@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) LPImage *icon; // ivar: _icon
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSUInteger size; // ivar: _size
@property (retain, nonatomic) LPImage *smallThumbnail; // ivar: _smallThumbnail
@property (readonly) Class superclass;
@property (retain, nonatomic) LPImage *thumbnail; // ivar: _thumbnail
@property (copy, nonatomic) NSString *type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)descriptionForUTI:(id)arg0 ;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(BOOL)_canDeferAsynchronousFieldsMetadataUpdateUntilCompletion;
-(BOOL)_isImage;
-(BOOL)_isPlainText;
-(BOOL)_isWatchFace;
-(BOOL)_shouldUseBackground;
-(BOOL)_shouldUseCircularIcon;
-(BOOL)_shouldUseSquareIcon;
-(BOOL)canGeneratePresentationPropertiesForURL:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)sharedObjectPrefersIconAsImageForTransformer:(id)arg0 ;
-(NSInteger)summaryTypeForTransformer:(id)arg0 ;
-(id)_bottomCaptionStringForTransformer:(id)arg0 ;
-(id)_fileDetailStringForTransformer:(id)arg0 ;
-(id)_fileTypeStringForTransformer:(id)arg0 ;
-(id)_nameForTransformer:(id)arg0 ;
-(id)_singleLineDescriptionForRemoteFileWithTransformer:(id)arg0 ;
-(id)_valueForKeyPathIfLoaded:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fallbackIconForTransformer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)presentationPropertiesForTransformer:(id)arg0 ;
-(id)previewImageForTransformer:(id)arg0 ;
-(id)previewSummaryForTransformer:(id)arg0 ;
-(id)sharedObjectIconForTransformer:(id)arg0 ;
-(id)sharedObjectInformationForTransformer:(id)arg0 ;
-(id)sharedObjectPreviewSummaryForTransformer:(id)arg0 ;
-(id)sharedObjectSubtitleForTransformer:(id)arg0 ;
-(id)sharedObjectTitleForTransformer:(id)arg0 ;
-(void)_enumerateAsynchronousFields:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)populateMetadataForBackwardCompatibility:(id)arg0 ;


@end


#endif