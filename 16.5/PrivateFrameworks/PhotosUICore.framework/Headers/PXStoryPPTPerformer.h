// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYPPTPERFORMER_H
#define PXSTORYPPTPERFORMER_H

@class NSString, NSMutableDictionary, NSDictionary;
@protocol PXChangeObserver, PXAsyncIterator, PXPPTDelegate, PXStoryPlayerTestElement;

#import <Foundation/Foundation.h>

#import "PXStoryExportManager.h"
#import "PXStoryModel.h"
#import "PXStoryPPTResultsAggregate.h"

@interface PXStoryPPTPerformer : NSObject <PXChangeObserver>



@property (retain, nonatomic) NSObject<PXAsyncIterator> *configurationIterator; // ivar: _configurationIterator
@property (retain, nonatomic) NSString *configurationName; // ivar: _configurationName
@property (readonly, nonatomic) NSInteger currentTestIterations;
@property (readonly, nonatomic) NSString *currentTestName;
@property (readonly, nonatomic) CGFloat currentTestTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<PXPPTDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PXStoryExportManager *exportManager; // ivar: _exportManager
@property (readonly, nonatomic) NSMutableDictionary *extraResults; // ivar: _extraResults
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXStoryModel *observedModel; // ivar: _observedModel
@property (copy, nonatomic) id *playbackEndHandler; // ivar: _playbackEndHandler
@property (copy, nonatomic) id *playbackReadyToPlayHandler; // ivar: _playbackReadyToPlayHandler
@property (readonly, nonatomic) PXStoryPPTResultsAggregate *resultsAggregate; // ivar: _resultsAggregate
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<PXStoryPlayerTestElement> *testElement; // ivar: _testElement
@property (readonly, nonatomic) NSDictionary *testOptions; // ivar: _testOptions


-(id)_configurationSpecificSubtestName:(id)arg0 ;
-(id)_mainScrollViewInTungstenView:(id)arg0 ;
-(id)_tungstenViewForStoryFeedTestElement:(id)arg0 ;
-(id)_tungstenViewFromStoryPlayerTestElement:(id)arg0 ;
-(id)_viewModelForPlayerTestElement:(id)arg0 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 testOptions:(id)arg1 ;
-(void)_callPlaybackEndHandlerIfNeeded;
-(void)_callPlaybackReadyToPlayHandlerIfNeeded;
-(void)_cleanUpPlaybackTest;
-(void)_exportWithTestElement:(id)arg0 atResolution:(struct CGSize )arg1 completion:(id)arg2 ;
-(void)_finalize;
-(void)_installPlaybackEndHandler:(id)arg0 ;
-(void)_installPlaybackReadyToPlayHandler:(id)arg0 ;
-(void)_pausePlaybackWithTestElement:(id)arg0 ;
-(void)_preparePlaybackTestWithElement:(id)arg0 ;
// -(void)_produceTimelineForViewConfiguration:(id)arg0 initialCompletionHandler:(id)arg1 finalCompletionHandler:(unk)arg2  ;
-(void)_requestRecipeForViewConfiguration:(id)arg0 resultHandler:(id)arg1 ;
-(void)_runScrollSubtestOnScrollView:(id)arg0 containedInTungstenView:(id)arg1 completion:(id)arg2 ;
-(void)_runScrubbingSubtestWithTestElement:(id)arg0 direction:(NSInteger)arg1 subtestName:(id)arg2 completion:(id)arg3 ;
-(void)_runScrubbingSubtestsWithTestElement:(id)arg0 completion:(id)arg1 ;
-(void)_skipToSegmentWithTestElement:(id)arg0 direction:(NSInteger)arg1 completion:(id)arg2 ;
// -(void)enumerateFeedConfigurationsUsingBlock:(id)arg0 completion:(unk)arg1  ;
// -(void)enumerateStoryConfigurationsUsingBlock:(id)arg0 completion:(unk)arg1  ;
-(void)finishSubtestWithName:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)runExportTestWithElement:(id)arg0 completion:(id)arg1 ;
-(void)runFeedScrollingTestWithElement:(id)arg0 completion:(id)arg1 ;
-(void)runPlaybackStartTestWithElement:(id)arg0 completion:(id)arg1 ;
-(void)runPlaybackTestWithElement:(id)arg0 completion:(id)arg1 ;
-(void)runRecipeProductionTestWithViewConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)runScrollingWithTestElement:(id)arg0 completion:(id)arg1 ;
-(void)runScrubbingTestWithElement:(id)arg0 completion:(id)arg1 ;
-(void)runTimelineProductionTestWithViewConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)startSubtestWithName:(id)arg0 metrics:(id)arg1 ;


@end


#endif