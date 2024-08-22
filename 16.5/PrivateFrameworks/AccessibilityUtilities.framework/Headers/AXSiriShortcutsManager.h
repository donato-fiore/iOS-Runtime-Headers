// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXSIRISHORTCUTSMANAGER_H
#define AXSIRISHORTCUTSMANAGER_H

@class NSArray, WFObservableArrayResult, NSMutableDictionary, NSString, VCVoiceShortcutClient;
@protocol WFObservableResultObserver, WFWorkflowRunnerClientDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AXSiriShortcutsManager : NSObject <WFObservableResultObserver, WFWorkflowRunnerClientDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_cachedShortcuts;
    WFObservableArrayResult *_observedWorkflows;
    NSMutableDictionary *_updateBlocks;
    int _contentProtectionNotifyToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VCVoiceShortcutClient *shortcutClient; // ivar: _shortcutClient
@property (readonly, nonatomic) NSArray *shortcuts;
@property (readonly, nonatomic) NSUInteger source; // ivar: _source
@property (readonly) Class superclass;


+(id)sharedManager;
+(id)shortcutsManagerForSource:(NSUInteger)arg0 ;
-(id)initWithSource:(NSUInteger)arg0 ;
-(id)registerShortcutsDidChangeBlock:(id)arg0 ;
-(id)shortcutForIdentifier:(id)arg0 ;
-(void)_loadShortcuts;
-(void)_queue_loadShortcuts;
-(void)observableResultDidChange:(id)arg0 ;
-(void)performShortcut:(id)arg0 ;
-(void)unregisterShortcutsDidChangeBlock:(id)arg0 ;
-(void)workflowRunnerClient:(id)arg0 didFinishRunningWorkflowWithOutput:(id)arg1 error:(id)arg2 cancelled:(BOOL)arg3 ;
-(void)workflowRunnerClient:(id)arg0 didStartRunningWorkflowWithProgress:(id)arg1 ;


@end


#endif