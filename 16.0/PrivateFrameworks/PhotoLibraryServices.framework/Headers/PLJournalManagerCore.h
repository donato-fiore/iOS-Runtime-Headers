// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLJOURNALMANAGERCORE_H
#define PLJOURNALMANAGERCORE_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface PLJournalManagerCore : NSObject {
    NSURL *_baseURL;
    NSURL *_historyTokenURL;
}




+(BOOL)appendSnapshotWithJournal:(id)arg0 usingManagedObjectContext:(id)arg1 changedKeys:(id)arg2 error:(*id)arg3 ;
+(BOOL)createSnapshotWithJournal:(id)arg0 usingManagedObjectContext:(id)arg1 error:(*id)arg2 ;
+(id)_nextValidPayloadWithObjectEnumerator:(id)arg0 changedKeys:(id)arg1 ;
+(id)_objectEnumeratorForJournal:(id)arg0 usingManagedObjectContext:(id)arg1 error:(*id)arg2 ;
+(id)payloadClasses;
+(void)validatePayloadClassesForManagedObjectModel:(id)arg0 ;
-(BOOL)saveHistoryToken:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithBaseURL:(id)arg0 ;
-(void)removeHistoryToken;


@end


#endif