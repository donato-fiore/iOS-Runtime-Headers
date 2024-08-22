// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPICLOUDSHARINGMETADATA_H
#define LPICLOUDSHARINGMETADATA_H

@class NSString;
@protocol LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataFallbackIconTransformer, LPLinkMetadataBackwardCompatibility;


#import "LPSpecializationMetadata.h"
#import "LPImage.h"

@interface LPiCloudSharingMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataFallbackIconTransformer, LPLinkMetadataBackwardCompatibility>



@property (copy, nonatomic) NSString *application; // ivar: _application
@property (copy, nonatomic) NSString *applicationBundleIdenfier; // ivar: _applicationBundleIdenfier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) LPImage *icon; // ivar: _icon
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)_bundleIdentifierMap;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(BOOL)canGeneratePresentationPropertiesForURL:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_bottomCaptionStringWithApplicationName:(id)arg0 ;
-(id)_topCaptionStringWithApplicationName:(id)arg0 ;
-(id)computeIcon;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fallbackIconForTransformer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedApplicationName;
-(id)presentationPropertiesForTransformer:(id)arg0 ;
-(id)previewImageForTransformer:(id)arg0 ;
-(id)previewSummaryForTransformer:(id)arg0 ;
-(void)_enumerateAsynchronousFields:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)populateMetadataForBackwardCompatibility:(id)arg0 ;


@end


#endif