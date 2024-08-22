// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMMETADATA_H
#define MCMMETADATA_H

@class NSString, NSURL, NSDictionary, NSArray, NSNumber, NSUUID;
@protocol MCMMetadata;


#import "MCMMetadataMinimal.h"
#import "MCMConcreteContainerIdentityForLibsystem.h"
#import "MCMContainerPath.h"
#import "MCMFSNode.h"
#import "MCMUserIdentity.h"

@interface MCMMetadata : MCMMetadataMinimal <MCMMetadata>



@property (readonly, nonatomic) NSUInteger containerClass;
@property (readonly, nonatomic) MCMConcreteContainerIdentityForLibsystem *containerIdentity;
@property (readonly, nonatomic) MCMContainerPath *containerPath;
@property (readonly, nonatomic) int dataProtectionClass; // ivar: _dataProtectionClass
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL existed;
@property (readonly, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly, nonatomic) MCMFSNode *fsNode; // ivar: _fsNode
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDictionary *identityLinkMap; // ivar: _identityLinkMap
@property (readonly, nonatomic) NSDictionary *info; // ivar: _info
@property (readonly, nonatomic) NSArray *links; // ivar: _links
@property (readonly, nonatomic) unsigned int platform;
@property (readonly, nonatomic) NSNumber *schemaVersion;
@property (readonly, nonatomic) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL transient;
@property (readonly, nonatomic) MCMUserIdentity *userIdentity;
@property (readonly, nonatomic) NSString *userManagedAssetsDirName; // ivar: _userManagedAssetsDirName
@property (readonly, nonatomic) NSUUID *uuid;


-(BOOL)_initFromMetadataInDictionary:(id)arg0 containerPath:(id)arg1 userIdentity:(id)arg2 containerClass:(NSUInteger)arg3 fsNode:(id)arg4 fileURL:(id)arg5 userIdentityCache:(id)arg6 error:(*id)arg7 ;
-(BOOL)_persisted;
-(BOOL)_writeFileURL:(id)arg0 dictionary:(id)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)verifyWithError:(*id)arg0 ;
-(BOOL)writeMetadataToDiskWithError:(*id)arg0 ;
-(BOOL)writeMetadataToFileURL:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initByReadingAndValidatingMetadataAtFileURL:(id)arg0 containerPath:(id)arg1 userIdentity:(id)arg2 containerClass:(NSUInteger)arg3 userIdentityCache:(id)arg4 error:(*id)arg5 ;
-(id)initWithContainerIdentity:(id)arg0 containerPath:(id)arg1 schemaVersion:(id)arg2 userIdentityCache:(id)arg3 ;
-(id)initWithContainerIdentity:(id)arg0 info:(id)arg1 containerPath:(id)arg2 userManagedAssetsDirName:(id)arg3 schemaVersion:(id)arg4 dataProtectionClass:(int)arg5 fsNode:(id)arg6 links:(id)arg7 userIdentityCache:(id)arg8 ;
-(id)initWithContainerIdentity:(id)arg0 info:(id)arg1 containerPath:(id)arg2 userManagedAssetsDirName:(id)arg3 schemaVersion:(id)arg4 dataProtectionClass:(int)arg5 userIdentityCache:(id)arg6 ;
-(id)linkForContainerIdentity:(id)arg0 ;
-(id)metadataByAddingLink:(id)arg0 updatedLink:(*id)arg1 error:(*id)arg2 ;
-(id)metadataByChangingDataProtectionClass:(int)arg0 ;
-(id)metadataByRemovingLink:(id)arg0 attributes:(NSUInteger)arg1 updatedLink:(*id)arg2 error:(*id)arg3 ;
-(id)metadataByReplacingLinks:(id)arg0 ;
-(id)metadataBySettingInfoValue:(id)arg0 forKey:(id)arg1 ;
-(id)metadataBySettingUserManagedAssetsDirName:(id)arg0 ;
-(struct container_object_s *)createLibsystemContainerWithError:(*id)arg0 ;
-(void)_clearPersistedStatus;
-(void)_initIdentityMap;


@end


#endif