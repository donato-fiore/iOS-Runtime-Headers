// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTTODAYRESULTOPERATION_H
#define NTTODAYRESULTOPERATION_H

@class FCOperation, NTPBTodayResultOperationInfo;
@protocol FCContentContext, NFCopying;



@interface NTTodayResultOperation : FCOperation

@property (retain, nonatomic) NSObject<FCContentContext> *contentContext; // ivar: _contentContext
@property (copy, nonatomic) id *headlineResultCompletionHandler; // ivar: _headlineResultCompletionHandler
@property (copy, nonatomic) NTPBTodayResultOperationInfo *operationInfo; // ivar: _operationInfo
@property (copy, nonatomic) NSObject<NFCopying> *prefetchedContent; // ivar: _prefetchedContent


-(id)init;


@end


#endif