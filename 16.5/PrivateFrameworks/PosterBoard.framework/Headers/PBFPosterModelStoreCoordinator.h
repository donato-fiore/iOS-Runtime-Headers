// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFPOSTERMODELSTORECOORDINATOR_H
#define PBFPOSTERMODELSTORECOORDINATOR_H

@class NSURL, NSDictionary, NSMutableDictionary, NSString, NSFileManager, NSUUID, NSSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PBFPosterModelStoreCoordinator : NSObject {
    NSURL *_providerInfoURL;
    NSURL *_containerVersionsURL;
    NSURL *_providerURL;
    NSURL *_transientInternalInfoURL;
    NSDictionary *_providerInfo;
    NSMutableDictionary *_posterIdentityBySupplementByVersion;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property (readonly, nonatomic) NSString *extensionIdentifier; // ivar: _extensionIdentifier
@property (readonly, nonatomic) NSFileManager *fileManager; // ivar: _fileManager
@property (readonly, copy, nonatomic) NSURL *identifierURL; // ivar: _identifierURL
@property (readonly, copy, nonatomic) NSUUID *posterUUID; // ivar: _posterUUID
@property (copy, nonatomic) NSDictionary *providerInfo;
@property (readonly, nonatomic) NSSet *snapshotURLs;


+(BOOL)shouldBeExcludedFromBackup;
+(NSInteger)type;
+(id)createNewStoreCoordinatorWithPath:(id)arg0 error:(*id)arg1 ;
+(id)expectedFileProtection;
+(id)expectedURLResourceValuesForAllPaths;
-(BOOL)_accessQueue_configureFileSystemForNewContents:(id)arg0 atPath:(id)arg1 error:(*id)arg2 ;
-(BOOL)hasKnownVersions;
-(id)_accessQueue_addNewSupplementWithError:(*id)arg0 ;
-(id)_accessQueue_addNewVersionWithContents:(id)arg0 error:(*id)arg1 ;
-(id)_accessQueue_buildIdentityForVersion:(NSUInteger)arg0 supplement:(NSUInteger)arg1 ;
-(id)_accessQueue_fetchIdentityForVersion:(NSUInteger)arg0 supplement:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)_accessQueue_providerInfoWithError:(*id)arg0 ;
-(id)_posterPathForIdentity:(id)arg0 ;
-(id)addNewSupplementWithError:(*id)arg0 ;
-(id)addNewVersionWithContents:(id)arg0 error:(*id)arg1 ;
-(id)allPosterPaths;
-(id)checkEnvironmentConsistency;
-(id)identityForVersion:(NSUInteger)arg0 supplement:(NSUInteger)arg1 ;
-(id)identityOfLatestVersion;
-(id)initExistingStoreCoordinatorWithExtensionIdentifier:(id)arg0 identifierURL:(id)arg1 posterUUID:(id)arg2 ;
-(id)initWithPath:(id)arg0 ;
-(id)pathForIdentity:(id)arg0 ;
-(id)pathForVersion:(NSUInteger)arg0 supplement:(NSUInteger)arg1 ;
-(id)pathOfLatestVersion;
-(void)_accessQueue_enumerateFilesWithinStoreIncludingKeys:(id)arg0 usingBlock:(id)arg1 ;
-(void)_accessQueue_removeSupplement:(NSUInteger)arg0 forVersion:(NSUInteger)arg1 error:(*id)arg2 ;
-(void)_accessQueue_writeProviderInfo:(id)arg0 error:(*id)arg1 ;
-(void)enumerateFilesWithinStoreIncludingKeys:(id)arg0 usingBlock:(id)arg1 ;
-(void)prepareForDeletion;
-(void)reapEverythingExceptLatestVersion;
-(void)removeSupplement:(NSUInteger)arg0 forVersion:(NSUInteger)arg1 error:(*id)arg2 ;


@end


#endif