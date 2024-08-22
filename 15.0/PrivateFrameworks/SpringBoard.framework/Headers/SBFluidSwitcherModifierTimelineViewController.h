// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFLUIDSWITCHERMODIFIERTIMELINEVIEWCONTROLLER_H
#define SBFLUIDSWITCHERMODIFIERTIMELINEVIEWCONTROLLER_H

@class UIViewController, NSMutableArray, UIScrollView, UIButton, UINavigationController, NSString;
@protocol _SBFluidSwitcherModifierTimelineEntryViewDelegate;


#import "_SBModifierTimelineDetailViewController.h"

@interface SBFluidSwitcherModifierTimelineViewController : UIViewController <_SBFluidSwitcherModifierTimelineEntryViewDelegate>

 {
    NSMutableArray *_entryViews;
    BOOL _ignoreNoise;
    UIScrollView *_scrollView;
    UIButton *_clearButton;
    UIButton *_noiseLevelButton;
    UINavigationController *_navigationController;
    _SBModifierTimelineDetailViewController *_detailViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isNoisyEntry:(id)arg0 ;
-(void)_reset:(id)arg0 ;
-(void)_toggleNoiseLevel:(id)arg0 ;
-(void)addEntry:(id)arg0 ;
-(void)didSelectEntryView:(id)arg0 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;


@end


#endif