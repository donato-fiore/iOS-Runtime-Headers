// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHFACEGROUPCHANGEREQUEST_H
#define PHFACEGROUPCHANGEREQUEST_H

@class NSString, NSManagedObjectID;
@protocol PHInsertChangeRequest, PHUpdateChangeRequest;


#import "PHChangeRequest.h"
#import "PHFaceGroup.h"
#import "PHRelationshipChangeRequestHelper.h"
#import "PHObjectPlaceholder.h"

@interface PHFaceGroupChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>

 {
    PHFaceGroup *_originalFaceGroup;
}


@property (readonly, nonatomic) NSInteger accessScopeOptionsRequirement;
@property (readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property (readonly, nonatomic) NSString *clientName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *facesHelper; // ivar: _facesHelper
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isNewRequest;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *keyFaceHelper; // ivar: _keyFaceHelper
@property (readonly, nonatomic) NSString *managedEntityName;
@property (readonly, getter=isMutated) BOOL mutated;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (nonatomic) NSInteger personBuilderState;
@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedFaceGroup;
@property (nonatomic) BOOL shouldPerformConcurrentWork;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger unnamedFaceCount;


+(id)changeRequestForFaceGroup:(id)arg0 ;
+(id)creationRequestForFaceGroup;
+(void)deleteFaceGroups:(id)arg0 ;
-(BOOL)applyMutationsToManagedObject:(id)arg0 photoLibrary:(id)arg1 error:(*id)arg2 ;
-(id)_existentFaceObjectIDs;
-(id)_mutableKeyFaceObjectIDsAndUUIDs;
-(id)_mutableObjectIDsAndUUIDs;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg0 error:(*id)arg1 ;
-(id)initForNewObject;
-(id)initWithUUID:(id)arg0 objectID:(id)arg1 ;
-(id)initWithXPCDict:(id)arg0 request:(id)arg1 clientAuthorization:(id)arg2 ;
-(void)_prefetchFacesAndPersonRelationship:(id)arg0 inContext:(id)arg1 ;
-(void)_prepareFacesHelperIfNeeded;
-(void)_prepareKeyFaceHelperIfNeeded;
-(void)_setOriginalFaceGroup:(id)arg0 ;
-(void)addFaces:(id)arg0 ;
-(void)encodeToXPCDict:(id)arg0 ;
-(void)removeFaces:(id)arg0 ;
-(void)setKeyFace:(id)arg0 ;


@end


#endif