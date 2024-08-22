// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPSHAREDOBJECTMETADATA_H
#define LPSHAREDOBJECTMETADATA_H

@class NSString;
@protocol LPLinkMetadataPresentationTransformer, LPLinkMetadataBackwardCompatibility, LPLinkMetadataPreviewTransformer, LPLinkMetadataSourceApplicationTransformer, LPLinkMetadataFallbackIconTransformer;


#import "LPSpecializationMetadata.h"
#import "LPImage.h"

@interface LPSharedObjectMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataBackwardCompatibility, LPLinkMetadataPreviewTransformer, LPLinkMetadataSourceApplicationTransformer, LPLinkMetadataFallbackIconTransformer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) LPImage *icon; // ivar: _icon
@property (copy, nonatomic) NSString *information; // ivar: _information
@property (nonatomic) BOOL isCollaboration; // ivar: _isCollaboration
@property (retain, nonatomic) LPSpecializationMetadata *specialization; // ivar: _specialization
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(BOOL)canGeneratePresentationPropertiesForURL:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)applicationIconWithURL:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fallbackIconForTransformer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)presentationPropertiesForTransformer:(id)arg0 ;
-(id)previewImageForTransformer:(id)arg0 ;
-(id)previewSummaryForTransformer:(id)arg0 ;
-(id)sourceApplicationMetadataForTransformer:(id)arg0 ;
-(void)_enumerateAsynchronousFields:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)populateMetadataForBackwardCompatibility:(id)arg0 ;


@end


#endif