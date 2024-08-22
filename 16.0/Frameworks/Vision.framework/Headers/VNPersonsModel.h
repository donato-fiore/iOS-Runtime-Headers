// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNPERSONSMODEL_H
#define VNPERSONSMODEL_H

@protocol VNPersonsModelDataSource;

#import <Foundation/Foundation.h>

#import "VNPersonsModelFaceModel.h"
#import "VNPersonsModelConfiguration.h"
#import "VNPersonsModelAlgorithm.h"

@interface VNPersonsModel : NSObject {
    VNPersonsModelFaceModel *_faceModel_DO_NOT_ACCESS_DIRECTLY;
    VNPersonsModelConfiguration *_configuration;
    id<VNPersonsModelDataSource> *_dataSource;
    NSUInteger _lastDataChangeSequenceNumber;
}


@property (readonly, copy, nonatomic) VNPersonsModelAlgorithm *algorithm;
@property (readonly, copy, nonatomic) VNPersonsModelConfiguration *configuration;


+(BOOL)isReadOnly;
+(BOOL)readObjectForModelVersion:(NSUInteger)arg0 tag:(unsigned int)arg1 fromInputStream:(id)arg2 intoObjectDictionary:(id)arg3 md5Context:(struct CC_MD5state_st *)arg4 error:(*id)arg5 ;
+(id)configurationFromLoadedObjects:(id)arg0 error:(*id)arg1 ;
+(id)informationForModelWithData:(id)arg0 error:(*id)arg1 ;
+(id)informationForModelWithURL:(id)arg0 error:(*id)arg1 ;
+(id)modelFromData:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)modelFromStream:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)modelFromURL:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)newModelFromVersion:(NSUInteger)arg0 objects:(id)arg1 error:(*id)arg2 ;
+(id)supportedReadVersions;
+(id)versionNumbersEncodedInClass:(Class)arg0 withMethodNamePrefix:(id)arg1 suffix:(id)arg2 ;
-(BOOL)convertToAlgorithm:(id)arg0 error:(*id)arg1 ;
-(BOOL)dropCurrentFaceModelAndReturnError:(*id)arg0 ;
-(BOOL)updateInternalConfigurationWithModelFaceprintRequestRevision:(NSUInteger)arg0 error:(*id)arg1 ;
-(NSUInteger)faceCountForPersonWithUniqueIdentifier:(id)arg0 ;
-(NSUInteger)personCount;
-(id)description;
-(id)faceCountsForAllPersons;
-(id)faceCountsForPersonsWithUniqueIdentifiers:(id)arg0 ;
-(id)faceObservationsForPersonWithUniqueIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)initWithConfiguration:(id)arg0 dataSource:(id)arg1 ;
-(id)personUniqueIdentifiers;
-(id)predictPersonFromFaceObservation:(id)arg0 limit:(NSUInteger)arg1 canceller:(id)arg2 error:(*id)arg3 ;
-(id)trainingFaceObservationsForPersonWithUniqueIdentifier:(id)arg0 canceller:(id)arg1 error:(*id)arg2 ;
-(id)trainingFaceprintsForPersonWithUniqueIdentifier:(id)arg0 canceller:(id)arg1 error:(*id)arg2 ;
-(id)upToDateFaceModelWithCanceller:(id)arg0 error:(*id)arg1 ;


@end


#endif