// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFFAIRPLAYMIGRATIONCONTROLLER_H
#define PFFAIRPLAYMIGRATIONCONTROLLER_H


#import <Foundation/Foundation.h>


@interface PFFairPlayMigrationController : NSObject {
    ? metadataLoader;
    ? validationManager;
    ? secureKeyRequestStorage;
    ? invalidationManager;
    ? fairPlayEpisodeDataFetcher;
    ? legacyDownloadRenewalManager;
    ? internalQueue;
}




+(id)sharedInstance;
-(id)init;
-(void)migrateIfNecessaryWithCompletion:(id)arg0 ;
-(void)rollbackIfNecessaryWithCompletion:(id)arg0 ;


@end


#endif