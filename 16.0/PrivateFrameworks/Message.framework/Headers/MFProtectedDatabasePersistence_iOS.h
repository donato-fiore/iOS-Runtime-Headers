// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFPROTECTEDDATABASEPERSISTENCE_IOS_H
#define MFPROTECTEDDATABASEPERSISTENCE_IOS_H

@class EDProtectedDatabasePersistence;



@interface MFProtectedDatabasePersistence_iOS : EDProtectedDatabasePersistence



+(id)journalDatabaseName;
+(id)protectedDatabaseName;
-(BOOL)protectedDataAvailable;
-(BOOL)supportsJournaling;
-(void)addAdditionalCriteriaToCleanupActivity:(id)arg0 ;
-(void)finishJournalReconciliation:(NSUInteger)arg0 ;


@end


#endif