// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHCLOUDSHAREDALBUMCHANGEREQUEST_H
#define PHCLOUDSHAREDALBUMCHANGEREQUEST_H

@class NSString, NSMutableArray;


#import "PHChangeRequest.h"
#import "PHCloudSharedAlbum.h"

@interface PHCloudSharedAlbumChangeRequest : PHChangeRequest {
    BOOL _isPublic;
    BOOL _didSetIsPublic;
}


@property (nonatomic) BOOL cloudMultipleContributorsEnabled;
@property (nonatomic) BOOL cloudMultipleContributorsEnabledLocal;
@property (retain, nonatomic) NSString *cloudOwnerEmail; // ivar: _cloudOwnerEmail
@property (retain, nonatomic) NSString *cloudOwnerFirstName;
@property (retain, nonatomic) NSString *cloudOwnerFullName;
@property (retain, nonatomic) NSString *cloudOwnerLastName;
@property (nonatomic) BOOL cloudPublicURLEnabled; // ivar: _cloudPublicURLEnabled
@property (nonatomic) BOOL cloudPublicURLEnabledLocal; // ivar: _cloudPublicURLEnabledLocal
@property (retain, nonatomic) PHCloudSharedAlbum *cloudSharedAlbum; // ivar: _cloudSharedAlbum
@property (retain, nonatomic) NSMutableArray *invitationRecordGUIDsToRemove; // ivar: _invitationRecordGUIDsToRemove
@property (retain, nonatomic) NSMutableArray *invitationsToAdd; // ivar: _invitationsToAdd
@property (nonatomic) BOOL isOwned;
@property (nonatomic) BOOL isPublic;
@property (retain, nonatomic) NSString *title;


+(id)changeRequestForCloudSharedAlbum:(id)arg0 ;
+(id)creationRequestForCloudSharedAlbumWithTitle:(id)arg0 ;
+(void)deleteCloudSharedAlbum:(id)arg0 ;
-(BOOL)applyMutationsToManagedObject:(id)arg0 photoLibrary:(id)arg1 error:(*id)arg2 ;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg0 error:(*id)arg1 ;
-(id)initForNewObject;
-(id)initWithUUID:(id)arg0 objectID:(id)arg1 ;
-(id)initWithXPCDict:(id)arg0 request:(id)arg1 clientAuthorization:(id)arg2 ;
-(id)managedEntityName;
-(id)placeholderForCreatedCloudSharedAlbum;
-(void)addInvitationRecordWithFirstName:(id)arg0 lastName:(id)arg1 fullName:(id)arg2 emails:(id)arg3 phones:(id)arg4 ;
-(void)encodeToXPCDict:(id)arg0 ;
-(void)removeCloudSharedAlbumInvitationRecords:(id)arg0 ;
-(void)stopSharing;


@end


#endif