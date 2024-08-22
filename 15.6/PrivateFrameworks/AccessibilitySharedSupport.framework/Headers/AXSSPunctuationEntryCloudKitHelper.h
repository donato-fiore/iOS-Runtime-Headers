// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXSSPUNCTUATIONENTRYCLOUDKITHELPER_H
#define AXSSPUNCTUATIONENTRYCLOUDKITHELPER_H

@class AXDispatchTimer;


#import "AXSSCloudKitHelper.h"

@interface AXSSPunctuationEntryCloudKitHelper : AXSSCloudKitHelper {
    AXDispatchTimer *_changeCoalescer;
}




-(Class)managedObjectClass;
-(id)apsEnvironment;
-(id)createCKRecordFromEntry:(id)arg0 ;
-(id)createCKRecordFromObject:(id)arg0 ;
-(id)recordType;
-(id)testRecordForSchemaCreation:(id)arg0 ;
-(void)_processPunctuationEntryFromCKRecord:(id)arg0 ;
-(void)beginWatchingForChanges;
-(void)clearRecordsForPurging:(id)arg0 ;
-(void)dealloc;
-(void)processServerUpdateChanges:(id)arg0 moc:(id)arg1 recordNameToManagedObject:(id)arg2 ;
-(void)punctuationGroupChanged:(id)arg0 ;
-(void)retrieveLocalChangesForCloud:(id)arg0 ;


@end


#endif