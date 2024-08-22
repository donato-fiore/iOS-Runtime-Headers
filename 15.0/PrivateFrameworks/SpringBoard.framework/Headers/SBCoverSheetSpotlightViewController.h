// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBCOVERSHEETSPOTLIGHTVIEWCONTROLLER_H
#define SBCOVERSHEETSPOTLIGHTVIEWCONTROLLER_H

@class CSCoverSheetViewControllerBase, UIView, UIViewFloatAnimatableProperty, SBFFluidBehaviorSettings, MTMaterialView, NSString;
@protocol CSDismissableModalViewControllerDelegate, SBCoverSheetSpotlightViewControllerDelegate, SPUIRemoteSearchViewDelegate;


#import "_SBCoverSheetSpotlightViewController.h"

@interface SBCoverSheetSpotlightViewController : CSCoverSheetViewControllerBase <CSDismissableModalViewControllerDelegate>

 {
    UIView *_scaleView;
    UIViewFloatAnimatableProperty *_scaleProperty;
    SBFFluidBehaviorSettings *_scaleSettings;
    MTMaterialView *_searchLumSatBackdropView;
    MTMaterialView *_searchBlurBackdropView;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBCoverSheetSpotlightViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldModifyProudLock; // ivar: _shouldModifyProudLock
@property (weak, nonatomic) NSObject<SPUIRemoteSearchViewDelegate> *spotlightDelegate; // ivar: _spotlightDelegate
@property (retain, nonatomic) _SBCoverSheetSpotlightViewController *spotlightViewController; // ivar: _spotlightViewController
@property (readonly) Class superclass;


-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)presentationCancelsTouches;
-(CGFloat)_scaleGivenTranslation:(CGFloat)arg0 ;
-(id)displayLayoutElementIdentifier;
-(id)init;
-(void)_createProperties;
-(void)_setCornerRounded:(BOOL)arg0 ;
-(void)_updateForPropertyChanged;
-(void)_updateSpotlightScale:(CGFloat)arg0 interactive:(BOOL)arg1 ;
-(void)addGrabberView:(id)arg0 ;
-(void)aggregateAppearance:(id)arg0 ;
-(void)aggregateBehavior:(id)arg0 ;
-(void)dismissForHomeButton;
-(void)handleBottomEdgeGestureBegan:(id)arg0 ;
-(void)handleBottomEdgeGestureChanged:(id)arg0 ;
-(void)handleBottomEdgeGestureEnded:(id)arg0 ;
-(void)invalidate;
-(void)loadView;
-(void)updatePresentationProgressWithOffset:(CGFloat)arg0 blurProgress:(CGFloat)arg1 searchState:(NSInteger)arg2 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif