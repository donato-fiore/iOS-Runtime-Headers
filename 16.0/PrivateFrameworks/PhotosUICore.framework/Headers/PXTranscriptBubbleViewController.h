// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXTRANSCRIPTBUBBLEVIEWCONTROLLER_H
#define PXTRANSCRIPTBUBBLEVIEWCONTROLLER_H

@class UIViewController, UIView;
@protocol PXTranscriptBubbleDelegate;



@interface PXTranscriptBubbleViewController : UIViewController {
    BOOL _transitionInProgress;
    CGSize _lastRequestedSize;
    NSInteger _lastResizeRequestID;
    BOOL _isReadyForDisplay;
}


@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (weak, nonatomic) NSObject<PXTranscriptBubbleDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIView *targetContentView; // ivar: _targetContentView


-(BOOL)_requiresResizeForCurrentSize:(struct CGSize )arg0 ;
-(struct CGSize )_contentViewSizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )contentSizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )workaroundSizeForSize:(struct CGSize )arg0 ;
-(void)_resizeTimeoutForRequestID:(NSInteger)arg0 ;
-(void)_scheduleContentViewUpdate;
-(void)_switchToPendingTargetViewIfNecessary;
-(void)transitionToContentView:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif