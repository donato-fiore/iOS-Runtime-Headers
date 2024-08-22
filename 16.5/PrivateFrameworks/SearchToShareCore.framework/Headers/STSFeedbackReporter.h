// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSFEEDBACKREPORTER_H
#define STSFEEDBACKREPORTER_H

@class PARSession;

#import <Foundation/Foundation.h>


@interface STSFeedbackReporter : NSObject

@property (retain, nonatomic) PARSession *parsecSession; // ivar: _parsecSession


+(id)sharedInstance;
-(id)didStartNetworkRequest:(id)arg0 query:(id)arg1 queryId:(NSUInteger)arg2 ;
-(void)didClearRecents;
-(void)didClearSearchBarInput;
-(void)didEndNetworkRequest:(id)arg0 infoDict:(id)arg1 ;
-(void)didEngageCategoryResult:(id)arg0 suggestion:(id)arg1 ;
-(void)didEngageProviderLogo;
-(void)didEngageResult:(id)arg0 ;
-(void)didGoToSearch:(id)arg0 ;
-(void)didLoadCategoryResults:(id)arg0 recents:(id)arg1 queryId:(NSUInteger)arg2 ;
-(void)didLoadResults:(id)arg0 indexPaths:(id)arg1 queryId:(NSUInteger)arg2 ;
-(void)didPreviewResult:(id)arg0 peek:(BOOL)arg1 ;
-(void)didPreviewResultLongPress:(id)arg0 ;
-(void)didReportConcern:(id)arg0 punchout:(id)arg1 ;
-(void)didSearchWithCustomQuery:(id)arg0 ;
-(void)didSearchWithSuggestedQuery:(id)arg0 ;
-(void)didShowProactiveCategories:(id)arg0 conversationId:(id)arg1 ;
-(void)didShowProactiveSuggestions:(id)arg0 conversationId:(id)arg1 ;
-(void)didShowQuerySuggestions:(id)arg0 queryId:(NSUInteger)arg1 ;
-(void)didShowResults:(id)arg0 scrolling:(BOOL)arg1 ;
-(void)didShowResults:(id)arg0 trigger:(NSUInteger)arg1 ;
-(void)resourceDidLoad:(id)arg0 ;
-(void)searchBarDidCancel;
-(void)searchViewDidAppearWithEvent:(NSUInteger)arg0 ;
-(void)searchViewDidDisappear;


@end


#endif