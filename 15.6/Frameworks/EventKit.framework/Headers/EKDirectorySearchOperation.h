// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKDIRECTORYSEARCHOPERATION_H
#define EKDIRECTORYSEARCHOPERATION_H

@class NSOperation, NSString, NSError;


#import "EKDirectorySearchQuery.h"

@interface EKDirectorySearchOperation : NSOperation {
    BOOL _isFinished;
    BOOL _isExecuting;
    NSString *_accountID;
    EKDirectorySearchQuery *_query;
    id *_resultsBlock;
    id *_searchID;
}


@property (retain, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) BOOL numberOfMatchesExceededLimit; // ivar: _numberOfMatchesExceededLimit


+(BOOL)isSupported;
-(BOOL)isConcurrent;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)_processResults:(id)arg0 class:(Class)arg1 ;
-(id)_recordTypes;
-(id)init;
-(id)initWithSource:(id)arg0 query:(id)arg1 resultsBlock:(id)arg2 ;
-(void)_finishWithError:(id)arg0 ;
-(void)_processResults:(id)arg0 ;
-(void)cancel;
-(void)main;
-(void)start;


@end


#endif