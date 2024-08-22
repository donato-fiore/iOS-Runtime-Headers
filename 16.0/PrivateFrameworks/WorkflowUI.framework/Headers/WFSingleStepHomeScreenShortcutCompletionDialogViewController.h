// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSINGLESTEPHOMESCREENSHORTCUTCOMPLETIONDIALOGVIEWCONTROLLER_H
#define WFSINGLESTEPHOMESCREENSHORTCUTCOMPLETIONDIALOGVIEWCONTROLLER_H

@class NSTimer;


#import "WFCompactDialogViewController.h"

@interface WFSingleStepHomeScreenShortcutCompletionDialogViewController : WFCompactDialogViewController

@property (retain, nonatomic) NSTimer *timer; // ivar: _timer


-(BOOL)allowsInteractiveDismiss;
-(BOOL)allowsInteractiveDismissal;
-(BOOL)isDraggingDismissalEnabled;
-(id)requestIdentifier;
-(id)responseForInteractiveDismissal;
-(void)loadView;
-(void)platterInteractionDidBegin;
-(void)platterInteractionDidFinish;
-(void)startTimer;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif