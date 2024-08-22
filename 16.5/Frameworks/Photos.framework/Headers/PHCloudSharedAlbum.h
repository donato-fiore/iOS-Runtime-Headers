// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHCLOUDSHAREDALBUM_H
#define PHCLOUDSHAREDALBUM_H

@class NSString, NSNumber, NSArray;


#import "PHAssetCollection.h"

@interface PHCloudSharedAlbum : PHAssetCollection

@property (readonly, nonatomic) short cloudAlbumSubtype; // ivar: _cloudAlbumSubtype
@property (readonly, nonatomic, getter=isCloudMultipleContributorsEnabled) BOOL cloudMultipleContributorsEnabled; // ivar: _cloudMultipleContributorsEnabled
@property (readonly, nonatomic) NSString *cloudOwnerEmail;
@property (readonly, retain, nonatomic) NSNumber *cloudOwnerEmailKey; // ivar: _cloudOwnerEmailKey
@property (readonly, retain, nonatomic) NSString *cloudOwnerFirstName; // ivar: _cloudOwnerFirstName
@property (readonly, retain, nonatomic) NSString *cloudOwnerFullName; // ivar: _cloudOwnerFullName
@property (readonly, retain, nonatomic) NSString *cloudOwnerHashedPersonID; // ivar: _cloudOwnerHashedPersonID
@property (readonly, retain, nonatomic) NSString *cloudOwnerLastName; // ivar: _cloudOwnerLastName
@property (readonly, nonatomic) NSString *cloudOwnerPersonID; // ivar: _cloudOwnerPersonID
@property (readonly, nonatomic) NSString *cloudOwnerPhone;
@property (readonly, nonatomic) NSArray *invitationRecords;
@property (readonly, nonatomic, getter=isOwned) BOOL owned; // ivar: _owned
@property (readonly, nonatomic) BOOL publicURLEnabled; // ivar: _publicURLEnabled


+(id)fetchCloudSharedAlbumsWithGUIDs:(id)arg0 options:(id)arg1 ;
+(id)fetchCloudSharedAlbumsWithOptions:(id)arg0 ;
+(id)fetchType;
+(id)identifierCode;
+(id)managedEntityName;
+(id)propertiesToFetchWithHint:(NSUInteger)arg0 ;
-(BOOL)canPerformEditOperation:(NSInteger)arg0 ;
-(BOOL)collectionHasFixedOrder;
-(BOOL)isCloudSharedAlbum;
-(BOOL)isMultipleContributorCloudSharedAlbum;
-(Class)changeRequestClass;
-(id)description;
-(id)initWithFetchDictionary:(id)arg0 propertyHint:(NSUInteger)arg1 photoLibrary:(id)arg2 ;
-(id)localizedSharedByLabelAllowsEmail:(BOOL)arg0 ;


@end


#endif