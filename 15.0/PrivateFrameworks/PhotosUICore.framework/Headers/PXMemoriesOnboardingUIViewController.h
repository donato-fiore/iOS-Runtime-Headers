// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXMEMORIESONBOARDINGUIVIEWCONTROLLER_H
#define PXMEMORIESONBOARDINGUIVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol PXChangeObserver, PXMemoriesOnboardingViewControllerDelegate;


#import "PXPhotoAnalysisStatusController.h"
#import "PXOnboardingStatusUIView.h"
#import "PXOnboardingWelcomeUIView.h"

@interface PXMemoriesOnboardingUIViewController : UIViewController <PXChangeObserver>

 {
    ? _needsUpdateFlags;
}


@property (nonatomic, setter=_setStage:) NSUInteger _stage; // ivar: __stage
@property (readonly, nonatomic) PXPhotoAnalysisStatusController *_statusController; // ivar: __statusController
@property (nonatomic, setter=_setStatusView:) PXOnboardingStatusUIView *_statusView; // ivar: __statusView
@property (nonatomic, setter=_setWelcomeView:) PXOnboardingWelcomeUIView *_welcomeView; // ivar: __welcomeView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXMemoriesOnboardingViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_needsUpdate;
-(id)_constraintsForMaximizingView:(id)arg0 ;
-(void)_invalidateProgress;
-(void)_invalidateStage;
-(void)_setNeedsUpdate;
-(void)_tearDownViews;
-(void)_updateIfNeeded;
-(void)_updateProgressIfNeeded;
-(void)_updateStageIfNeeded;
-(void)_updateViews;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)startButtonTapped:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif