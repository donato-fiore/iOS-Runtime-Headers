// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKLOOKAROUNDVIEWCONTROLLER_H
#define MKLOOKAROUNDVIEWCONTROLLER_H

@class UIViewController, UIVisualEffectView, UIButton, NSLayoutConstraint, UILabel, UIImageView, UIStackView, NSDateFormatter, UITapGestureRecognizer, UIFont, NSAttributedString, NSString;
@protocol MKLookAroundFullScreenViewControllerDelegate, MKLookAroundViewDelegate, NSSecureCoding, NSCoding, NSObject, MKLookAroundViewControllerDelegate;


#import "MKLookAroundFullScreenViewController.h"
#import "MKLookAroundTransitionController.h"
#import "_MKGradientView.h"
#import "MKLookAroundView.h"
#import "MKPointOfInterestFilter.h"
#import "MKLookAroundScene.h"

@interface MKLookAroundViewController : UIViewController <MKLookAroundFullScreenViewControllerDelegate, MKLookAroundViewDelegate, NSSecureCoding, NSCoding>

 {
    MKLookAroundFullScreenViewController *_fullScreenViewController;
    MKLookAroundTransitionController *_transitionController;
    NSUInteger _presentationType;
    _MKGradientView *_gradientView;
    UIVisualEffectView *_closeButtonView;
    UIButton *_closeButton;
    UIVisualEffectView *_badgeView;
    NSLayoutConstraint *_badgeViewVerticalConstraint;
    NSLayoutConstraint *_badgeViewHorizontalConstraint;
    UILabel *_badgeLabel;
    UIImageView *_appleLogoImageView;
    UIStackView *_infoStackView;
    UILabel *_locationLabel;
    UILabel *_localityLabel;
    UIStackView *_tertiaryLineStackView;
    UILabel *_imageryCollectionDateLabel;
    NSDateFormatter *_dateFormatter;
    UIButton *_attributionButton;
    MKLookAroundView *_lookAroundView;
    UITapGestureRecognizer *_selectGestureRecognizer;
    id<NSObject> *_didBecomeFullyDrawnObserver;
    BOOL _initialScene;
    BOOL _needsLookAroundViewUpdate;
    BOOL _needsSceneUpdate;
}


@property (readonly, nonatomic) UIFont *attributionButtonFont;
@property (readonly, nonatomic) NSAttributedString *badgeLabelGlyph;
@property (readonly, nonatomic) NSAttributedString *badgeLabelTitle;
@property (nonatomic) NSInteger badgePosition; // ivar: _badgePosition
@property (readonly, nonatomic) UIFont *buttonFont;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MKLookAroundViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didBecomeFullyDrawn; // ivar: _didBecomeFullyDrawn
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIFont *labelFont;
@property (nonatomic, getter=isNavigationEnabled) BOOL navigationEnabled; // ivar: _navigationEnabled
@property (copy, nonatomic) MKPointOfInterestFilter *pointOfInterestFilter; // ivar: _pointOfInterestFilter
@property (copy, nonatomic) MKLookAroundScene *scene; // ivar: _scene
@property (readonly, nonatomic) UIFont *secondaryLabelFont;
@property (nonatomic) BOOL showsRoadLabels; // ivar: _showsRoadLabels
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIFont *tertiaryLabelFont;


+(BOOL)supportsSecureCoding;
-(BOOL)_isDescendantOfRootViewController;
-(BOOL)_isPresentedFullScreen;
-(BOOL)_isPresentingFullScreen;
-(BOOL)_isTransitioningToOrFromFullScreen;
-(BOOL)_modalPresentationStyleIsFullScreen;
-(BOOL)_shouldRestrictLookAroundViewOptionsForPreview;
-(BOOL)lookAroundView:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(NSInteger)_preferredModalPresentationStyle;
-(NSInteger)overrideUserInterfaceStyle;
-(id)_contentView;
-(id)_fullScreenViewController;
-(id)_fullScreenViewControllerIfLoaded;
-(id)_transitionController;
-(id)_urlForMapAttribution;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithScene:(id)arg0 ;
-(id)viewForFullScreenViewController:(id)arg0 ;
-(struct CGRect )attributionButtonFrame;
-(void)_commonInit;
-(void)_contentSizeDidChange;
-(void)_didSelectView:(id)arg0 ;
-(void)_didTapAttributionButton:(id)arg0 ;
-(void)_didTapCloseButton:(id)arg0 ;
-(void)_setupConstraints;
-(void)_setupSubviews;
-(void)_transitionFromFullScreenAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_transitionToFullScreenAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_updateBadgeViewIfNeeded;
-(void)_updateCloseButtonIfNeeded;
-(void)_updateGradientIfNeeded;
-(void)_updateLookAroundViewIfNeeded;
-(void)_updateSceneIfNeeded;
-(void)_updateStackViewIfNeeded;
-(void)applyShadowToView:(id)arg0 withRadius:(CGFloat)arg1 offset:(struct CGSize )arg2 opacity:(float)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fullScreenViewController:(id)arg0 viewWillTransitionToSize:(struct CGSize )arg1 coordinator:(id)arg2 ;
-(void)fullScreenViewControllerDidDismiss:(id)arg0 ;
-(void)fullScreenViewControllerDidPresent:(id)arg0 ;
-(void)fullScreenViewControllerWillDismiss:(id)arg0 ;
-(void)fullScreenViewControllerWillPresent:(id)arg0 ;
-(void)lookAroundView:(id)arg0 didChangeCameraFrame:(id)arg1 ;
-(void)lookAroundView:(id)arg0 didChangeLocationInfo:(id)arg1 ;
-(void)lookAroundView:(id)arg0 didDeselectLabelMarker:(id)arg1 ;
-(void)lookAroundView:(id)arg0 didSelectLabelMarker:(id)arg1 ;
-(void)lookAroundView:(id)arg0 didTapAtPoint:(struct CGPoint )arg1 areaAvailable:(BOOL)arg2 ;
-(void)lookAroundView:(id)arg0 didTapLabelMarker:(id)arg1 ;
-(void)lookAroundView:(id)arg0 didZoomWithDirection:(NSInteger)arg1 type:(NSInteger)arg2 ;
-(void)lookAroundViewDidChangeRegion:(id)arg0 ;
-(void)lookAroundViewDidPan:(id)arg0 ;
-(void)lookAroundViewDidStartUserInteraction:(id)arg0 ;
-(void)lookAroundViewDidStopUserInteraction:(id)arg0 ;
-(void)lookAroundViewWillChangeLocationInfo:(id)arg0 ;
-(void)lookAroundViewWillChangeRegion:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif