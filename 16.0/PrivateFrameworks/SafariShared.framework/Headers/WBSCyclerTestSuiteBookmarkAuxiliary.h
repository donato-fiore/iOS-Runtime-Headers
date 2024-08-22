// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSCYCLERTESTSUITEBOOKMARKAUXILIARY_H
#define WBSCYCLERTESTSUITEBOOKMARKAUXILIARY_H


#import <Foundation/Foundation.h>

#import "WBSCyclerOperation.h"

@interface WBSCyclerTestSuiteBookmarkAuxiliary : NSObject {
    WBSCyclerOperation *_initialClearOperation;
    WBSCyclerOperation *_resetToDAVModeOperation;
    WBSCyclerOperation *_generateDAVServerIDsForExistingBookmarksOperation;
    WBSCyclerOperation *_cloudKitMigrationOperation;
    WBSCyclerOperation *_clearLocalDataOperation;
}


@property (readonly, nonatomic) float operationBackoffRatio; // ivar: _operationBackoffRatio


-(BOOL)hasPerformedOperation:(NSInteger)arg0 ;
-(id)_attributeStringForBookmark:(id)arg0 multiline:(BOOL)arg1 ;
-(id)_descriptionForBookmark:(id)arg0 ;
-(id)_descriptionForErrorCode:(NSInteger)arg0 ;
-(id)_errorWithCode:(NSInteger)arg0 ;
-(id)_errorWithCode:(NSInteger)arg0 userInfo:(id)arg1 ;
-(id)_expandedDescriptionForBookmark:(id)arg0 ;
-(id)_formattedStringForBookmark:(id)arg0 indentationLevel:(NSUInteger)arg1 ;
-(id)init;
-(id)validateBookmarks:(id)arg0 expectingBookmarks:(id)arg1 context:(id)arg2 ;
-(void)_attemptCloudKitMigrationWithCompletionHandler:(id)arg0 ;
-(void)_attemptInitialClearWithTarget:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)_attemptResetToDAVModeWithCompletionHandler:(id)arg0 ;
-(void)_attemptToClearDataWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)_attemptToGenerateDAVServerIDsForExistingBookmarksWithCompletionHandler:(id)arg0 ;
-(void)fetchAndValidateBookmarksWithExpectedBookmarks:(id)arg0 context:(id)arg1 completionHandler:(id)arg2 ;
-(void)performOperation:(NSInteger)arg0 withTarget:(id)arg1 completionHandler:(id)arg2 ;
-(void)performOperation:(NSInteger)arg0 withTarget:(id)arg1 options:(id)arg2 completionHandler:(id)arg3 ;
-(void)resetOperation:(NSInteger)arg0 ;


@end


#endif