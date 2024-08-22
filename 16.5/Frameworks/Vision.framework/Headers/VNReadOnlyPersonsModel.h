// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNREADONLYPERSONSMODEL_H
#define VNREADONLYPERSONSMODEL_H

@class NSString;
@protocol VNPersonsModelDataSource;


#import "VNPersonsModel.h"

@interface VNReadOnlyPersonsModel : VNPersonsModel <VNPersonsModelDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isReadOnly;
+(id)newModelFromVersion:(NSUInteger)arg0 objects:(id)arg1 error:(*id)arg2 ;
-(BOOL)dropCurrentFaceModelAndReturnError:(*id)arg0 ;
-(NSUInteger)faceCountForPersonWithUniqueIdentifier:(id)arg0 ;
-(NSUInteger)numberOfPersonsInPersonsModel:(id)arg0 ;
-(NSUInteger)personCount;
-(NSUInteger)personsModel:(id)arg0 indexOfPersonWithUniqueIdentifier:(id)arg1 ;
-(NSUInteger)personsModel:(id)arg0 numberOfFaceObservationsForPersonAtIndex:(NSUInteger)arg1 ;
-(id)faceCountsForAllPersons;
-(id)faceCountsForPersonsWithUniqueIdentifiers:(id)arg0 ;
-(id)faceObservationsForPersonWithUniqueIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)initWithConfiguration:(id)arg0 faceModel:(id)arg1 ;
-(id)personUniqueIdentifiers;
-(id)personsModel:(id)arg0 faceObservationAtIndex:(NSUInteger)arg1 forPersonAtIndex:(NSUInteger)arg2 ;
-(id)personsModel:(id)arg0 uniqueIdentifierOfPersonAtIndex:(NSUInteger)arg1 ;
-(id)upToDateFaceModelWithCanceller:(id)arg0 error:(*id)arg1 ;


@end


#endif