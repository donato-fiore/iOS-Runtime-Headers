// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFCLOUDKITHISTORYANALYZER_H
#define PFCLOUDKITHISTORYANALYZER_H



#import "PFHistoryAnalyzer.h"
#import "NSManagedObjectContext.h"
#import "NSPersistentHistoryToken.h"

@interface PFCloudKitHistoryAnalyzer : PFHistoryAnalyzer {
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentHistoryToken *_lastProcessedToken;
}




+(BOOL)isPrivateContextName:(id)arg0 ;
+(BOOL)isPrivateTransaction:(id)arg0 ;
+(BOOL)isPrivateTransactionAuthor:(id)arg0 ;
-(BOOL)processTransaction:(id)arg0 withContext:(id)arg1 error:(*id)arg2 ;
-(id)initWithOptions:(id)arg0 managedObjectContext:(id)arg1 ;
-(id)instantiateNewAnalyzerContextForChangesInStore:(id)arg0 ;
-(void)dealloc;


@end


#endif