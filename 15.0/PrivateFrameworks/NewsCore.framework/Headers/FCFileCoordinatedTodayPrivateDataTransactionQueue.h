// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCFILECOORDINATEDTODAYPRIVATEDATATRANSACTIONQUEUE_H
#define FCFILECOORDINATEDTODAYPRIVATEDATATRANSACTIONQUEUE_H


#import <Foundation/Foundation.h>

#import "FCFileCoordinatedDictionary.h"

@interface FCFileCoordinatedTodayPrivateDataTransactionQueue : NSObject

@property (retain, nonatomic) FCFileCoordinatedDictionary *fileCoordinatedDictionary; // ivar: _fileCoordinatedDictionary


-(id)init;
-(id)initWithFileURL:(id)arg0 ;
-(void)dequeueTransactionsWithCompletion:(id)arg0 ;
-(void)enqueueTransaction:(id)arg0 withMaxTransactionCount:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)peekAtTransactionsWithCompletion:(id)arg0 ;


@end


#endif