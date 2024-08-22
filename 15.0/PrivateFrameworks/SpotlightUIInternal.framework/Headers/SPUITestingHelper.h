// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPUITESTINGHELPER_H
#define SPUITESTINGHELPER_H

@class UIApplication;

#import <Foundation/Foundation.h>

#import "SPUISearchViewController.h"
#import "SPUIPPTTypingHelper.h"

@interface SPUITestingHelper : NSObject

@property (readonly) UIApplication *activeApp;
@property BOOL finishedKeyboardLaunch; // ivar: _finishedKeyboardLaunch
@property BOOL finishedTableUpdate; // ivar: _finishedTableUpdate
@property (retain) SPUISearchViewController *searchViewController; // ivar: _searchViewController
@property (retain) SPUIPPTTypingHelper *typingHelper; // ivar: _typingHelper


+(id)indexPathsOfRowsForSectionTitle:(id)arg0 needsCard:(BOOL)arg1 forTableModel:(id)arg2 ;
-(BOOL)canPerformTest:(id)arg0 ;
-(id)initWithSearchViewController:(id)arg0 ;
-(void)finishLaunchTestIfNeeded;
-(void)performCardScrollTest:(id)arg0 queryKind:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)performPushPopCardsOnTest:(id)arg0 options:(id)arg1 needsCard:(BOOL)arg2 sectionHeader:(id)arg3 atDesk:(BOOL)arg4 queryKind:(NSUInteger)arg5 completion:(id)arg6 ;
-(void)performScrollOnSearchViewWithTestName:(id)arg0 completion:(id)arg1 ;
-(void)performTest:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)runPushTest:(id)arg0 sectionHeader:(id)arg1 searchString:(id)arg2 completion:(id)arg3 ;
-(void)scrollEntityForTest:(id)arg0 forQuery:(id)arg1 completion:(id)arg2 ;
-(void)scrollForSectionHeader:(id)arg0 forSearchString:(id)arg1 testName:(id)arg2 queryKind:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)scrollMainResultsForTest:(id)arg0 forQuery:(id)arg1 queryKind:(NSUInteger)arg2 completion:(id)arg3 ;
// -(void)searchForSectionHeader:(id)arg0 testName:(id)arg1 forSearchString:(id)arg2 queryKind:(NSUInteger)arg3 startPushHandler:(id)arg4 finishHandler:(unk)arg5  ;
-(void)searchForString:(id)arg0 testName:(id)arg1 event:(NSUInteger)arg2 queryKind:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)searchManyStringsForTestName:(id)arg0 options:(id)arg1 event:(NSUInteger)arg2 queryKind:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)searchString:(id)arg0 andOpenResultsUnderSection:(id)arg1 testName:(id)arg2 needsCard:(BOOL)arg3 queryKind:(NSUInteger)arg4 completion:(id)arg5 ;
-(void)searchStrings:(id)arg0 andOpenResultsUnderSection:(id)arg1 testName:(id)arg2 needsCard:(BOOL)arg3 queryKind:(NSUInteger)arg4 completion:(id)arg5 ;
-(void)searchViewFinishedGettingAllResultsAndFinishedDrawsWithCompletion:(id)arg0 ;
-(void)setDefaultsForSearchVCWithqueryType:(NSUInteger)arg0 ;
-(void)tapIndexsPathsAndPopViewControllersAfter2Seconds:(id)arg0 completion:(id)arg1 ;
-(void)testMapsCardsPushAndScrollForTestName:(id)arg0 string:(id)arg1 queryKind:(NSUInteger)arg2 completion:(id)arg3 ;


@end


#endif