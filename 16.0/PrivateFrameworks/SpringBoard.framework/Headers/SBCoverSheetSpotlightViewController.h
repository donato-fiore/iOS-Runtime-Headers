// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBCOVERSHEETSPOTLIGHTVIEWCONTROLLER_H
#define SBCOVERSHEETSPOTLIGHTVIEWCONTROLLER_H

@class CSCoverSheetViewControllerBase, CSProudLockComponent, CSDateViewComponent, CSContentComponent, CSWallpaperFloatingLayerComponent, NSString, SBHHomePullToSearchSettings;
@protocol CSDismissableModalViewControllerDelegate, SBSearchPresentable, SBCoverSheetSpotlightViewControllerDelegate;


#import "SBSpotlightPresentableViewController.h"

@interface SBCoverSheetSpotlightViewController : CSCoverSheetViewControllerBase <CSDismissableModalViewControllerDelegate, SBSearchPresentable>

 {
    CSProudLockComponent *_proudLockComponent;
    CSDateViewComponent *_dateViewComponent;
    CSContentComponent *_contentComponent;
    CSWallpaperFloatingLayerComponent *_wallpaperFloatingLayerComponent;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBCoverSheetSpotlightViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat maxPresentationOffset; // ivar: _maxPresentationOffset
@property (retain, nonatomic) SBHHomePullToSearchSettings *searchTransitionSettings;
@property (retain, nonatomic) SBSpotlightPresentableViewController *spotlightViewController; // ivar: _spotlightViewController
@property (readonly) Class superclass;
@property (nonatomic) CGFloat topOffset; // ivar: _topOffset


-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)presentationCancelsTouches;
-(CGFloat)_scaleGivenTranslation:(CGFloat)arg0 ;
-(id)_newDisplayLayoutElement;
-(id)initWithSpotlightViewController:(id)arg0 ;
-(id)willBeginAnimatingPresentationProgressForState:(SEL)arg0 needsInitialLayout:(NSInteger)arg1 ;
-(void)_updatePresentationProgress:(CGFloat)arg0 withOffset:(CGFloat)arg1 presentationState:(NSInteger)arg2 applyBlock:(id)arg3 ;
-(void)_updateSpotlightScale:(CGFloat)arg0 interactive:(BOOL)arg1 ;
-(void)addGrabberView:(id)arg0 ;
-(void)aggregateAppearance:(id)arg0 ;
-(void)aggregateBehavior:(id)arg0 ;
-(void)dismissForHomeButton;
-(void)handleBottomEdgeGestureChanged:(id)arg0 ;
-(void)handleBottomEdgeGestureEnded:(id)arg0 ;
-(void)invalidate;
-(void)updateComponentTransitionWithOffset:(CGFloat)arg0 presentationState:(NSInteger)arg1 ;
-(void)updatePresentationProgress:(CGFloat)arg0 withOffset:(CGFloat)arg1 presentationState:(NSInteger)arg2 ;
-(void)updatePresentationProgress:(CGFloat)arg0 withOffset:(CGFloat)arg1 presentationState:(NSInteger)arg2 applyBlock:(id)arg3 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif