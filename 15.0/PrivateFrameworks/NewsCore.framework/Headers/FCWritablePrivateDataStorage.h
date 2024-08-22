// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCWRITABLEPRIVATEDATASTORAGE_H
#define FCWRITABLEPRIVATEDATASTORAGE_H

@class NSString;
@protocol FCWritablePrivateDataStorage;

#import <Foundation/Foundation.h>

#import "FCFileCoordinatedTodayDropbox.h"
#import "FCFileCoordinatedTodayPrivateDataTransactionQueue.h"

@interface FCWritablePrivateDataStorage : NSObject <FCWritablePrivateDataStorage>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) FCFileCoordinatedTodayDropbox *dropbox; // ivar: _dropbox
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) FCFileCoordinatedTodayPrivateDataTransactionQueue *transactionQueue; // ivar: _transactionQueue


-(id)init;
-(id)initWithDropbox:(id)arg0 transactionQueue:(id)arg1 ;
-(void)writeReadHistoryItem:(id)arg0 withCompletion:(id)arg1 ;
-(void)writeSeenHistoryItems:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif