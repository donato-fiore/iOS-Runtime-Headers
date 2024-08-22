// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFUBIQUITYBASELINE_H
#define PFUBIQUITYBASELINE_H

@class NSMutableDictionary, NSString;


#import "PFUbiquitySafeSaveFile.h"
#import "PFUbiquityLocation.h"
#import "PFUbiquityBaselineMetadata.h"
#import "NSManagedObjectModel.h"
#import "_PFZipFileArchive.h"
#import "NSPersistentStore.h"

@interface PFUbiquityBaseline : PFUbiquitySafeSaveFile {
    PFUbiquityLocation *_baselineStagingLocation;
    PFUbiquityBaselineMetadata *_metadata;
    NSMutableDictionary *_storeFilenameToData;
    NSString *_storeFilename;
    NSString *_storeName;
    NSString *_modelVersionHash;
    NSManagedObjectModel *_model;
    _PFZipFileArchive *_baselineArchive;
    NSPersistentStore *_store;
}




-(BOOL)loadFileFromLocation:(id)arg0 error:(*id)arg1 ;
-(BOOL)moveToPermanentLocation:(*id)arg0 ;
-(BOOL)writeFileToLocation:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithBaselineLocation:(id)arg0 andLocalPeerID:(id)arg1 ;
-(id)initWithLocalPeerID:(id)arg0 ubiquityRootLocation:(id)arg1 forStoreWithName:(id)arg2 andManagedObjectModel:(id)arg3 ;
-(void)dealloc;


@end


#endif