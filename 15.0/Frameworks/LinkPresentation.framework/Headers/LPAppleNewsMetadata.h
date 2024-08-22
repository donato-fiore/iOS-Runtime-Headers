// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LPAPPLENEWSMETADATA_H
#define LPAPPLENEWSMETADATA_H

@class NSString;
@protocol LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer;


#import "LPSpecializationMetadata.h"

@interface LPAppleNewsMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *source; // ivar: _source
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
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif