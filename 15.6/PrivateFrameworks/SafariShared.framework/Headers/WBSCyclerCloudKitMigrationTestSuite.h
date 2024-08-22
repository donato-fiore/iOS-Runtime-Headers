// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSCYCLERCLOUDKITMIGRATIONTESTSUITE_H
#define WBSCYCLERCLOUDKITMIGRATIONTESTSUITE_H

@class NSString;
@protocol WBSCyclerTestSuite;

#import <Foundation/Foundation.h>

#import "WBSCyclerTestSuiteBookmarkAuxiliary.h"
#import "WBSCyclerItemListRepresentation.h"

@interface WBSCyclerCloudKitMigrationTestSuite : NSObject <WBSCyclerTestSuite>

 {
    WBSCyclerTestSuiteBookmarkAuxiliary *_bookmarkAuxiliary;
    NSUInteger _bookmarksGeneratedPriorToMigration;
    WBSCyclerItemListRepresentation *_topLevelBookmarksPriorToMigration;
    BOOL _hasValidatedResultsOfPrimaryMigration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFinished) BOOL finished; // ivar: _finished
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)setValue:(id)arg0 forConfigurationKey:(id)arg1 ;
-(id)_descriptionForErrorCode:(NSInteger)arg0 ;
-(id)_errorWithCode:(NSInteger)arg0 ;
-(id)init;
-(void)_createRandomBookmarkWithTarget:(id)arg0 completionHandler:(id)arg1 ;
-(void)_fetchBookmarksPriorToMigrationWithTarget:(id)arg0 completionHandler:(id)arg1 ;
-(void)_generateDAVServerIDsForExistingBookmarksWithTarget:(id)arg0 completionHandler:(id)arg1 ;
-(void)_migrateToCloudKitWithTarget:(id)arg0 completionHandler:(id)arg1 ;
-(void)_validateResultsOfMigrationWithTarget:(id)arg0 completionHandler:(id)arg1 ;
-(void)runWithTarget:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif