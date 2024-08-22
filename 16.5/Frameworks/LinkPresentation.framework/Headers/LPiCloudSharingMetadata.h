// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPICLOUDSHARINGMETADATA_H
#define LPICLOUDSHARINGMETADATA_H

@class NSString, NSDictionary;
@protocol LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataFallbackIconTransformer, LPLinkMetadataBackwardCompatibility, LPLinkMetadataSharedObjectTransformer;


#import "LPSpecializationMetadata.h"
#import "LPImage.h"

@interface LPiCloudSharingMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataFallbackIconTransformer, LPLinkMetadataBackwardCompatibility, LPLinkMetadataSharedObjectTransformer>



@property (copy, nonatomic) NSString *application; // ivar: _application
@property (copy, nonatomic) NSString *applicationBundleIdenfier; // ivar: _applicationBundleIdenfier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDictionary *encodedTokens; // ivar: _encodedTokens
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) LPImage *icon; // ivar: _icon
@property (copy, nonatomic) NSString *kind; // ivar: _kind
@property (readonly) Class superclass;
@property (retain, nonatomic) LPImage *thumbnail; // ivar: _thumbnail
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)_bundleIdentifierMap;
+(id)extractApplicationFromURL:(id)arg0 ;
+(id)extractKindFromURL:(id)arg0 ;
+(id)extractTitleFromURL:(id)arg0 ;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(BOOL)canGeneratePresentationPropertiesForURL:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)sharedObjectPrefersIconAsImageForTransformer:(id)arg0 ;
-(id)_bottomLeadingCaptionStringWithApplicationName:(id)arg0 ;
-(id)_topLeadingCaptionStringWithApplicationName:(id)arg0 ;
-(id)computeIcon;
-(id)computeThumbnail;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fallbackIconForTransformer:(id)arg0 ;
-(id)firstPartyAppIcon;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedApplicationNameWithURL:(id)arg0 ;
-(id)localizedKind;
-(id)presentationPropertiesForTransformer:(id)arg0 ;
-(id)previewImageForTransformer:(id)arg0 ;
-(id)previewSummaryForTransformer:(id)arg0 ;
-(id)sharedObjectIconForTransformer:(id)arg0 ;
-(id)sharedObjectInformationForTransformer:(id)arg0 ;
-(id)sharedObjectSubtitleForTransformer:(id)arg0 ;
-(id)sharedObjectTitleForTransformer:(id)arg0 ;
-(void)_enumerateAsynchronousFields:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)populateMetadataForBackwardCompatibility:(id)arg0 ;


@end


#endif