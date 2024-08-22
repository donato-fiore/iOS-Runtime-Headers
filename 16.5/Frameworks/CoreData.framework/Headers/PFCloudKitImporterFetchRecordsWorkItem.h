// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFCLOUDKITIMPORTERFETCHRECORDSWORKITEM_H
#define PFCLOUDKITIMPORTERFETCHRECORDSWORKITEM_H

@class NSMutableArray, NSMutableDictionary;


#import "PFCloudKitImportRecordsWorkItem.h"

@interface PFCloudKitImporterFetchRecordsWorkItem : PFCloudKitImportRecordsWorkItem {
    NSMutableArray *_updatedObjectIDs;
    NSMutableDictionary *_failedObjectIDsToError;
    NSMutableDictionary *_recordIDToObjectID;
    NSMutableDictionary *_operationsToExecute;
}




-(id)createMirroringResultForRequest:(id)arg0 storeIdentifier:(id)arg1 success:(BOOL)arg2 madeChanges:(BOOL)arg3 error:(id)arg4 ;
-(id)description;
-(id)entityNameToAttributesToUpdate;
-(id)entityNameToRelationshipsToUpdate;
-(id)initWithOptions:(id)arg0 request:(id)arg1 ;
-(void)dealloc;
-(void)executeImportOperationsAndAccumulateRecordsWithManagedObjectContext:(id)arg0 completion:(id)arg1 ;


@end


#endif