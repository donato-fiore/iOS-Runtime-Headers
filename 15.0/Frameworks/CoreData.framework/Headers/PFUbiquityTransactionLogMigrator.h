// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFUBIQUITYTRANSACTIONLOGMIGRATOR_H
#define PFUBIQUITYTRANSACTIONLOGMIGRATOR_H

@class NSString, NSDictionary, NSSet;

#import <Foundation/Foundation.h>

#import "NSManagedObjectModel.h"
#import "NSMappingModel.h"

@interface PFUbiquityTransactionLogMigrator : NSObject {
    NSManagedObjectModel *_srcModel;
    NSManagedObjectModel *_dstModel;
    NSMappingModel *_mappingModel;
    NSString *_localPeerID;
    NSDictionary *_mappingsByEntityName;
    NSSet *_removedEntities;
    BOOL _throttleLogs;
}




-(id)createDestinationObjectContentFromSourceObjectContent:(id)arg0 withEntityMapping:(id)arg1 migrationContext:(id)arg2 ;
-(id)createDestinationObjectsFromSourceObjects:(id)arg0 migrationContext:(id)arg1 ;
-(id)initWithSourceModel:(id)arg0 destinationModel:(id)arg1 mappingModel:(id)arg2 localPeerID:(id)arg3 ;
-(void)dealloc;
-(void)populateMappingsByEntityName;


@end


#endif