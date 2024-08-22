// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNENTITYIDENTIFICATIONMODELTRAINEDMODELVIPV3_H
#define VNENTITYIDENTIFICATIONMODELTRAINEDMODELVIPV3_H

@class NSArray;


#import "VNEntityIdentificationModelTrainedModel.h"
#import "VNRequestSpecifier.h"

@interface VNEntityIdentificationModelTrainedModelVIPv3 : VNEntityIdentificationModelTrainedModel {
    ? _faceIDModel;
    VNRequestSpecifier *_entityPrintOriginatingRequestSpecifier;
    NSArray *_entityUniqueIdentifiers;
    NSArray *_entityPrintCounts;
}




+(BOOL)getStoredRepresentationTag:(*unsigned int)arg0 forModelVersion:(NSUInteger)arg1 error:(*id)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)trainedModelBuiltFromConfiguration:(id)arg0 dataProvider:(id)arg1 canceller:(id)arg2 error:(*id)arg3 ;
-(NSUInteger)entityCount;
-(NSUInteger)indexOfEntityWithUniqueIdentifier:(id)arg0 ;
-(NSUInteger)printCountForEntityWithUniqueIdentifier:(id)arg0 ;
-(id)entityPrintOriginatingRequestSpecifier;
-(id)entityUniqueIdentifiers;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFaceIDModel:(struct shared_ptr<vision::mod::FaceID3Model> )arg0 entityPrintOriginatingRequestSpecifier:(id)arg1 entityUniqueIdentifiers:(id)arg2 entityPrintCounts:(id)arg3 ;
-(id)predictionsForObservation:(id)arg0 limit:(NSUInteger)arg1 canceller:(id)arg2 error:(*id)arg3 ;
-(id)printCountsForAllEntities;
-(id)printCountsForEntitiesWithUniqueIdentifiers:(id)arg0 ;
-(id)trainingEntityPrintsForEntityWithUniqueIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)uniqueIdentifierOfEntityAtIndex:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif