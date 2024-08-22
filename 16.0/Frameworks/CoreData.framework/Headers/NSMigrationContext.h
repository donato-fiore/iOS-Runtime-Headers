// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSMIGRATIONCONTEXT_H
#define NSMIGRATIONCONTEXT_H

@class NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>

#import "NSMigrationManager.h"
#import "NSEntityMapping.h"
#import "NSPropertyMapping.h"

@interface NSMigrationContext : NSObject {
    NSMutableDictionary *_bySourceAssociationTable;
    NSMutableDictionary *_byDestinationAssociationTable;
    NSMutableDictionary *_byMappingBySourceAssociationTable;
    NSMutableDictionary *_byMappingByDestinationAssociationTable;
    NSMigrationManager *_migrationManager;
    NSEntityMapping *_currentMapping;
    NSUInteger _currentStep;
    NSPropertyMapping *_currentPropertyMapping;
    NSString *_destinationConfigurationForCloudKitValidation;
}




-(id)initWithMigrationManager:(id)arg0 ;
-(void)dealloc;


@end


#endif