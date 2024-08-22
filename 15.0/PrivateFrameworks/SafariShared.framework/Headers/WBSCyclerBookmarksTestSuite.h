// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSCYCLERBOOKMARKSTESTSUITE_H
#define WBSCYCLERBOOKMARKSTESTSUITE_H

@class NSArray, NSString;
@protocol WBSCyclerTestSuite;

#import <Foundation/Foundation.h>

#import "WBSCyclerBookmarkOperationContext.h"
#import "WBSCyclerTestSuiteBookmarkAuxiliary.h"
#import "WBSCyclerBookmarkListRepresentation.h"

@interface WBSCyclerBookmarksTestSuite : NSObject <WBSCyclerTestSuite>

 {
    NSArray *_operations;
    NSArray *_relativeProbabilitiesForOperations;
    WBSCyclerBookmarkOperationContext *_operationContext;
    WBSCyclerTestSuiteBookmarkAuxiliary *_bookmarkAuxiliary;
    NSUInteger _iterationCount;
    WBSCyclerBookmarkListRepresentation *_expectedTopLevelBookmarksFromPreviousIteration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)setValue:(id)arg0 forConfigurationKey:(id)arg1 ;
-(BOOL)canHandleRequest:(id)arg0 ;
-(id)_descriptionForErrorCode:(NSInteger)arg0 ;
-(id)_errorWithCode:(NSInteger)arg0 userInfo:(id)arg1 ;
-(id)init;
-(void)_performCloudKitSecondaryMigrationAfterClearingBookmarksWithTarget:(id)arg0 initialBookmarks:(id)arg1 completionHandler:(id)arg2 ;
-(void)_performFinalServerBookmarkValidationAfterClearingAndSyncingWithInitialBookmarks:(id)arg0 completionHandler:(id)arg1 ;
-(void)_validateServerBookmarksAfterClearingLocallyWithTarget:(id)arg0 initialBookmarks:(id)arg1 completionHandler:(id)arg2 ;
-(void)_validateServerBookmarksAfterInitialSyncWithTarget:(id)arg0 completionHandler:(id)arg1 ;
-(void)_validateServerBookmarksWithTarget:(id)arg0 completionHandler:(id)arg1 ;
-(void)_validateServerBookmarksWithTarget:(id)arg0 initialBookmarks:(id)arg1 completionHandler:(id)arg2 ;
-(void)handleRequest:(id)arg0 withTarget:(id)arg1 completionHandler:(id)arg2 ;
-(void)runWithTarget:(id)arg0 completionHandler:(id)arg1 ;
-(void)setUp;
-(void)tearDown;


@end


#endif