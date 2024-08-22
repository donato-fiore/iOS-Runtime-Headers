// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCKTAGSEARCHQUERYOPERATION_H
#define FCCKTAGSEARCHQUERYOPERATION_H

@class NSString, CKQueryCursor, NSArray, NSError;


#import "FCOperation.h"
#import "FCCKContentDatabase.h"

@interface FCCKTagSearchQueryOperation : FCOperation {
    FCCKContentDatabase *_database;
    NSUInteger _resultsLimit;
    NSString *_searchString;
    NSInteger _tagType;
    CKQueryCursor *_cursor;
    NSArray *_desiredKeys;
    NSString *_locale;
    id *_queryCompletionHandler;
    NSString *_tagTypeString;
    NSArray *_resultRecords;
    CKQueryCursor *_resultCursor;
    NSError *_resultError;
}




-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;
-(void)prepareOperation;
-(void)resetForRetry;


@end


#endif