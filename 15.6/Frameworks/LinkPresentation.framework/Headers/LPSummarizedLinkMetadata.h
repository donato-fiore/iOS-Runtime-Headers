// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPSUMMARIZEDLINKMETADATA_H
#define LPSUMMARIZEDLINKMETADATA_H

@class NSString;
@protocol LPLinkMetadataPresentationTransformer;


#import "LPSpecializationMetadata.h"

@interface LPSummarizedLinkMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(BOOL)canGeneratePresentationPropertiesForURL:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)presentationPropertiesForTransformer:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif