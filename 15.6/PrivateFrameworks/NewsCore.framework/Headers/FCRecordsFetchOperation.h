// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCRECORDSFETCHOPERATION_H
#define FCRECORDSFETCHOPERATION_H

@class NSArray, NSDictionary;


#import "FCFetchOperation.h"
#import "FCRecordSource.h"
#import "FCInterestToken.h"

@interface FCRecordsFetchOperation : FCFetchOperation {
    FCRecordSource *_recordSource;
    NSArray *_recordIdentifiers;
    NSArray *_ignoreCacheForRecordIDs;
    NSDictionary *_holdTokens;
    FCInterestToken *_fetchToken;
    FCInterestToken *_refreshToken;
}




-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif