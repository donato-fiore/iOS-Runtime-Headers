// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNENTITYIDENTIFICATIONMODEL_H
#define VNENTITYIDENTIFICATIONMODEL_H

@protocol VNEntityIdentificationModelDelegate, VNEntityIdentificationModelDataSource;

#import <Foundation/Foundation.h>

#import "VNEntityIdentificationModelConfiguration.h"
#import "VNEntityIdentificationModelTrainedModel.h"
#import "VNEntityIdentificationModelAlgorithm.h"
#import "VNEntityIdentificationModelInformation.h"

@interface VNEntityIdentificationModel : NSObject {
    id<VNEntityIdentificationModelDelegate> *_delegate_DO_NOT_ACCESS_DIRECTLY;
    ? _delegateFlags;
    VNEntityIdentificationModelConfiguration *_configuration;
    id<VNEntityIdentificationModelDataSource> *_dataSource_DO_NOT_ACCESS_DIRECTLY;
    NSUInteger _lastDataChangeSequenceNumber;
    VNEntityIdentificationModelTrainedModel *_trainedModel_DO_NOT_ACCESS_DIRECTLY;
}


@property (readonly, copy) VNEntityIdentificationModelAlgorithm *algorithm;
@property (readonly, copy) VNEntityIdentificationModelConfiguration *configuration;
@property (retain) NSObject<VNEntityIdentificationModelDelegate> *delegate;
@property (readonly, copy) VNEntityIdentificationModelInformation *information;


+(BOOL)canCreateModelOfClass:(Class)arg0 withObjects:(id)arg1 error:(*id)arg2 ;
+(BOOL)isReadOnly;
+(BOOL)readObjectForVersion1Tag:(unsigned int)arg0 fromInputStream:(id)arg1 intoObjectDictionary:(id)arg2 md5Context:(struct CC_MD5state_st *)arg3 error:(*id)arg4 ;
+(BOOL)validateAceptableObservation:(id)arg0 forEntityPrintOriginatingRequestSpecifier:(id)arg1 error:(*id)arg2 ;
+(BOOL)validateConfiguration:(id)arg0 error:(*id)arg1 ;
+(id)informationForModelWithData:(id)arg0 error:(*id)arg1 ;
+(id)informationForModelWithURL:(id)arg0 error:(*id)arg1 ;
+(id)modelConfigurationForVersion:(NSUInteger)arg0 modelObjects:(id)arg1 error:(*id)arg2 ;
+(id)modelFromData:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)modelFromStream:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)modelFromURL:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)modelWithConfiguration:(id)arg0 dataSource:(id)arg1 error:(*id)arg2 ;
+(id)newModelForVersion:(NSUInteger)arg0 modelObjects:(id)arg1 error:(*id)arg2 ;
+(id)supportedReadVersions;
+(id)supportedRequestSpecifiers;
+(id)supportedWriteVersions;
-(BOOL)convertToAlgorithm:(id)arg0 error:(*id)arg1 ;
-(BOOL)dropTrainedModelAndReturnError:(*id)arg0 ;
-(BOOL)validateWithCanceller:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeReadOnlyVersion1ToOutputStream:(id)arg0 options:(id)arg1 md5Context:(struct CC_MD5state_st *)arg2 error:(*id)arg3 ;
-(BOOL)writeToStream:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(BOOL)writeToURL:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(BOOL)writeVersion1ToOutputStream:(id)arg0 options:(id)arg1 md5Context:(struct CC_MD5state_st *)arg2 error:(*id)arg3 ;
-(NSUInteger)entityCount;
-(NSUInteger)observationCountForEntityWithUniqueIdentifier:(id)arg0 ;
-(id)dataWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)entityPredictionsForObservation:(id)arg0 limit:(NSUInteger)arg1 canceller:(id)arg2 error:(*id)arg3 ;
-(id)entityUniqueIdentifiers;
-(id)initWithConfiguration:(id)arg0 dataSource:(id)arg1 ;
-(id)observationCountsForAllEntities;
-(id)observationCountsForEntitiesWithUniqueIdentifiers:(id)arg0 ;
-(id)observationsForEntityWithUniqueIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)trainedModelWithCanceller:(id)arg0 error:(*id)arg1 ;
-(id)trainingObservationsForEntityWithUniqueIdentifier:(id)arg0 canceller:(id)arg1 error:(*id)arg2 ;
-(id)trainingPrintsForEntityWithUniqueIdentifier:(id)arg0 canceller:(id)arg1 error:(*id)arg2 ;
-(id)uniqueIdentifierForEntityAtIndex:(NSUInteger)arg0 ;


@end


#endif