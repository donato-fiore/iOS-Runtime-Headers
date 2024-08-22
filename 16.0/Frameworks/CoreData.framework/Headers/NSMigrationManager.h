// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSMIGRATIONMANAGER_H
#define NSMIGRATIONMANAGER_H

@class NSDictionary, NSError, NSString;

#import <Foundation/Foundation.h>

#import "NSManagedObjectModel.h"
#import "NSMappingModel.h"
#import "NSManagedObjectContext.h"
#import "NSMigrationContext.h"
#import "NSEntityMapping.h"

@interface NSMigrationManager : NSObject {
    NSManagedObjectModel *_sourceModel;
    NSDictionary *_sourceEntitiesByVersionHash;
    NSManagedObjectModel *_destinationModel;
    NSDictionary *_destinationEntitiesByVersionHash;
    NSMappingModel *_mappingModel;
    NSManagedObjectContext *_sourceManagedObjectContext;
    NSManagedObjectContext *_destinationManagedObjectContext;
    NSMigrationContext *_migrationContext;
    NSDictionary *_userInfo;
    _migrationManagerFlags _migrationManagerFlags;
    NSError *_migrationCancellationError;
    id *_reserved1;
    id *_reserved2;
    id *_reserved3;
    id *_reserved4;
}


@property (readonly) NSEntityMapping *currentEntityMapping;
@property (retain, nonatomic) NSString *destinationConfigurationForCloudKitValidation;
@property (retain, nonatomic) NSString *destinationConfigurationForCloudKitValidation; // ivar: _destinationConfigurationForCloudKitValidation
@property (readonly) NSManagedObjectContext *destinationContext;
@property (readonly) NSManagedObjectModel *destinationModel;
@property (readonly) NSMappingModel *mappingModel;
@property (readonly) float migrationProgress;
@property (readonly) NSManagedObjectContext *sourceContext;
@property (readonly) NSManagedObjectModel *sourceModel;
@property (retain, nonatomic) NSDictionary *userInfo;
@property BOOL usesStoreSpecificMigrationManager;


+(BOOL)_canMigrateWithMappingModel:(id)arg0 ;
+(int)migrationDebugLevel;
+(void)setMigrationDebugLevel:(int)arg0 ;
-(BOOL)migrateStoreFromURL:(id)arg0 type:(id)arg1 options:(id)arg2 withMappingModel:(id)arg3 toDestinationURL:(id)arg4 destinationType:(id)arg5 destinationOptions:(id)arg6 error:(*id)arg7 ;
-(id)currentPropertyMapping;
-(id)destinationEntityForEntityMapping:(id)arg0 ;
-(id)destinationInstancesForEntityMappingNamed:(id)arg0 sourceInstances:(id)arg1 ;
-(id)destinationInstancesForSourceRelationshipNamed:(id)arg0 sourceInstances:(id)arg1 ;
-(id)fetchRequestForSourceEntityNamed:(id)arg0 predicateString:(id)arg1 ;
-(id)fetchRequestForSourceEntityNamed:(id)arg0 predicateString:(id)arg1 includesSubentities:(BOOL)arg2 ;
-(id)initWithSourceModel:(id)arg0 destinationModel:(id)arg1 ;
-(id)sourceEntityForEntityMapping:(id)arg0 ;
-(id)sourceInstancesForEntityMappingNamed:(id)arg0 destinationInstances:(id)arg1 ;
-(void)associateSourceInstance:(id)arg0 withDestinationInstance:(id)arg1 forEntityMapping:(id)arg2 ;
-(void)cancelMigrationWithError:(id)arg0 ;
-(void)dealloc;
-(void)reset;


@end


#endif