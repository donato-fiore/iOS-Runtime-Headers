// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNREADONLYENTITYIDENTIFICATIONMODEL_H
#define VNREADONLYENTITYIDENTIFICATIONMODEL_H

@class NSString;
@protocol VNEntityIdentificationModelDataSource;


#import "VNEntityIdentificationModel.h"
#import "VNEntityIdentificationModelTrainedModel.h"

@interface VNReadOnlyEntityIdentificationModel : VNEntityIdentificationModel <VNEntityIdentificationModelDataSource>

 {
    VNEntityIdentificationModelTrainedModel *_trainedModel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isReadOnly;
+(id)newModelForVersion:(NSUInteger)arg0 modelObjects:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)entityIdentificationModel:(id)arg0 indexOfEntityWithUniqueIdentifier:(id)arg1 ;
-(NSUInteger)entityIdentificationModel:(id)arg0 numberOfObservationsForEntityAtIndex:(NSUInteger)arg1 ;
-(NSUInteger)numberOfEntitiesInEntityIdentificationModel:(id)arg0 ;
-(NSUInteger)observationCountForEntityWithUniqueIdentifier:(id)arg0 ;
-(id)entityIdentificationModel:(id)arg0 observationAtIndex:(NSUInteger)arg1 forEntityAtIndex:(NSUInteger)arg2 ;
-(id)entityIdentificationModel:(id)arg0 uniqueIdentifierOfEntityAtIndex:(NSUInteger)arg1 ;
-(id)initWithConfiguration:(id)arg0 trainedModel:(id)arg1 ;
-(id)observationCountsForAllEntities;
-(id)observationCountsForEntitiesWithUniqueIdentifiers:(id)arg0 ;
-(id)observationsForEntityWithUniqueIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)trainedModelWithCanceller:(id)arg0 error:(*id)arg1 ;


@end


#endif