// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNPERSONSMODELDATA_H
#define VNPERSONSMODELDATA_H

@class NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSString, NSDate;
@protocol VNPersonsModelDataSource, VNPersonsModelFaceModelDataProvider, VNPersonsModelDataDelegate;

#import <Foundation/Foundation.h>


@interface VNPersonsModelData : NSObject <VNPersonsModelDataSource, VNPersonsModelFaceModelDataProvider>

 {
    NSUInteger _maximumIdentities;
    NSMutableArray *_personUniqueIdentifiers;
    NSMutableDictionary *_personUniqueIdentifierToSerialNumberMapping;
    NSMutableDictionary *_serialNumberToFaceObservationsMapping;
    NSMutableIndexSet *_availablePersonSerialNumbers;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VNPersonsModelDataDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger faceprintRequestRevision; // ivar: _faceprintRequestRevision
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDate *lastModificationDate; // ivar: _lastModificationDate
@property (readonly) Class superclass;


-(BOOL)_addUniqueFaceObservations:(id)arg0 toPersonWithUniqueIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)addFaceObservations:(id)arg0 toPersonWithUniqueIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)removeAllFaceObservationsFromPersonWithUniqueIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeFaceObservations:(id)arg0 fromPersonWithUniqueIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)removePersonWithUniqueIdentifier:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)faceModelIndexOfPersonWithUniqueIdentifier:(id)arg0 ;
-(NSUInteger)faceModelNumberOfFaceObservationsForPersonAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)faceModelPersonsCount;
-(NSUInteger)numberOfPersonsInPersonsModel:(id)arg0 ;
-(NSUInteger)personsModel:(id)arg0 indexOfPersonWithUniqueIdentifier:(id)arg1 ;
-(NSUInteger)personsModel:(id)arg0 numberOfFaceObservationsForPersonAtIndex:(NSUInteger)arg1 ;
-(id)_accessToMutableFaceObservationsForPersonAtIndex:(NSUInteger)arg0 ;
-(id)_requestNewIdentitySerialNumberAndReturnError:(*id)arg0 ;
-(id)_uniqueFaceObservationsWithRegistrationState:(BOOL)arg0 forFaceObservations:(id)arg1 withExpectedFaceprintRequestRevision:(NSUInteger)arg2 ofPersonWithUniqueIdentifier:(id)arg3 error:(*id)arg4 ;
-(id)faceModelFaceObservationAtIndex:(NSUInteger)arg0 forPersonAtIndex:(NSUInteger)arg1 ;
-(id)faceModelUniqueIdentifierOfPersonAtIndex:(NSUInteger)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)personsModel:(id)arg0 faceObservationAtIndex:(NSUInteger)arg1 forPersonAtIndex:(NSUInteger)arg2 ;
-(id)personsModel:(id)arg0 uniqueIdentifierOfPersonAtIndex:(NSUInteger)arg1 ;
-(void)_modelWasModified;
-(void)_removeAllFaceObservationsFromIdentityWithSerialNumber:(id)arg0 ;
-(void)_removeExistingFaceObservations:(id)arg0 fromIdentityWithSerialNumber:(id)arg1 ;
-(void)_removeExistingFaceObservations:(id)arg0 fromPersonWithUniqueIdentifier:(id)arg1 ;
-(void)_removePersonWithUniqueIdentifier:(id)arg0 ;


@end


#endif