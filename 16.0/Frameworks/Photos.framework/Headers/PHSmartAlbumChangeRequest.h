// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHSMARTALBUMCHANGEREQUEST_H
#define PHSMARTALBUMCHANGEREQUEST_H

@class NSString, PLQuery;


#import "PHChangeRequest.h"
#import "PHObjectPlaceholder.h"

@interface PHSmartAlbumChangeRequest : PHChangeRequest

@property (nonatomic) BOOL customSortAscending;
@property (nonatomic) unsigned int customSortKey;
@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedSmartAlbum;
@property (retain, nonatomic) NSString *title;
@property (copy, nonatomic) PLQuery *userQuery; // ivar: _userQuery


+(id)_changeRequestForSmartAlbum:(id)arg0 userQuery:(id)arg1 ;
+(id)changeRequestForSmartAlbum:(id)arg0 ;
+(id)creationRequestForSmartAlbumCopyFromSmartAlbum:(id)arg0 ;
+(id)creationRequestForSmartAlbumWithTitle:(id)arg0 userQuery:(id)arg1 ;
+(id)validateSmartAlbumTitle:(id)arg0 error:(*id)arg1 ;
+(void)_deleteSmartAlbums:(id)arg0 withOperation:(NSInteger)arg1 topLevelSelector:(SEL)arg2 ;
+(void)deleteSmartAlbumsFromAssetCollection:(id)arg0 ;
+(void)expungeSmartAlbumsFromAssetCollection:(id)arg0 ;
+(void)undeleteSmartAlbumsFromAssetCollection:(id)arg0 ;
-(BOOL)allowMutationToManagedObject:(id)arg0 propertyKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)applyMutationsToManagedObject:(id)arg0 photoLibrary:(id)arg1 error:(*id)arg2 ;
-(BOOL)validateInsertIntoPhotoLibrary:(id)arg0 error:(*id)arg1 ;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)initForNewObject;
-(id)initWithUUID:(id)arg0 objectID:(id)arg1 ;
-(id)initWithXPCDict:(id)arg0 request:(id)arg1 clientAuthorization:(id)arg2 ;
-(id)managedEntityName;
-(void)encodeToXPCDict:(id)arg0 ;


@end


#endif