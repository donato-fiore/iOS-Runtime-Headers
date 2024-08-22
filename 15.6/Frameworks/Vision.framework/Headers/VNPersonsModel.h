// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNPERSONSMODEL_H
#define VNPERSONSMODEL_H

@protocol VNPersonsModelDataSource;

#import <Foundation/Foundation.h>

#import "VNPersonsModelConfiguration.h"
#import "VNPersonsModelFaceModel.h"

@interface VNPersonsModel : NSObject {
    VNPersonsModelConfiguration *_configuration;
    id<VNPersonsModelDataSource> *_dataSource;
    NSUInteger _lastDataChangeSequenceNumber;
    VNPersonsModelFaceModel *_faceModel_DO_NOT_ACCESS_DIRECTLY;
}


@property (readonly, copy, nonatomic) VNPersonsModelConfiguration *configuration;


+(BOOL)readObjectForVersion1Tag:(unsigned int)arg0 fromInputStream:(id)arg1 intoObjectDictionary:(id)arg2 md5Context:(struct CC_MD5state_st *)arg3 error:(*id)arg4 ;
+(Class)_modelClassForKind:(unsigned int)arg0 error:(*id)arg1 ;
+(id)_modelFromStream:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)_modelFromUnopenedStream:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)_modelInformationFromUnopenedStream:(id)arg0 error:(*id)arg1 ;
// +(id)_readModelObjectsFromStream:(id)arg0 options:(id)arg1 actionBlock:(id)arg2 progressBlock:(unk)arg3 modelClass:(id)arg4 version:(unk)arg5 error:(*Class)arg6  ;
+(id)configurationFromLoadedObjects:(id)arg0 error:(*id)arg1 ;
+(id)informationForModelWithData:(id)arg0 error:(*id)arg1 ;
+(id)informationForModelWithURL:(id)arg0 error:(*id)arg1 ;
+(id)modelFromData:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)modelFromStream:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)modelFromURL:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)newModelFromVersion:(NSUInteger)arg0 objects:(id)arg1 error:(*id)arg2 ;
+(id)supportedReadVersions;
+(id)versionNumbersEncodedInClass:(Class)arg0 withMethodNamePrefix:(id)arg1 suffix:(id)arg2 ;
-(BOOL)updateInternalConfigurationWithModelFaceprintRequestRevision:(NSUInteger)arg0 error:(*id)arg1 ;
-(NSUInteger)faceCountForPersonWithUniqueIdentifier:(id)arg0 ;
-(NSUInteger)indexOfFaceprintObjectFrom:(id)arg0 withEquivalentDescriptorTo:(id)arg1 ;
-(NSUInteger)personCount;
-(id)_dataSourceAndReturnError:(*id)arg0 ;
-(id)description;
-(id)faceCountsForAllPersons;
-(id)faceCountsForPersonsWithUniqueIdentifiers:(id)arg0 ;
-(id)faceObservationsForPersonWithUniqueIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)initWithConfiguration:(id)arg0 dataSource:(id)arg1 ;
-(id)personUniqueIdentifiers;
-(id)predictPersonFromFaceObservation:(id)arg0 limit:(NSUInteger)arg1 canceller:(id)arg2 error:(*id)arg3 ;
-(id)trainingFaceObservationsForPersonWithUniqueIdentifier:(id)arg0 canceller:(id)arg1 error:(*id)arg2 ;
-(id)upToDateFaceModelWithCanceller:(id)arg0 error:(*id)arg1 ;


@end


#endif