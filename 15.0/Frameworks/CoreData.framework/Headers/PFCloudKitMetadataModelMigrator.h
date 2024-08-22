// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFCLOUDKITMETADATAMODELMIGRATOR_H
#define PFCLOUDKITMETADATAMODELMIGRATOR_H


#import <Foundation/Foundation.h>

#import "NSSQLCore.h"
#import "NSManagedObjectContext.h"
#import "PFCloudKitMetadataMigrationContext.h"
#import "PFCloudKitMetricsClient.h"

@interface PFCloudKitMetadataModelMigrator : NSObject {
    NSSQLCore *_store;
    NSManagedObjectContext *_metadataContext;
    PFCloudKitMetadataMigrationContext *_context;
    NSInteger _databaseScope;
    PFCloudKitMetricsClient *_metricsClient;
}




-(id)initWithStore:(id)arg0 metadataContext:(id)arg1 databaseScope:(NSInteger)arg2 metricsClient:(id)arg3 ;
-(void)dealloc;


@end


#endif