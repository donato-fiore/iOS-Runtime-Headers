// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCUISTATUSLABELVIEWCONTROLLER_H
#define CCUISTATUSLABELVIEWCONTROLLER_H

@class UIViewController, NSArray, NSTimer;
@protocol CCUIStatusLabelViewControllerDelegate;


#import "CCUIStatusUpdateQueue.h"

@interface CCUIStatusLabelViewController : UIViewController {
    CCUIStatusUpdateQueue *_updateQueue;
    NSArray *_statusLabels;
    NSUInteger _currentStatusLabelIndex;
    NSUInteger _presentationState;
    NSTimer *_presentationTimer;
}


@property (weak, nonatomic) NSObject<CCUIStatusLabelViewControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) UIEdgeInsets edgeInsets;
@property (nonatomic) NSUInteger verticalAlignment;


-(BOOL)_canShowWhileLocked;
-(NSUInteger)_advancePresentationStateFromFadeIn;
-(NSUInteger)_advancePresentationStateFromFadeOut;
-(NSUInteger)_advancePresentationStateFromPresenting;
-(NSUInteger)_advancePresentationStateFromReady;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_advancePresentationState;
-(void)_fadeInStatusLabel:(id)arg0 ;
-(void)_fadeOutStatusLabel:(id)arg0 ;
-(void)_notifyDelegateDidFinishStatusUpdates;
-(void)_notifyDelegateWillBeginStatusUpdates;
-(void)_resetPresentationStateAnimated:(BOOL)arg0 ;
-(void)enqueueStatusUpdate:(id)arg0 forIdentifier:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif