// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLMODELIOUTILS_H
#define MLMODELIOUTILS_H


#import <Foundation/Foundation.h>


@interface MLModelIOUtils : NSObject



+(BOOL)deserializeInterfaceFormat:(*void)arg0 archive:(*void)arg1 error:(*id)arg2 ;
+(BOOL)serializeInterfaceFormat:(*void)arg0 archive:(*void)arg1 error:(*id)arg2 ;
+(BOOL)serializeMetadataAndInterfaceFromSpecification:(*void)arg0 archive:(*void)arg1 error:(*id)arg2 ;
+(BOOL)serializeVersionInfo:(id)arg0 archive:(*void)arg1 error:(*id)arg2 ;
+(id)descriptionFromProto:(*void)arg0 ;
+(id)deserializeMetadataAndInterfaceFromArchive:(*void)arg0 error:(*id)arg1 ;
+(id)deserializeVersionInfoFromArchive:(*void)arg0 error:(*id)arg1 ;
+(id)inputDescriptionFromInterface:(*void)arg0 ;
+(id)loadFromModelSpecificationInArchive:(*void)arg0 withClass:(Class)arg1 versionInfo:(id)arg2 configuration:(id)arg3 error:(*id)arg4 ;
+(id)orderedFeatureNamesFromInterface:(*void)arg0 forInput:(BOOL)arg1 ;
+(id)orderedNamesFromProto:(*void)arg0 ;
+(id)outputDescriptionFromInterface:(*void)arg0 ;
+(id)populateConstraintsForFeatureDescription:(*void)arg0 ;
+(id)populateConstraintsForImageFeatureDescription:(*void)arg0 ;
+(id)populateConstraintsForImageFeatureDescriptionElement:(*void)arg0 ;
+(id)serializeSpecification:(*void)arg0 toArchive:(*void)arg1 error:(*id)arg2 ;
+(id)specificationURLFromModelAtURL:(id)arg0 error:(*id)arg1 ;
+(id)trainingInputDescriptionFromInterface:(*void)arg0 ;
+(id)versionForSerializedSpecification:(*void)arg0 options:(id)arg1 error:(*id)arg2 ;
+(struct _NSRange )rangeFromAllowedSizeRangeProtoMessage:(*void)arg0 ;


@end


#endif