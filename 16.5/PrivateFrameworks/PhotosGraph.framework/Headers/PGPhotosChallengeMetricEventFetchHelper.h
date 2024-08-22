// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGPHOTOSCHALLENGEMETRICEVENTFETCHHELPER_H
#define PGPHOTOSCHALLENGEMETRICEVENTFETCHHELPER_H

@class PHPhotoLibrary, NSDictionary, NSSet;

#import <Foundation/Foundation.h>

#import "PGManager.h"
#import "PGSuggestionSession.h"

@interface PGPhotosChallengeMetricEventFetchHelper : NSObject {
    PHPhotoLibrary *_photoLibrary;
    PGManager *_manager;
}


@property (retain, nonatomic) NSDictionary *activePersonUUIDByPersonUUID; // ivar: _activePersonUUIDByPersonUUID
@property (retain, nonatomic) NSDictionary *assetByAssetIdentifier; // ivar: _assetByAssetIdentifier
@property (retain, nonatomic) NSDictionary *assetByAssetSyndicationIdentifier; // ivar: _assetByAssetSyndicationIdentifier
@property (retain, nonatomic) PGSuggestionSession *featuredPhotosSuggestionSession; // ivar: _featuredPhotosSuggestionSession
@property (retain, nonatomic) NSDictionary *memoryByMemoryIdentifier; // ivar: _memoryByMemoryIdentifier
@property (retain, nonatomic) NSDictionary *momentUUIDByAssetIdentifier; // ivar: _momentUUIDByAssetIdentifier
@property (retain, nonatomic) NSDictionary *questionsByQuestionTypeByEntityType; // ivar: _questionsByQuestionTypeByEntityType
@property (retain, nonatomic) NSSet *tripKeyAssetIdentifiers; // ivar: _tripKeyAssetIdentifiers


-(BOOL)suggestsToStartSharedLibraryWithError:(*id)arg0 ;
-(id)initForTestingWithQuestions:(id)arg0 assetsByAssetId:(id)arg1 momentUUIDByAssetIdentifier:(id)arg2 activePersonUUIDByPersonUUID:(id)arg3 tripKeyAssetIdentifiers:(id)arg4 ;
-(id)initWithGraphManager:(id)arg0 ;
-(id)questionsForQuestionMetricType:(unsigned short)arg0 ;
-(id)questionsForQuestionType:(unsigned short)arg0 questionEntityTypes:(id)arg1 ;
-(void)_buildQuestionsByQuestionTypeByEntityTypeFromQuestions:(id)arg0 ;
-(void)_prefetchActivePersonUUIDByPersonUUID;
-(void)_prefetchAssetByAssetIdentifier;
-(void)_prefetchAssetByAssetSyndicationIdentifier;
-(void)_prefetchMemoryByMemoryIdentifier;
-(void)_prefetchMomentUUIDByAssetIdentifier;
-(void)_prefetchQuestions;
-(void)_prefetchTripKeyAssetIdentifiers;


@end


#endif