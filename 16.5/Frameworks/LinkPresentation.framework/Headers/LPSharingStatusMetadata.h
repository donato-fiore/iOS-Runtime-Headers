// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPSHARINGSTATUSMETADATA_H
#define LPSHARINGSTATUSMETADATA_H

@class NSString, NSAttributedString;
@protocol LPLinkMetadataPresentationTransformer;


#import "LPSpecializationMetadata.h"

@interface LPSharingStatusMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSAttributedString *status; // ivar: _status
@property (readonly) Class superclass;


+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(BOOL)canGeneratePresentationPropertiesForURL:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)presentationPropertiesForTransformer:(id)arg0 ;


@end


#endif