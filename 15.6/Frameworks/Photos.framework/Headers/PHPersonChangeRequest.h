// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHPERSONCHANGEREQUEST_H
#define PHPERSONCHANGEREQUEST_H

@class NSMutableArray, NSString, NSMutableSet, NSDictionary, NSManagedObjectID;
@protocol PHInsertChangeRequest, PHUpdateChangeRequest;


#import "PHChangeRequest.h"
#import "PHRelationshipChangeRequestHelper.h"
#import "PHObjectPlaceholder.h"
#import "PHPerson.h"
#import "PHUserFeedback.h"

@interface PHPersonChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>

 {
    NSMutableArray *_personUUIDsToMerge;
    NSString *_nominalMergeTargetUUID;
    NSMutableSet *_faceUUIDsRequiringFaceCropGeneration;
    NSMutableSet *_rejectedMergeCandidatePersonUUIDs;
    NSMutableSet *_graphDedupePersonUUIDs;
    BOOL _didUnsetUserFeedback;
}


@property (readonly, nonatomic) NSInteger accessScopeOptionsRequirement;
@property (nonatomic) unsigned short ageType;
@property (readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property (readonly, nonatomic) NSString *clientName;
@property (copy, nonatomic) NSDictionary *contactMatchingDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) short detectionType;
@property (copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *facesHelper; // ivar: _facesHelper
@property (nonatomic) unsigned short genderType;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic, getter=isInPersonNamingModel) BOOL inPersonNamingModel;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *invalidMergeCandidatesHelper; // ivar: _invalidMergeCandidatesHelper
@property (readonly) BOOL isNewRequest;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *keyFaceHelper; // ivar: _keyFaceHelper
@property (nonatomic) short keyFacePickSource;
@property (readonly, nonatomic) NSString *managedEntityName;
@property (nonatomic) NSUInteger manualOrder;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *mergeCandidatesHelper; // ivar: _mergeCandidatesHelper
@property (readonly, getter=isMutated) BOOL mutated;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (copy, nonatomic) NSString *personUri;
@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedPerson;
@property (nonatomic) unsigned short questionType;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *rejectedFacesHelper; // ivar: _rejectedFacesHelper
@property (nonatomic) unsigned short sexType;
@property (nonatomic) BOOL shouldPerformConcurrentWork;
@property (nonatomic) unsigned short suggestedForClientType;
@property (readonly) Class superclass;
@property (retain, nonatomic) PHPerson *targetPerson; // ivar: _targetPerson
@property (nonatomic) NSInteger type;
@property (copy, nonatomic) PHUserFeedback *userFeedback; // ivar: _userFeedback
@property (nonatomic, getter=isVerified) BOOL verified;
@property (nonatomic) NSInteger verifiedType;


+(id)changeRequestForDedupingGraphPersons:(id)arg0 ;
+(id)changeRequestForMergingPersons:(id)arg0 ;
+(id)changeRequestForMergingPersons:(id)arg0 nominalTargetIdentifier:(id)arg1 ;
+(id)changeRequestForPerson:(id)arg0 ;
+(id)changeRequestsForMergeCandidatePersons:(id)arg0 ;
+(id)creationRequestForPerson;
+(void)deletePersons:(id)arg0 ;
-(BOOL)_containsUserMutations;
-(BOOL)_hasMutationForVerifiedType:(*int)arg0 ;
-(BOOL)_shouldPromotePerson:(id)arg0 toVerifiedType:(*int)arg1 ;
-(BOOL)applyMutationsToManagedObject:(id)arg0 photoLibrary:(id)arg1 error:(*id)arg2 ;
-(BOOL)validateMutationsToManagedObject:(id)arg0 error:(*id)arg1 ;
-(id)_existentFaceObjectIDs;
-(id)_existentInvalidMergeCandidateObjectIDs;
-(id)_existentMergeCandidateObjectIDs;
-(id)_existentRejectedFaceObjectIDs;
-(id)_mutableFaceObjectIDsAndUUIDs;
-(id)_mutableInvalidMergeCandidateObjectIDsAndUUIDs;
-(id)_mutableKeyFaceObjectIDsAndUUIDs;
-(id)_mutableMergeCandidateObjectIDsAndUUIDs;
-(id)_mutableRejectedFacesObjectIDsAndUUIDs;
-(id)_mutableRequiringFaceCropGenerationFacesUUIDs;
-(id)_noMinimumFaceCountPersonFetchOptions;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg0 error:(*id)arg1 ;
-(id)initForNewObject;
-(id)initWithUUID:(id)arg0 objectID:(id)arg1 ;
-(id)initWithXPCDict:(id)arg0 request:(id)arg1 clientAuthorization:(id)arg2 ;
-(id)personUUID;
-(void)_prepareKeyFaceHelperIfNeeded;
-(void)_setGraphDedupePersons:(id)arg0 ;
-(void)_setKeyFace:(id)arg0 forCluster:(BOOL)arg1 pickSource:(short)arg2 ;
-(void)_setNominalMergeTargetUUID:(id)arg0 ;
-(void)addFaces:(id)arg0 ;
-(void)addInvalidMergeCandidatePersons:(id)arg0 ;
-(void)addMergeCandidatePersons:(id)arg0 ;
-(void)addRejectedFaces:(id)arg0 ;
-(void)addRejectedFaces:(id)arg0 forCluster:(BOOL)arg1 ;
-(void)encodeToXPCDict:(id)arg0 ;
-(void)mergePersons:(id)arg0 ;
-(void)persistSuggestionForClient:(NSUInteger)arg0 ;
-(void)rejectMergeCandidatePersons:(id)arg0 ;
-(void)removeFaces:(id)arg0 ;
-(void)removeMergeCandidatePersons:(id)arg0 ;
-(void)removeRejectedFaces:(id)arg0 ;
-(void)setKeyFace:(id)arg0 ;
-(void)setKeyFace:(id)arg0 forCluster:(BOOL)arg1 ;
-(void)setKeyFaceForUserPick:(id)arg0 ;
-(void)setKeyFaceForUserPick:(id)arg0 forCluster:(BOOL)arg1 ;
-(void)setPersonUUID:(id)arg0 ;


@end


#endif