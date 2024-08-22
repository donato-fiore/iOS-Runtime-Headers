// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNENTITYIDENTIFICATIONMODELTRAININGDATA_H
#define VNENTITYIDENTIFICATIONMODELTRAININGDATA_H

@class NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSString, NSDate;
@protocol VNEntityIdentificationModelDataSource, VNEntityIdentificationModelTrainedModelDataProvider, VNEntityIdentificationModelTrainingDataDelegate;

#import <Foundation/Foundation.h>

#import "VNRequestSpecifier.h"

@interface VNEntityIdentificationModelTrainingData : NSObject <VNEntityIdentificationModelDataSource, VNEntityIdentificationModelTrainedModelDataProvider>

 {
    NSUInteger _maximumEntities;
    NSMutableArray *_entityUniqueIdentifiers;
    NSMutableDictionary *_serialNumberForEntityUniqueIdentifier;
    NSMutableDictionary *_observationsForSerialNumber;
    NSMutableIndexSet *_availableSerialNumbers;
    NSUInteger _lastDataChangeSequenceNumber;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<VNEntityIdentificationModelTrainingDataDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) VNRequestSpecifier *entityPrintOriginatingRequestSpecifier; // ivar: _entityPrintOriginatingRequestSpecifier
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSDate *lastModificationDate; // ivar: _lastModificationDate
@property (readonly) Class superclass;


-(BOOL)addObservations:(id)arg0 toEntityWithUniqueIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)removeAllObservationsFromEntityWithUniqueIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeEntityWithUniqueIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeObservations:(id)arg0 fromEntityWithUniqueIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)validateWithCanceller:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)entityCount;
-(NSUInteger)entityIdentificationModel:(id)arg0 indexOfEntityWithUniqueIdentifier:(id)arg1 ;
-(NSUInteger)entityIdentificationModel:(id)arg0 numberOfObservationsForEntityAtIndex:(NSUInteger)arg1 ;
-(NSUInteger)indexOfEntityWithUniqueIdentifier:(id)arg0 ;
-(NSUInteger)lastDataChangeSequenceNumberForEntityIdentificationModel:(id)arg0 ;
-(NSUInteger)numberOfEntitiesInEntityIdentificationModel:(id)arg0 ;
-(NSUInteger)observationCountForEntityAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)trainedModelEntityCount;
-(NSUInteger)trainedModelIndexOfEntityWithUniqueIdentifier:(id)arg0 ;
-(NSUInteger)trainedModelNumberOfObservationsForEntityAtIndex:(NSUInteger)arg0 ;
-(id)entityIdentificationModel:(id)arg0 observationAtIndex:(NSUInteger)arg1 forEntityAtIndex:(NSUInteger)arg2 ;
-(id)entityIdentificationModel:(id)arg0 uniqueIdentifierOfEntityAtIndex:(NSUInteger)arg1 ;
-(id)initWithModelConfiguration:(id)arg0 ;
-(id)lastModificationDateForEntityIdentificationModel:(id)arg0 ;
-(id)observationAtIndex:(NSUInteger)arg0 forEntityAtIndex:(NSUInteger)arg1 ;
-(id)trainedModelObservationAtIndex:(NSUInteger)arg0 forEntityAtIndex:(NSUInteger)arg1 ;
-(id)trainedModelUniqueIdentifierOfEntityAtIndex:(NSUInteger)arg0 ;
-(id)uniqueIdentifierOfEntityAtIndex:(NSUInteger)arg0 ;


@end


#endif