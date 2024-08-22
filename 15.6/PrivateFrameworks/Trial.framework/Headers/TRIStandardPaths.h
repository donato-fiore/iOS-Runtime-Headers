// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRISTANDARDPATHS_H
#define TRISTANDARDPATHS_H

@class NSString;
@protocol TRIPaths;

#import <Foundation/Foundation.h>

#import "TRIAppContainer.h"

@interface TRIStandardPaths : NSObject <TRIPaths>

 {
    unsigned int _schemaVersion;
    TRIAppContainer *_container;
    BOOL _isClient;
    atomic_flag _loggedRootDir;
    NSString *_containerPath;
}




+(id)resolveHardCodedPath:(id)arg0 ;
+(id)schemaVersionFile;
+(id)sharedSystemPaths;
+(unsigned int)currentSchemaVersion;
+(unsigned int)legacySchemaVersion;
+(unsigned int)resetStorageRequestSchemaVersion;
-(BOOL)validateWithError:(*id)arg0 ;
-(id)_pathErrorWithDescription:(id)arg0 ;
-(id)_realHomeDirectory;
-(id)_trialSystemRootDir;
-(id)_trialSystemRootDirWithError:(*id)arg0 ;
-(id)_versionSpecificStorageDir;
-(id)_versionSpecificSystemStorageDir;
-(id)assetStore;
-(id)container;
-(id)containerDir;
-(id)databaseDir;
-(id)decryptionKeyDirForAppleInternal:(BOOL)arg0 ;
-(id)deviceIdentifierFile;
-(id)experimentsDir;
-(id)init;
-(id)initWithCurrentSchemaVersion;
-(id)initWithSchemaVersion:(unsigned int)arg0 ;
-(id)initWithSchemaVersion:(unsigned int)arg0 container:(id)arg1 asClientProcess:(BOOL)arg2 ;
-(id)localTempDir;
-(id)logDir;
-(id)namespaceDescriptorsDefaultDir;
-(id)namespaceDescriptorsDir;
-(id)namespaceDescriptorsExperimentDir;
-(id)namespaceDescriptorsPathForLayer:(NSUInteger)arg0 ;
-(id)namespaceDescriptorsRolloutDir;
-(id)pathsForContainer:(id)arg0 asClientProcess:(BOOL)arg1 ;
-(id)subjectDataFile;
-(id)systemDataFile;
-(id)treatmentsDir;
-(id)trialRootDir;
-(id)trialRootDirWithError:(*id)arg0 ;
-(id)trialRootVolume;


@end


#endif