// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXSSPUNCTUATIONGROUPCLOUDKITHELPER_H
#define AXSSPUNCTUATIONGROUPCLOUDKITHELPER_H

@class AXDispatchTimer;


#import "AXSSCloudKitHelper.h"

@interface AXSSPunctuationGroupCloudKitHelper : AXSSCloudKitHelper {
    AXDispatchTimer *_changeCoalescer;
}




-(Class)managedObjectClass;
-(id)apsEnvironment;
-(id)createCKRecordFromGroup:(id)arg0 ;
-(id)createCKRecordFromObject:(id)arg0 ;
-(id)recordType;
-(id)testRecordForSchemaCreation:(id)arg0 ;
-(void)beginWatchingForChanges;
-(void)clearRecordsForPurging:(id)arg0 ;
-(void)dealloc;
-(void)processRecordDeletionsFromServer:(id)arg0 ;
-(void)processServerUpdateChanges:(id)arg0 moc:(id)arg1 recordNameToManagedObject:(id)arg2 ;
-(void)punctuationGroupsChanged:(id)arg0 ;
-(void)retrieveLocalChangesForCloud:(id)arg0 ;


@end


#endif