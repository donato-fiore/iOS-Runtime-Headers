// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CORETHEMEDEFINITIONMIGRATOR_H
#define CORETHEMEDEFINITIONMIGRATOR_H

@class NSMigrationManager, NSURL, NSString;

#import <Foundation/Foundation.h>


@interface CoreThemeDefinitionMigrator : NSObject {
    NSMigrationManager *_migrationManager;
    NSURL *_documentURL;
    NSInteger _oldVersion;
    NSInteger _newVersion;
}


@property (copy) NSString *temporaryMigrationPath; // ivar: temporaryMigrationPath


-(BOOL)_checkDiskSpace:(*id)arg0 ;
-(BOOL)_updateMetadata:(*id)arg0 ;
-(BOOL)migrateWithError:(*id)arg0 ;
-(id)initWithURL:(id)arg0 oldVersion:(NSInteger)arg1 newVersion:(NSInteger)arg2 ;
-(id)mappingModelForMigrationWithError:(*id)arg0 ;
-(void)dealloc;


@end


#endif