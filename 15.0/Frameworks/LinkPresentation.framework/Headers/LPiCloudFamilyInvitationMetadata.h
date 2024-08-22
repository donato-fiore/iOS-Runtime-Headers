// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LPICLOUDFAMILYINVITATIONMETADATA_H
#define LPICLOUDFAMILYINVITATIONMETADATA_H

@class NSString;
@protocol LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataBackwardCompatibility;


#import "LPSpecializationMetadata.h"
#import "LPImage.h"

@interface LPiCloudFamilyInvitationMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataBackwardCompatibility>



@property (copy, nonatomic) NSString *action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) LPImage *icon; // ivar: _icon
@property (retain, nonatomic) LPImage *image; // ivar: _image
@property (copy, nonatomic) NSString *kind; // ivar: _kind
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(BOOL)canGeneratePresentationPropertiesForURL:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)presentationPropertiesForTransformer:(id)arg0 ;
-(id)previewImageForTransformer:(id)arg0 ;
-(id)previewSummaryForTransformer:(id)arg0 ;
-(void)_enumerateAsynchronousFields:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)populateMetadataForBackwardCompatibility:(id)arg0 ;


@end


#endif