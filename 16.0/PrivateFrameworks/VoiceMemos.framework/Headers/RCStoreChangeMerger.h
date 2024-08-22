// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RCSTORECHANGEMERGER_H
#define RCSTORECHANGEMERGER_H

@class NSPersistentStore, NSString, NSPersistentHistoryToken, NSMutableArray, NSManagedObjectContext, NSDate, NSEntityDescription;
@protocol RCStoreChangeMergerDelegate;

#import <Foundation/Foundation.h>


@interface RCStoreChangeMerger : NSObject {
    NSPersistentStore *_store;
    NSString *_transactionAuthor;
    NSPersistentHistoryToken *_currentHistoryToken;
    NSPersistentHistoryToken *_latestHistoryToken;
    NSMutableArray *_transactionsBuffer;
    NSManagedObjectContext *_viewContext;
    NSDate *_changeNotificationDate;
    NSEntityDescription *_cloudRecordingEntity;
    id *_firstInsertBlock;
}


@property (weak, nonatomic) NSObject<RCStoreChangeMergerDelegate> *delegate; // ivar: _delegate


-(BOOL)_isRelevantTransaction:(id)arg0 ;
-(id)_nextTransactionAfterToken:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(id)initWithPersistentStore:(id)arg0 transactionAuthor:(id)arg1 startingToken:(id)arg2 viewContext:(id)arg3 ;
-(void)handleChange:(id)arg0 ;
-(void)setFirstInsertBlock:(id)arg0 ;


@end


#endif