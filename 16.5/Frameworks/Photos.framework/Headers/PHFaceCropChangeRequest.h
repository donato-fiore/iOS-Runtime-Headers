// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHFACECROPCHANGEREQUEST_H
#define PHFACECROPCHANGEREQUEST_H

@class NSString, NSManagedObjectID, NSData;
@protocol PHInsertChangeRequest, PHUpdateChangeRequest;


#import "PHChangeRequest.h"
#import "PHRelationshipChangeRequestHelper.h"
#import "PHObjectPlaceholder.h"

@interface PHFaceCropChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>



@property (readonly, nonatomic) NSInteger accessScopeOptionsRequirement;
@property (readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property (readonly, nonatomic) NSString *clientName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *faceHelper; // ivar: _faceHelper
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isNewRequest;
@property (readonly, nonatomic) NSString *managedEntityName;
@property (readonly, getter=isMutated) BOOL mutated;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (copy, nonatomic) NSString *originatingFaceCropUUID; // ivar: _originatingFaceCropUUID
@property (copy, nonatomic) NSString *originatingFaceUUID; // ivar: _originatingFaceUUID
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *personHelper; // ivar: _personHelper
@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedFaceCrop;
@property (retain, nonatomic) NSData *resourceData;
@property (nonatomic) BOOL shouldPerformConcurrentWork;
@property (nonatomic) short state;
@property (readonly) Class superclass;
@property (nonatomic) short type;


+(id)_creationRequestForFaceCropWithOriginatingFace:(id)arg0 resourceData:(id)arg1 person:(id)arg2 ;
+(id)_creationRequestForFaceCropWithOriginatingFace:(id)arg0 resourceData:(id)arg1 personLocalIdentifier:(id)arg2 ;
+(id)changeRequestForFaceCrop:(id)arg0 ;
+(id)creationRequestForFaceCropCopyFromFaceCrop:(id)arg0 withType:(short)arg1 onPerson:(id)arg2 ;
+(id)creationRequestsForFaceCropsWithOriginatingFace:(id)arg0 resourceData:(id)arg1 ;
+(void)deleteFaceCrops:(id)arg0 ;
-(BOOL)applyMutationsToManagedObject:(id)arg0 photoLibrary:(id)arg1 error:(*id)arg2 ;
-(BOOL)validateInsertIntoPhotoLibrary:(id)arg0 error:(*id)arg1 ;
-(id)_mutableFaceObjectIDsAndUUIDs;
-(id)_mutablePersonObjectIDsAndUUIDs;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg0 error:(*id)arg1 ;
-(id)initForNewObject;
-(id)initWithUUID:(id)arg0 objectID:(id)arg1 ;
-(id)initWithXPCDict:(id)arg0 request:(id)arg1 clientAuthorization:(id)arg2 ;
-(void)_prepareFaceHelperIfNeeded;
-(void)_preparePersonHelperIfNeeded;
-(void)encodeToXPCDict:(id)arg0 ;
-(void)setFace:(id)arg0 ;


@end


#endif