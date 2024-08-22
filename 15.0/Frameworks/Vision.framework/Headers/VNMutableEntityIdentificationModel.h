// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNMUTABLEENTITYIDENTIFICATIONMODEL_H
#define VNMUTABLEENTITYIDENTIFICATIONMODEL_H

@protocol VNEntityIdentificationModelTrainingDataDelegate;


#import "VNEntityIdentificationModel.h"
#import "VNEntityIdentificationModelTrainingData.h"

@interface VNMutableEntityIdentificationModel : VNEntityIdentificationModel <VNEntityIdentificationModelTrainingDataDelegate>

 {
    VNEntityIdentificationModelTrainingData *_trainingData;
}




+(BOOL)canCreateModelOfClass:(Class)arg0 withObjects:(id)arg1 error:(*id)arg2 ;
+(id)modelFromPersonsModel:(id)arg0 error:(*id)arg1 ;
+(id)modelWithConfiguration:(id)arg0 dataSource:(id)arg1 error:(*id)arg2 ;
+(id)modelWithConfiguration:(id)arg0 error:(*id)arg1 ;
+(id)newModelForVersion:(NSUInteger)arg0 modelObjects:(id)arg1 error:(*id)arg2 ;
-(BOOL)addAllPersonsFromPersonsModel:(id)arg0 error:(*id)arg1 ;
-(BOOL)addObservations:(id)arg0 toEntityWithUniqueIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)addPersonWithUniqueIdentifier:(id)arg0 fromPersonsModel:(id)arg1 error:(*id)arg2 ;
-(BOOL)removeAllObservationsFromEntityWithUniqueIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeEntityWithUniqueIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeObservations:(id)arg0 fromEntityWithUniqueIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)validateWithCanceller:(id)arg0 error:(*id)arg1 ;
-(id)initWithConfiguration:(id)arg0 ;
-(void)entityIdentificationModelTrainingDataWasModified:(id)arg0 ;


@end


#endif