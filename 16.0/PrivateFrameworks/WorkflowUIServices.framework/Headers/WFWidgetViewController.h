// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFWIDGETVIEWCONTROLLER_H
#define WFWIDGETVIEWCONTROLLER_H

@class UIViewController, WFWidgetWorkflowRunnerClient, NSString;
@protocol WFWidgetGridViewDelegate, WFWorkflowRunnerClientDelegate, OS_os_log;


#import "WFWidgetCache.h"
#import "WFWidgetGridView.h"
#import "WFWidgetOptions.h"

@interface WFWidgetViewController : UIViewController <WFWidgetGridViewDelegate, WFWorkflowRunnerClientDelegate>



@property (readonly, nonatomic) WFWidgetCache *cache; // ivar: _cache
@property (retain, nonatomic) WFWidgetWorkflowRunnerClient *client; // ivar: _client
@property (readonly, nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) WFWidgetGridView *gridView; // ivar: _gridView
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (nonatomic) BOOL needsLayout; // ivar: _needsLayout
@property (readonly, nonatomic) WFWidgetOptions *options; // ivar: _options
@property (nonatomic) BOOL running; // ivar: _running
@property (readonly) Class superclass;


+(id)progressSubscribers;
-(BOOL)_canShowWhileLocked;
-(NSUInteger)limitFromOptions:(id)arg0 ;
-(id)initWithOptions:(id)arg0 ;
-(id)publishingHandlerForCell:(SEL)arg0 ;
-(id)runningContextForWorkflowIdentifier:(id)arg0 ;
-(id)workflowOrFolderIdentifierFromOptions:(id)arg0 ;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)dealloc;
-(void)gridView:(id)arg0 cellDidTransitionToRunningState:(NSInteger)arg1 ;
-(void)gridView:(id)arg0 didTapCell:(id)arg1 ;
-(void)gridViewDidFinishLayout:(id)arg0 ;
-(void)handleUpdateFromCache:(id)arg0 ;
-(void)layoutWithWorkflows:(id)arg0 ;
-(void)loadView;
-(void)refreshWorkflows;
-(void)removeStaleRunningContexts;
-(void)restoreRunningStateIfNecessary;
-(void)resumeRunningWithCell:(id)arg0 ;
-(void)showRunningUIForCell:(id)arg0 ;
-(void)startObservingContentSizeCategoryNotifications;
-(void)stopObservingContentSizeCategoryNotifications;
-(void)stopRunningWithCell:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)workflowRunnerClient:(id)arg0 didFinishRunningWorkflowWithOutput:(id)arg1 error:(id)arg2 cancelled:(BOOL)arg3 ;


@end


#endif