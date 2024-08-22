// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCKCONTENTFETCHOPERATION_H
#define FCCKCONTENTFETCHOPERATION_H

@class NSArray, NSDictionary;


#import "FCNetworkOperation.h"
#import "FCCKContentDatabase.h"

@interface FCCKContentFetchOperation : FCNetworkOperation {
    BOOL _getPermanentAssetURLs;
    int _networkEventType;
    FCCKContentDatabase *_database;
    NSArray *_recordIDs;
    NSDictionary *_recordIDsToETags;
    NSArray *_desiredKeys;
    id *_perRecordCompletionBlock;
    id *_fetchRecordsCompletionBlock;
    NSArray *_requestUUIDs;
    NSDictionary *_resultRecordsByRecordID;
}




-(BOOL)validateOperation;
-(id)init;
-(id)throttleGroup;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif