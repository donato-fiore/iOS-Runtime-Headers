// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKGROUPEXPANSIONOPERATION_H
#define EKGROUPEXPANSIONOPERATION_H

@class NSOperation, NSString;


#import "EKDirectoryGroup.h"
#import "EKDirectorySearchResultSet.h"

@interface EKGroupExpansionOperation : NSOperation {
    BOOL _isFinished;
    BOOL _isExecuting;
    NSString *_accountID;
    EKDirectoryGroup *_group;
    id *_completionBlock;
    EKDirectorySearchResultSet *_resultsSet;
}




-(BOOL)isConcurrent;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)_processResults:(id)arg0 class:(Class)arg1 ;
-(id)initWithSource:(id)arg0 group:(id)arg1 completionBlock:(id)arg2 ;
-(void)_finishWithError:(id)arg0 ;
-(void)_processResults:(id)arg0 ;
-(void)main;
-(void)start;


@end


#endif