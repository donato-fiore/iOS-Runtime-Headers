// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSTOREMIGRATIONPOLICY_H
#define NSSTOREMIGRATIONPOLICY_H

@class NSURL, NSString, NSDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "NSPersistentStoreCoordinator.h"
#import "NSManagedObjectModel.h"
#import "NSMappingModel.h"
#import "NSMigrationManager.h"

@interface NSStoreMigrationPolicy : NSObject {
    NSPersistentStoreCoordinator *_coordinator;
    NSURL *_sourceURL;
    NSString *_sourceConfiguration;
    NSDictionary *_sourceOptions;
    NSManagedObjectModel *_sourceModel;
    NSDictionary *_sourceMetadata;
    NSMappingModel *_mappingModel;
    NSURL *_destinationURL;
    NSString *_destinationType;
    NSString *_destinationConfiguration;
    NSDictionary *_destinationOptions;
    NSMigrationManager *_migrationManager;
    NSArray *_resourceBundles;
    NSInteger _workingWithSkewedSource;
    BOOL _forcedMigration;
    *void _reserved2;
    *void _reserved3;
    *void _reserved4;
}




+(id)destinationURLForMigrationSourceURL:(id)arg0 createDocumentReplacementDirectory:(BOOL)arg1 error:(*id)arg2 ;
+(id)migrationStoreOptionsFromStoreOptions:(id)arg0 ;
+(int)migrationDebugLevel;
+(void)setMigrationDebugLevel:(int)arg0 ;
-(id)createMigrationManagerForSourceModel:(id)arg0 destinationModel:(id)arg1 error:(*id)arg2 ;
-(id)migrateStoreAtURL:(id)arg0 withManager:(id)arg1 metadata:(id)arg2 options:(id)arg3 error:(*id)arg4 ;
-(id)sourceModelForStoreAtURL:(id)arg0 metadata:(id)arg1 error:(*id)arg2 ;
-(void)dealloc;


@end


#endif