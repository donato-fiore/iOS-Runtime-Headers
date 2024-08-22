// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9CHRONOKIT31LIVEWIDGETCONTENTVIEWCONTROLLER_H
#define _TTC9CHRONOKIT31LIVEWIDGETCONTENTVIEWCONTROLLER_H

@class TtC9ChronoKit31BaseWidgetContentViewController;



@interface _TtC9ChronoKit31LiveWidgetContentViewController : TtC9ChronoKit31BaseWidgetContentViewController {
    ? widget;
    ? metrics;
    ? viewModel;
    ? _isSnapshotting;
    ? hasAnimatableContent;
    ? _areAnimationsPaused;
    ? _animationsDisabledPreferenceObserver;
    ? _cachedAnimationsDisabledPreference;
    ? _rootViewModel;
    ? _isContentTransparent;
}


@property (nonatomic, readonly) BOOL shouldAutomaticallyForwardAppearanceMethods;


-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif